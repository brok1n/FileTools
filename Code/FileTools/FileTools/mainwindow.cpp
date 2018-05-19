#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "circle.h"
#include <QDesktopServices>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //初始化
    //将操作选项 默认只可以选择第一个  第一个选择之后 才可以选择第二个
    ui->oneSpinner->setEnabled(true);
    ui->oneOperatorSpinner->setEnabled(false);
    ui->twoSpinner->setEnabled(false);
    ui->twoOperatorSpinner->setEnabled(false);
    ui->threeSpinner->setEnabled(false);
    ui->threeOperatorSpinner->setEnabled(false);
    ui->fourSpinner->setEnabled(false);

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

}

//第一个操作选项被选择
void MainWindow::on_oneSpinner_currentIndexChanged(int index)
{
    qDebug(QString("第一个操作选择了:%1").arg(index).toUtf8().constData());
    //当 选择了第一个操作 则 第一个操作符可以被选择
    if ( index > 0 ) {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
//        ui->twoSpinner->setEnabled(false);
//        ui->twoOperatorSpinner->setEnabled(false);
//        ui->threeSpinner->setEnabled(false);
//        ui->threeOperatorSpinner->setEnabled(false);
//        ui->fourSpinner->setEnabled(false);
    } else {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(false);
        ui->twoSpinner->setEnabled(false);
        ui->twoOperatorSpinner->setEnabled(false);
        ui->threeSpinner->setEnabled(false);
        ui->threeOperatorSpinner->setEnabled(false);
        ui->fourSpinner->setEnabled(false);

        ui->oneOperatorSpinner->setCurrentIndex(0);
        ui->twoSpinner->setCurrentIndex(0);
        ui->twoOperatorSpinner->setCurrentIndex(0);
        ui->threeSpinner->setCurrentIndex(0);
        ui->threeOperatorSpinner->setCurrentIndex(0);
        ui->fourSpinner->setCurrentIndex(0);
    }


}

void MainWindow::on_oneOperatorSpinner_currentIndexChanged(int index)
{
    //当选择了第一个操作符 则 第二个操作可以被选择
    if ( index > 0 ) {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
//        ui->twoOperatorSpinner->setEnabled(false);
//        ui->threeSpinner->setEnabled(false);
//        ui->threeOperatorSpinner->setEnabled(false);
//        ui->fourSpinner->setEnabled(false);

        ui->twoSpinner->setItemText(0, QString("a"));

    } else {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(false);
        ui->twoOperatorSpinner->setEnabled(false);
        ui->threeSpinner->setEnabled(false);
        ui->threeOperatorSpinner->setEnabled(false);
        ui->fourSpinner->setEnabled(false);

        ui->twoSpinner->setCurrentIndex(0);
        ui->twoOperatorSpinner->setCurrentIndex(0);
        ui->threeSpinner->setCurrentIndex(0);
        ui->threeOperatorSpinner->setCurrentIndex(0);
        ui->fourSpinner->setCurrentIndex(0);
    }
}

void MainWindow::on_twoSpinner_currentIndexChanged(int index)
{
    //当选择了第二个操作 则 第二个操作符可以被选择
    if ( index > 0 ) {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
        ui->twoOperatorSpinner->setEnabled(true);
//        ui->threeSpinner->setEnabled(false);
//        ui->threeOperatorSpinner->setEnabled(false);
//        ui->fourSpinner->setEnabled(false);
    } else {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
        ui->twoOperatorSpinner->setEnabled(false);
        ui->threeSpinner->setEnabled(false);
        ui->threeOperatorSpinner->setEnabled(false);
        ui->fourSpinner->setEnabled(false);

        ui->twoOperatorSpinner->setCurrentIndex(0);
        ui->threeSpinner->setCurrentIndex(0);
        ui->threeOperatorSpinner->setCurrentIndex(0);
        ui->fourSpinner->setCurrentIndex(0);
    }
}

void MainWindow::on_twoOperatorSpinner_currentIndexChanged(int index)
{
    //当选择了第二个操作符 则 第三个操作可以被选择
    if ( index > 0 ) {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
        ui->twoOperatorSpinner->setEnabled(true);
        ui->threeSpinner->setEnabled(true);
//        ui->threeOperatorSpinner->setEnabled(false);
//        ui->fourSpinner->setEnabled(false);
    } else {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
        ui->twoOperatorSpinner->setEnabled(true);
        ui->threeSpinner->setEnabled(false);
        ui->threeOperatorSpinner->setEnabled(false);
        ui->fourSpinner->setEnabled(false);

        ui->threeSpinner->setCurrentIndex(0);
        ui->threeOperatorSpinner->setCurrentIndex(0);
        ui->fourSpinner->setCurrentIndex(0);

    }
}

void MainWindow::on_threeSpinner_currentIndexChanged(int index)
{
    //当选择了第三个操作 则 第三个操作符可以被选择
    if ( index > 0 ) {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
        ui->twoOperatorSpinner->setEnabled(true);
        ui->threeSpinner->setEnabled(true);
        ui->threeOperatorSpinner->setEnabled(true);
//        ui->fourSpinner->setEnabled(false);
    } else {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
        ui->twoOperatorSpinner->setEnabled(true);
        ui->threeSpinner->setEnabled(true);
        ui->threeOperatorSpinner->setEnabled(false);
        ui->fourSpinner->setEnabled(false);

        ui->fourSpinner->setCurrentIndex(0);
        ui->threeOperatorSpinner->setCurrentIndex(0);
    }
}

void MainWindow::on_threeOperatorSpinner_currentIndexChanged(int index)
{
    //当选择了第三个操作符  则 第四个操作可以被选择
    if ( index > 0 ) {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
        ui->twoOperatorSpinner->setEnabled(true);
        ui->threeSpinner->setEnabled(true);
        ui->threeOperatorSpinner->setEnabled(true);
        ui->fourSpinner->setEnabled(true);
    } else {
        ui->oneSpinner->setEnabled(true);
        ui->oneOperatorSpinner->setEnabled(true);
        ui->twoSpinner->setEnabled(true);
        ui->twoOperatorSpinner->setEnabled(true);
        ui->threeSpinner->setEnabled(true);
        ui->threeOperatorSpinner->setEnabled(true);
        ui->fourSpinner->setEnabled(false);
        //恢复第四个操作为无
        ui->fourSpinner->setCurrentIndex(0);
    }
}

void MainWindow::on_fourSpinner_currentIndexChanged(int index)
{

}
