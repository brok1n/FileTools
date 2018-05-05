/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QPushButton *pushButton;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_13;
    QComboBox *comboBox_14;
    QComboBox *comboBox_15;
    QComboBox *comboBox_16;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_9;
    QLineEdit *lineEdit_20;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *lineEdit_21;
    QGroupBox *groupBox_10;
    QLineEdit *lineEdit_22;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *lineEdit_23;
    QGroupBox *groupBox_5;
    QCheckBox *containChildDirCheckBox;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QLabel *label_11;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_8;
    QCheckBox *checkBox;
    QLabel *label_18;
    QLineEdit *lineEdit_15;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_11;
    QPushButton *selectFileBtn;
    QLabel *label;
    QLineEdit *pathEdit;
    QPushButton *selectDirBtn;
    QWidget *widget;
    QLabel *label_27;
    QWidget *widget_2;
    QLabel *label_28;
    QProgressBar *progressBar;
    QFrame *line;
    QWidget *widget_3;
    QLabel *label_29;
    QWidget *tab_2;
    QGroupBox *groupBox_12;
    QPushButton *selectFileBtn_2;
    QLabel *label_30;
    QLineEdit *pathEdit_2;
    QPushButton *selectDirBtn_2;
    QGroupBox *groupBox_13;
    QCheckBox *containChildDirCheckBox_3;
    QLabel *label_31;
    QLineEdit *lineEdit_24;
    QLabel *label_32;
    QComboBox *comboBox_17;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_25;
    QComboBox *comboBox_18;
    QLabel *label_33;
    QComboBox *comboBox_19;
    QLabel *label_34;
    QLineEdit *lineEdit_26;
    QWidget *tab_3;
    QWidget *tab_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 600);
        MainWindow->setMinimumSize(QSize(850, 600));
        MainWindow->setMaximumSize(QSize(850, 600));
        MainWindow->setBaseSize(QSize(850, 600));
        QIcon icon;
        icon.addFile(QStringLiteral("fileTools.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 850, 600));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(850, 600));
        tabWidget->setMaximumSize(QSize(850, 600));
        tabWidget->setBaseSize(QSize(850, 600));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 470, 821, 61));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 20, 111, 31));
        comboBox_4 = new QComboBox(groupBox_3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(10, 21, 81, 31));
        comboBox_5 = new QComboBox(groupBox_3);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(90, 21, 61, 31));
        comboBox_6 = new QComboBox(groupBox_3);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(150, 21, 81, 31));
        comboBox_13 = new QComboBox(groupBox_3);
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->setObjectName(QStringLiteral("comboBox_13"));
        comboBox_13->setGeometry(QRect(460, 21, 111, 31));
        comboBox_14 = new QComboBox(groupBox_3);
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->setObjectName(QStringLiteral("comboBox_14"));
        comboBox_14->setGeometry(QRect(390, 21, 71, 31));
        comboBox_15 = new QComboBox(groupBox_3);
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->setObjectName(QStringLiteral("comboBox_15"));
        comboBox_15->setGeometry(QRect(290, 21, 101, 31));
        comboBox_16 = new QComboBox(groupBox_3);
        comboBox_16->addItem(QString());
        comboBox_16->addItem(QString());
        comboBox_16->addItem(QString());
        comboBox_16->setObjectName(QStringLiteral("comboBox_16"));
        comboBox_16->setGeometry(QRect(230, 21, 61, 31));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(580, 30, 111, 16));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 180, 821, 221));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(410, 20, 401, 91));
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(80, 20, 301, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 20, 61, 21));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(80, 60, 301, 20));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 60, 81, 21));
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 371, 91));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 20, 271, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 61, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 71, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 60, 271, 20));
        groupBox_9 = new QGroupBox(groupBox_4);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 120, 371, 91));
        lineEdit_20 = new QLineEdit(groupBox_9);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(80, 20, 271, 20));
        label_23 = new QLabel(groupBox_9);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 20, 61, 21));
        label_23->setLayoutDirection(Qt::LeftToRight);
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_24 = new QLabel(groupBox_9);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 60, 101, 21));
        lineEdit_21 = new QLineEdit(groupBox_9);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(80, 60, 271, 20));
        groupBox_10 = new QGroupBox(groupBox_4);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(410, 120, 401, 91));
        lineEdit_22 = new QLineEdit(groupBox_10);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(80, 20, 301, 20));
        label_25 = new QLabel(groupBox_10);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 20, 61, 21));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_26 = new QLabel(groupBox_10);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 60, 101, 21));
        lineEdit_23 = new QLineEdit(groupBox_10);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(80, 60, 301, 20));
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 90, 821, 81));
        containChildDirCheckBox = new QCheckBox(groupBox_5);
        containChildDirCheckBox->setObjectName(QStringLiteral("containChildDirCheckBox"));
        containChildDirCheckBox->setGeometry(QRect(10, 20, 91, 21));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 50, 221, 21));
        lineEdit_9 = new QLineEdit(groupBox_5);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(140, 50, 601, 20));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 20, 101, 21));
        comboBox = new QComboBox(groupBox_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(220, 20, 81, 22));
        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 10, 61, 61));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFlat(false);
        lineEdit_3 = new QLineEdit(groupBox_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(360, 20, 101, 20));
        comboBox_2 = new QComboBox(groupBox_5);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(470, 20, 71, 22));
        comboBox_2->setFrame(true);
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 20, 31, 21));
        comboBox_3 = new QComboBox(groupBox_5);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(680, 20, 61, 22));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(560, 20, 31, 21));
        lineEdit_4 = new QLineEdit(groupBox_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(590, 20, 81, 20));
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 410, 821, 51));
        checkBox = new QCheckBox(groupBox_8);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 20, 141, 21));
        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(130, 20, 54, 21));
        lineEdit_15 = new QLineEdit(groupBox_8);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(180, 20, 561, 21));
        pushButton_5 = new QPushButton(groupBox_8);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(750, 19, 61, 23));
        groupBox_11 = new QGroupBox(tab);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 10, 821, 71));
        selectFileBtn = new QPushButton(groupBox_11);
        selectFileBtn->setObjectName(QStringLiteral("selectFileBtn"));
        selectFileBtn->setGeometry(QRect(730, 40, 81, 23));
        label = new QLabel(groupBox_11);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 161, 16));
        pathEdit = new QLineEdit(groupBox_11);
        pathEdit->setObjectName(QStringLiteral("pathEdit"));
        pathEdit->setGeometry(QRect(10, 40, 621, 20));
        selectDirBtn = new QPushButton(groupBox_11);
        selectDirBtn->setObjectName(QStringLiteral("selectDirBtn"));
        selectDirBtn->setGeometry(QRect(640, 40, 81, 23));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-1, 540, 221, 41));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_27 = new QLabel(widget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 0, 201, 31));
        label_27->setAutoFillBackground(false);
        label_27->setStyleSheet(QStringLiteral(""));
        widget_2 = new QWidget(tab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(230, 540, 381, 41));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_28 = new QLabel(widget_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 0, 31, 31));
        progressBar = new QProgressBar(widget_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(40, 6, 331, 21));
        progressBar->setValue(0);
        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 530, 861, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget_3 = new QWidget(tab);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(620, 540, 211, 41));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_29 = new QLabel(widget_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 0, 191, 31));
        label_29->setAutoFillBackground(false);
        label_29->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_12 = new QGroupBox(tab_2);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(10, 10, 821, 71));
        selectFileBtn_2 = new QPushButton(groupBox_12);
        selectFileBtn_2->setObjectName(QStringLiteral("selectFileBtn_2"));
        selectFileBtn_2->setGeometry(QRect(730, 40, 81, 23));
        label_30 = new QLabel(groupBox_12);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 20, 161, 16));
        pathEdit_2 = new QLineEdit(groupBox_12);
        pathEdit_2->setObjectName(QStringLiteral("pathEdit_2"));
        pathEdit_2->setGeometry(QRect(10, 40, 621, 20));
        selectDirBtn_2 = new QPushButton(groupBox_12);
        selectDirBtn_2->setObjectName(QStringLiteral("selectDirBtn_2"));
        selectDirBtn_2->setGeometry(QRect(640, 40, 81, 23));
        groupBox_13 = new QGroupBox(tab_2);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(10, 90, 821, 81));
        containChildDirCheckBox_3 = new QCheckBox(groupBox_13);
        containChildDirCheckBox_3->setObjectName(QStringLiteral("containChildDirCheckBox_3"));
        containChildDirCheckBox_3->setGeometry(QRect(10, 20, 91, 21));
        label_31 = new QLabel(groupBox_13);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 50, 221, 21));
        lineEdit_24 = new QLineEdit(groupBox_13);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(140, 50, 601, 20));
        label_32 = new QLabel(groupBox_13);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(120, 20, 101, 21));
        comboBox_17 = new QComboBox(groupBox_13);
        comboBox_17->addItem(QString());
        comboBox_17->addItem(QString());
        comboBox_17->addItem(QString());
        comboBox_17->addItem(QString());
        comboBox_17->addItem(QString());
        comboBox_17->addItem(QString());
        comboBox_17->setObjectName(QStringLiteral("comboBox_17"));
        comboBox_17->setGeometry(QRect(220, 20, 81, 22));
        pushButton_6 = new QPushButton(groupBox_13);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(750, 10, 61, 61));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFlat(false);
        lineEdit_25 = new QLineEdit(groupBox_13);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(360, 20, 101, 20));
        comboBox_18 = new QComboBox(groupBox_13);
        comboBox_18->addItem(QString());
        comboBox_18->addItem(QString());
        comboBox_18->addItem(QString());
        comboBox_18->setObjectName(QStringLiteral("comboBox_18"));
        comboBox_18->setGeometry(QRect(470, 20, 71, 22));
        comboBox_18->setFrame(true);
        label_33 = new QLabel(groupBox_13);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(330, 20, 31, 21));
        comboBox_19 = new QComboBox(groupBox_13);
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->setObjectName(QStringLiteral("comboBox_19"));
        comboBox_19->setGeometry(QRect(680, 20, 61, 22));
        label_34 = new QLabel(groupBox_13);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(560, 20, 31, 21));
        lineEdit_26 = new QLineEdit(groupBox_13);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));
        lineEdit_26->setGeometry(QRect(590, 20, 81, 20));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\204\347\220\206\345\267\245\345\205\267 by brok1n V0.1", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\211\247\350\241\214(\345\234\250\344\270\213\346\226\271\351\200\211\346\213\251\351\234\200\350\246\201\346\211\247\350\241\214\347\232\204\346\223\215\344\275\234)", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\211\247\350\241\214", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\211\215", nullptr));
        comboBox_4->setItemText(3, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\220\216", nullptr));

        comboBox_5->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("MainWindow", "\345\271\266\344\270\224", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("MainWindow", "\346\210\226\350\200\205", nullptr));

        comboBox_6->setItemText(0, QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253", nullptr));
        comboBox_6->setItemText(1, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253", nullptr));
        comboBox_6->setItemText(2, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\211\215", nullptr));
        comboBox_6->setItemText(3, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\220\216", nullptr));

        comboBox_13->setItemText(0, QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253", nullptr));
        comboBox_13->setItemText(1, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253", nullptr));
        comboBox_13->setItemText(2, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\211\215", nullptr));
        comboBox_13->setItemText(3, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\220\216", nullptr));

        comboBox_14->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_14->setItemText(1, QApplication::translate("MainWindow", "\345\271\266\344\270\224", nullptr));
        comboBox_14->setItemText(2, QApplication::translate("MainWindow", "\346\210\226\350\200\205", nullptr));

        comboBox_15->setItemText(0, QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253", nullptr));
        comboBox_15->setItemText(1, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253", nullptr));
        comboBox_15->setItemText(2, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\211\215", nullptr));
        comboBox_15->setItemText(3, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\220\216", nullptr));

        comboBox_16->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_16->setItemText(1, QApplication::translate("MainWindow", "\345\271\266\344\270\224", nullptr));
        comboBox_16->setItemText(2, QApplication::translate("MainWindow", "\346\210\226\350\200\205", nullptr));

        checkBox_2->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\344\270\272\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\224\257\346\214\201\347\232\204\345\244\204\347\220\206\346\223\215\344\275\234", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253\350\257\245\345\255\227\347\254\246\344\270\262\346\210\226\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\347\232\204\346\225\260\346\215\256", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253\350\257\245\345\255\227\347\254\246\344\270\262\346\210\226\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\347\232\204\346\225\260\346\215\256", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\344\277\235\347\225\231\350\257\245\345\255\227\347\254\246\344\270\262\346\210\226\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\344\271\213\345\211\215\347\232\204\346\225\260\346\215\256", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\344\277\235\347\225\231\350\257\245\345\255\227\347\254\246\344\270\262\346\210\226\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\344\271\213\345\220\216\347\232\204\346\225\260\346\215\256", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
#ifndef QT_NO_STATUSTIP
        groupBox_5->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        groupBox_5->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\345\244\204\347\220\206\345\257\271\350\261\241\347\255\233\351\200\211", nullptr));
#ifndef QT_NO_TOOLTIP
        containChildDirCheckBox->setToolTip(QApplication::translate("MainWindow", "\346\230\257\345\220\246\345\244\204\347\220\206\345\255\220\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_NO_TOOLTIP
        containChildDirCheckBox->setText(QApplication::translate("MainWindow", "\345\214\205\346\213\254\345\255\220\346\226\207\344\273\266\345\244\271", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\345\277\275\347\225\245(\345\244\232\344\270\252\347\224\250\347\251\272\346\240\274\345\214\272\345\210\206)", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\241\253\345\205\245\346\211\200\346\234\211\345\276\205\345\244\204\347\220\206\344\270\255\344\270\215\351\234\200\350\246\201\345\244\204\347\220\206\347\232\204\346\226\207\344\273\266\346\210\226\346\226\207\344\273\266\345\244\271 \345\246\202\346\236\234\346\234\211\345\244\232\344\270\252 \345\217\257\344\273\245\347\224\250\347\251\272\346\240\274\345\210\206\351\232\224</p><p>\347\244\272\344\276\213\357\274\232</p><p>a.txt (\345\277\275\347\225\245a.txt\350\277\231\344\270\252\346\226\207\344\273\266)</p><p>a.txt *.jpg (\345\277\275\347\225\245a.txt\350\277\231\344\270\252\346\226\207\344\273\266\345\222\214\346\211\200\346\234\211jpg\346\226\207\344\273\266)</p><p>a.txt *.jpg /out (\345\277\275\347\225\245a.txt\350\277\231\344\270\252\346\226\207\344\273\266\345\222\214\346\211\200\346\234\211jpg\346\226\207\344\273\266\345\222\214out\346\226\207\344\273\266\345\244\271)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_9->setText(QString());
        lineEdit_9->setPlaceholderText(QApplication::translate("MainWindow", "a.txt(\345\277\275\347\225\245\346\226\207\344\273\266\345\220\215\344\270\272a.txt\347\232\204\346\226\207\344\273\266) *.jpg(\345\277\275\347\225\245\346\226\207\344\273\266\346\211\251\345\261\225\345\220\215\346\230\257.jpg\347\232\204\346\211\200\346\234\211\346\226\207\344\273\266) /out(\345\277\275\347\225\245out\346\226\207\344\273\266\345\244\271)", nullptr));
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("MainWindow", "\345\244\204\347\220\206\345\207\240\345\261\202\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("MainWindow", "\345\244\204\347\220\206\347\232\204\346\226\207\344\273\266\345\244\271\345\261\202\346\225\260", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\345\205\250\351\203\250", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "3", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "4", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "5", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("MainWindow", "\345\244\204\347\220\206\345\207\240\345\261\202\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_NO_TOOLTIP
        comboBox->setCurrentText(QApplication::translate("MainWindow", "\345\205\250\351\203\250", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "\346\201\242\345\244\215\345\210\260\351\273\230\350\256\244\345\200\274", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\260\217\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "KB", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "MB", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "GB", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox_2->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\260\217\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBox_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\260\217\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "\345\260\217\344\272\216", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("MainWindow", "KB", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("MainWindow", "MB", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("MainWindow", "GB", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox_3->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\244\247\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\244\247\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MainWindow", "\345\244\247\344\272\216", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_4->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\244\247\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\207\272", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\345\210\260\345\216\237\346\226\207\344\273\266\345\244\271", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\347\233\256\345\275\225", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210...", nullptr));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\205\245", nullptr));
        selectFileBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\350\246\201\345\244\204\347\220\206\347\232\204\346\226\207\344\273\266\346\210\226\346\226\207\344\273\266\345\244\271", nullptr));
        selectDirBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "\351\242\204\345\244\204\347\220\206", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "\345\244\204\347\220\206", nullptr));
        label_29->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\206\205\345\256\271\347\255\233\351\200\211", nullptr));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\205\245", nullptr));
        selectFileBtn_2->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\350\246\201\345\244\204\347\220\206\347\232\204\346\226\207\344\273\266\346\210\226\346\226\207\344\273\266\345\244\271", nullptr));
        selectDirBtn_2->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
#ifndef QT_NO_STATUSTIP
        groupBox_13->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        groupBox_13->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        groupBox_13->setTitle(QApplication::translate("MainWindow", "\345\244\204\347\220\206\345\257\271\350\261\241\347\255\233\351\200\211", nullptr));
#ifndef QT_NO_TOOLTIP
        containChildDirCheckBox_3->setToolTip(QApplication::translate("MainWindow", "\346\230\257\345\220\246\345\244\204\347\220\206\345\255\220\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_NO_TOOLTIP
        containChildDirCheckBox_3->setText(QApplication::translate("MainWindow", "\345\214\205\346\213\254\345\255\220\346\226\207\344\273\266\345\244\271", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "\345\277\275\347\225\245(\345\244\232\344\270\252\347\224\250\347\251\272\346\240\274\345\214\272\345\210\206)", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_24->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\241\253\345\205\245\346\211\200\346\234\211\345\276\205\345\244\204\347\220\206\344\270\255\344\270\215\351\234\200\350\246\201\345\244\204\347\220\206\347\232\204\346\226\207\344\273\266\346\210\226\346\226\207\344\273\266\345\244\271 \345\246\202\346\236\234\346\234\211\345\244\232\344\270\252 \345\217\257\344\273\245\347\224\250\347\251\272\346\240\274\345\210\206\351\232\224</p><p>\347\244\272\344\276\213\357\274\232</p><p>a.txt (\345\277\275\347\225\245a.txt\350\277\231\344\270\252\346\226\207\344\273\266)</p><p>a.txt *.jpg (\345\277\275\347\225\245a.txt\350\277\231\344\270\252\346\226\207\344\273\266\345\222\214\346\211\200\346\234\211jpg\346\226\207\344\273\266)</p><p>a.txt *.jpg /out (\345\277\275\347\225\245a.txt\350\277\231\344\270\252\346\226\207\344\273\266\345\222\214\346\211\200\346\234\211jpg\346\226\207\344\273\266\345\222\214out\346\226\207\344\273\266\345\244\271)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_24->setText(QString());
        lineEdit_24->setPlaceholderText(QApplication::translate("MainWindow", "a.txt(\345\277\275\347\225\245\346\226\207\344\273\266\345\220\215\344\270\272a.txt\347\232\204\346\226\207\344\273\266) *.jpg(\345\277\275\347\225\245\346\226\207\344\273\266\346\211\251\345\261\225\345\220\215\346\230\257.jpg\347\232\204\346\211\200\346\234\211\346\226\207\344\273\266) /out(\345\277\275\347\225\245out\346\226\207\344\273\266\345\244\271)", nullptr));
#ifndef QT_NO_TOOLTIP
        label_32->setToolTip(QApplication::translate("MainWindow", "\345\244\204\347\220\206\345\207\240\345\261\202\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_NO_TOOLTIP
        label_32->setText(QApplication::translate("MainWindow", "\345\244\204\347\220\206\347\232\204\346\226\207\344\273\266\345\244\271\345\261\202\346\225\260", nullptr));
        comboBox_17->setItemText(0, QApplication::translate("MainWindow", "\345\205\250\351\203\250", nullptr));
        comboBox_17->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        comboBox_17->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        comboBox_17->setItemText(3, QApplication::translate("MainWindow", "3", nullptr));
        comboBox_17->setItemText(4, QApplication::translate("MainWindow", "4", nullptr));
        comboBox_17->setItemText(5, QApplication::translate("MainWindow", "5", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox_17->setToolTip(QApplication::translate("MainWindow", "\345\244\204\347\220\206\345\207\240\345\261\202\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_NO_TOOLTIP
        comboBox_17->setCurrentText(QApplication::translate("MainWindow", "\345\205\250\351\203\250", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("MainWindow", "\346\201\242\345\244\215\345\210\260\351\273\230\350\256\244\345\200\274", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_25->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\260\217\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        comboBox_18->setItemText(0, QApplication::translate("MainWindow", "KB", nullptr));
        comboBox_18->setItemText(1, QApplication::translate("MainWindow", "MB", nullptr));
        comboBox_18->setItemText(2, QApplication::translate("MainWindow", "GB", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox_18->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\260\217\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBox_18->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label_33->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\260\217\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        label_33->setText(QApplication::translate("MainWindow", "\345\260\217\344\272\216", nullptr));
        comboBox_19->setItemText(0, QApplication::translate("MainWindow", "KB", nullptr));
        comboBox_19->setItemText(1, QApplication::translate("MainWindow", "MB", nullptr));
        comboBox_19->setItemText(2, QApplication::translate("MainWindow", "GB", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox_19->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\244\247\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_34->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\244\247\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        label_34->setText(QApplication::translate("MainWindow", "\345\244\247\344\272\216", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_26->setToolTip(QApplication::translate("MainWindow", "\345\217\252\345\244\204\347\220\206\346\226\207\344\273\266\345\244\247\345\260\217\345\244\247\344\272\216\345\244\232\345\260\221\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\226\207\344\273\266\346\213\206\345\210\206\345\220\210\345\271\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\226\207\344\273\266\351\207\215\345\221\275\345\220\215", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
