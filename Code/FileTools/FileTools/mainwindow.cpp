#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "smtpClient/smtpclient.h"

#include "circle.h"
#include <QDesktopServices>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//文件夹选择按钮被点击
void MainWindow::on_selectDirBtn_clicked()
{
    QFileDialog selectDirDialog(this);
    //设置桌面为默认选择框展示路径
    selectDirDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
    //目录选择
    selectDirDialog.setFileMode(QFileDialog::DirectoryOnly);
     QStringList fileNames;
     //展示选择框 直到用户确定或者取消
    if ( selectDirDialog.exec() ){
        //用户选择了某个文件夹
        fileNames = selectDirDialog.selectedFiles();
        //确认用户选择了文件夹 保存用户选择的文件夹路径 并展示在界面上
        if ( fileNames.size() > 0 ) {
            processPath = fileNames.at(0);
            qDebug(processPath.toUtf8().constData());
            ui->pathEdit->setText(processPath);
        }
    } else {
        //用户取消
        qDebug("user cancel select dir");
    }
}

//文件选择按钮被点击
void MainWindow::on_selectFileBtn_clicked()
{
    QFileDialog selectFileDialog(this);
    //设置桌面为默认选择框展示路径
    selectFileDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
    //选择文件
    selectFileDialog.setFileMode(QFileDialog::AnyFile);
    QStringList fileNames;
    //展示选择框 直到用户确定或者取消
    if ( selectFileDialog.exec() ){
        //用户选择了某个文件
        fileNames = selectFileDialog.selectedFiles();
        //确认用户选择了文件，保存用户选择的文件路径 并展示在界面上
        if ( fileNames.size() > 0 ) {
            processPath = fileNames.at(0);
            qDebug(processPath.toUtf8().constData());
            ui->pathEdit->setText(processPath);
        }
    } else {
        //用户取消
        qDebug("user cancel select file");
    }
}

//输出到原始目录复选框状态改变
void MainWindow::on_outputToOriginDirCbox_stateChanged(int arg1)
{
    if ( arg1 == Qt::Checked ){
        this->ui->outDirLabel->setEnabled(false);
        this->ui->outDirEdt->setEnabled(false);
        this->ui->selectOutDirBtn->setEnabled(false);
        qDebug("out put to origin dir checkBox is checked");
    } else {
        this->ui->outDirLabel->setEnabled(true);
        this->ui->outDirEdt->setEnabled(true);
        this->ui->selectOutDirBtn->setEnabled(true);
        qDebug("out put to origin dir checkBox isn't checked");
    }
}

//建议反馈输入框文字改变
void MainWindow::on_feedBackTextEdt_textChanged()
{
    //获取输入的文字和输入文字个数
    QString str = this->ui->feedBackTextEdt->toPlainText();
    int count = str.length();
    //输入文字个数小于等于800 只改变输入文字个数文本框展示内容
    if ( count <= 800 ) {
        this->ui->feedBackTextCountLabel->setText(QString("%1/800").arg(count));
    } else {
        //输入文字个数大于800 截取 只能输入800个字
        str = str.mid(0, 800);
        count = str.length();
        this->ui->feedBackTextEdt->setPlainText(str);
        this->ui->feedBackTextCountLabel->setText(QString("%1/800").arg(count));
        QTextCursor textCursor = this->ui->feedBackTextEdt->textCursor();
        textCursor.movePosition(QTextCursor::End);
        this->ui->feedBackTextEdt->setTextCursor(textCursor);
    }
}

//提交建议反馈按钮被点击
void MainWindow::on_submitFeedBackMessageBtn_clicked()
{
    QString msgStr = this->ui->feedBackTextEdt->toPlainText();
    qDebug("msg: %s", msgStr.toUtf8().constData());

    Circle circle;
    int a = circle.addition(3, 5);
    int b = circle.subtraction(3, 5);
    int c = circle.multiplication(3, 5);
    qDebug("3 + 5 = %d", a);
    qDebug("3 - 5 = %d", b);
    qDebug("3 * 5 = %d", c);

//    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

//       // We need to set the username (your email address) and the password
//       // for smtp authentification.

//       smtp.setUser("your_email_address@gmail.com");
//       smtp.setPassword("your_password");

//       // Now we create a MimeMessage object. This will be the email.

//       MimeMessage message;

//       message.setSender(new EmailAddress("your_email_address@gmail.com", "Your Name"));
//       message.addRecipient(new EmailAddress("recipient@host.com", "Recipient's Name"));
//       message.setSubject("SmtpClient for Qt - Demo");

//       // Now add some text to the email.
//       // First we create a MimeText object.

//       MimeText text;

//       text.setText("Hi,\nThis is a simple email message.\n");

//       // Now add it to the mail

//       message.addPart(&text);

//       // Now we can send the mail

//       smtp.connectToHost();
//       smtp.login();
//       smtp.sendMail(message);
//       smtp.quit();

}
