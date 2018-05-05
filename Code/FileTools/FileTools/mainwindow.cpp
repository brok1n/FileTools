#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_selectDirBtn_clicked()
{
    QFileDialog selectDirDialog(this);
    selectDirDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
    selectDirDialog.setFileMode(QFileDialog::DirectoryOnly);
     QStringList fileNames;
    if ( selectDirDialog.exec() ){
         fileNames = selectDirDialog.selectedFiles();
    }

//    for(QString tmp:fileNames)
//        qDebug(tmp.toLatin1().data());

    if ( fileNames.size() > 0 ) {
        processPath = fileNames.at(0);
    }

    qDebug(processPath.toLocal8Bit().constData());

    ui->pathEdit->setText(processPath);


}

void MainWindow::on_selectFileBtn_clicked()
{

}

void MainWindow::on_containChildDirCheckBox_toggled(bool checked)
{
    if ( checked ) {
        qDebug("contain child dir check box is checked");
    } else {
        qDebug("contain child dir check box isn't checked");
    }
}

void MainWindow::on_containChildDirCheckBox_stateChanged(int arg1)
{

}
