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

    void on_selectDirBtn_clicked();

    void on_selectFileBtn_clicked();

    void on_containChildDirCheckBox_toggled(bool checked);

    void on_containChildDirCheckBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QString processPath;
};

#endif // MAINWINDOW_H
