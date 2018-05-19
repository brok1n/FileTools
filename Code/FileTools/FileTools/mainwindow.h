#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    //选择目录按钮被点击
    void on_selectDirBtn_clicked();
    //选择文件按钮被点击
    void on_selectFileBtn_clicked();
    //输出到原始目录复选框状态改变
    void on_outputToOriginDirCbox_stateChanged(int arg1);
    //建议反馈输入框文字改变
    void on_feedBackTextEdt_textChanged();
    //提交建议反馈按钮被点击
    void on_submitFeedBackMessageBtn_clicked();

private:
    Ui::MainWindow *ui;
    QString processPath;//要处理的文件或目录
};

#endif // MAINWINDOW_H
