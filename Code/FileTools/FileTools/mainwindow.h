#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


//操作类型枚举
enum OP_TYPE {
    OP_NONE,    //无
    OP_SAVE_HAS,    //保存包含
    OP_SAVE_NOT_HAS,    //保存不包含
    OP_SAVE_BEFORE,     //保存之前
    OP_SAVE_AFTER,  //保存之后
    OP_COUNT    //枚举个数
};


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
    //第一个操作选项被选择
    void on_oneSpinner_currentIndexChanged(int index);

    void on_oneOperatorSpinner_currentIndexChanged(int index);

    void on_twoSpinner_currentIndexChanged(int index);

    void on_twoOperatorSpinner_currentIndexChanged(int index);

    void on_threeSpinner_currentIndexChanged(int index);

    void on_threeOperatorSpinner_currentIndexChanged(int index);

    void on_fourSpinner_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QString processPath;//要处理的文件或目录
};

#endif // MAINWINDOW_H
