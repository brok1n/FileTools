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
#include <QtWidgets/QPlainTextEdit>
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
    QGroupBox *groupBox_8;
    QCheckBox *outputToOriginDirCbox;
    QLabel *outDirLabel;
    QLineEdit *outDirEdt;
    QPushButton *selectOutDirBtn;
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
    QWidget *tab_4;
    QPlainTextEdit *feedBackTextEdt;
    QPushButton *submitFeedBackMessageBtn;
    QLabel *feedBackTextCountLabel;

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
        groupBox_3->setGeometry(QRect(10, 450, 821, 71));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 20, 111, 31));
        comboBox_4 = new QComboBox(groupBox_3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(10, 22, 91, 31));
        comboBox_5 = new QComboBox(groupBox_3);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(100, 22, 61, 31));
        comboBox_6 = new QComboBox(groupBox_3);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(160, 22, 91, 31));
        comboBox_13 = new QComboBox(groupBox_3);
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->setObjectName(QStringLiteral("comboBox_13"));
        comboBox_13->setGeometry(QRect(470, 22, 111, 31));
        comboBox_14 = new QComboBox(groupBox_3);
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->setObjectName(QStringLiteral("comboBox_14"));
        comboBox_14->setGeometry(QRect(410, 22, 61, 31));
        comboBox_15 = new QComboBox(groupBox_3);
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->setObjectName(QStringLiteral("comboBox_15"));
        comboBox_15->setGeometry(QRect(310, 22, 101, 31));
        comboBox_16 = new QComboBox(groupBox_3);
        comboBox_16->addItem(QString());
        comboBox_16->addItem(QString());
        comboBox_16->addItem(QString());
        comboBox_16->setObjectName(QStringLiteral("comboBox_16"));
        comboBox_16->setGeometry(QRect(250, 22, 61, 31));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(590, 30, 111, 16));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 110, 821, 241));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(410, 20, 401, 101));
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(80, 30, 301, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 61, 21));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(80, 60, 301, 20));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 60, 81, 21));
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 371, 101));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 30, 271, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 61, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 71, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 60, 271, 20));
        groupBox_9 = new QGroupBox(groupBox_4);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 130, 371, 101));
        lineEdit_20 = new QLineEdit(groupBox_9);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(80, 30, 271, 20));
        label_23 = new QLabel(groupBox_9);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 30, 61, 21));
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
        groupBox_10->setGeometry(QRect(410, 130, 401, 101));
        lineEdit_22 = new QLineEdit(groupBox_10);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(80, 30, 301, 20));
        label_25 = new QLabel(groupBox_10);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 30, 61, 21));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_26 = new QLabel(groupBox_10);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 60, 101, 21));
        lineEdit_23 = new QLineEdit(groupBox_10);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(80, 60, 301, 20));
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 370, 821, 61));
        outputToOriginDirCbox = new QCheckBox(groupBox_8);
        outputToOriginDirCbox->setObjectName(QStringLiteral("outputToOriginDirCbox"));
        outputToOriginDirCbox->setGeometry(QRect(10, 23, 101, 21));
        outDirLabel = new QLabel(groupBox_8);
        outDirLabel->setObjectName(QStringLiteral("outDirLabel"));
        outDirLabel->setGeometry(QRect(130, 23, 54, 21));
        outDirEdt = new QLineEdit(groupBox_8);
        outDirEdt->setObjectName(QStringLiteral("outDirEdt"));
        outDirEdt->setGeometry(QRect(180, 23, 561, 21));
        selectOutDirBtn = new QPushButton(groupBox_8);
        selectOutDirBtn->setObjectName(QStringLiteral("selectOutDirBtn"));
        selectOutDirBtn->setGeometry(QRect(750, 23, 61, 21));
        groupBox_11 = new QGroupBox(tab);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 10, 821, 81));
        selectFileBtn = new QPushButton(groupBox_11);
        selectFileBtn->setObjectName(QStringLiteral("selectFileBtn"));
        selectFileBtn->setGeometry(QRect(730, 40, 81, 21));
        label = new QLabel(groupBox_11);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 23, 151, 16));
        pathEdit = new QLineEdit(groupBox_11);
        pathEdit->setObjectName(QStringLiteral("pathEdit"));
        pathEdit->setGeometry(QRect(10, 40, 621, 20));
        selectDirBtn = new QPushButton(groupBox_11);
        selectDirBtn->setObjectName(QStringLiteral("selectDirBtn"));
        selectDirBtn->setGeometry(QRect(640, 40, 81, 21));
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
        widget_2->setGeometry(QRect(220, 540, 391, 41));
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
        widget_3->setGeometry(QRect(610, 540, 231, 41));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_29 = new QLabel(widget_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 0, 211, 31));
        label_29->setAutoFillBackground(false);
        label_29->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        feedBackTextEdt = new QPlainTextEdit(tab_4);
        feedBackTextEdt->setObjectName(QStringLiteral("feedBackTextEdt"));
        feedBackTextEdt->setGeometry(QRect(10, 20, 821, 261));
        feedBackTextEdt->setTabStopWidth(80);
        submitFeedBackMessageBtn = new QPushButton(tab_4);
        submitFeedBackMessageBtn->setObjectName(QStringLiteral("submitFeedBackMessageBtn"));
        submitFeedBackMessageBtn->setGeometry(QRect(700, 310, 131, 41));
        feedBackTextCountLabel = new QLabel(tab_4);
        feedBackTextCountLabel->setObjectName(QStringLiteral("feedBackTextCountLabel"));
        feedBackTextCountLabel->setGeometry(QRect(770, 250, 51, 20));
        feedBackTextCountLabel->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\204\347\220\206\345\267\245\345\205\267 by brok1n V0.1", nullptr));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\211\247\350\241\214(\345\234\250\344\270\213\346\226\271\351\200\211\346\213\251\351\234\200\350\246\201\346\211\247\350\241\214\347\232\204\346\223\215\344\275\234)", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\211\247\350\241\214", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\211\215", nullptr));
        comboBox_4->setItemText(3, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\220\216", nullptr));

        comboBox_5->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("MainWindow", "\345\271\266\344\270\224", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("MainWindow", "\346\210\226\350\200\205", nullptr));

        comboBox_6->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_6->setItemText(1, QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253", nullptr));
        comboBox_6->setItemText(2, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253", nullptr));
        comboBox_6->setItemText(3, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\211\215", nullptr));
        comboBox_6->setItemText(4, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\220\216", nullptr));

        comboBox_13->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_13->setItemText(1, QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253", nullptr));
        comboBox_13->setItemText(2, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253", nullptr));
        comboBox_13->setItemText(3, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\211\215", nullptr));
        comboBox_13->setItemText(4, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\220\216", nullptr));

        comboBox_14->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_14->setItemText(1, QApplication::translate("MainWindow", "\345\271\266\344\270\224", nullptr));
        comboBox_14->setItemText(2, QApplication::translate("MainWindow", "\346\210\226\350\200\205", nullptr));

        comboBox_15->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_15->setItemText(1, QApplication::translate("MainWindow", "\344\277\235\347\225\231\345\214\205\345\220\253", nullptr));
        comboBox_15->setItemText(2, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253", nullptr));
        comboBox_15->setItemText(3, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\211\215", nullptr));
        comboBox_15->setItemText(4, QApplication::translate("MainWindow", "\344\277\235\347\225\231\344\271\213\345\220\216", nullptr));

        comboBox_16->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_16->setItemText(1, QApplication::translate("MainWindow", "\345\271\266\344\270\224", nullptr));
        comboBox_16->setItemText(2, QApplication::translate("MainWindow", "\346\210\226\350\200\205", nullptr));

        checkBox_2->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\344\270\272\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\224\257\346\214\201\347\232\204\345\244\204\347\220\206\346\223\215\344\275\234", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "(\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253)\344\277\235\347\225\231\344\270\215\345\214\205\345\220\253\350\257\245\345\255\227\347\254\246\344\270\262\346\210\226\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\347\232\204\346\225\260\346\215\256", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "(\344\277\235\347\225\231\345\214\205\345\220\253)\344\277\235\347\225\231\345\214\205\345\220\253\350\257\245\345\255\227\347\254\246\344\270\262\346\210\226\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\347\232\204\346\225\260\346\215\256", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "(\344\277\235\347\225\231\344\271\213\345\211\215)\344\277\235\347\225\231\350\257\245\345\255\227\347\254\246\344\270\262\346\210\226\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\344\271\213\345\211\215\347\232\204\346\225\260\346\215\256", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "(\344\277\235\347\225\231\344\271\213\345\220\216)\344\277\235\347\225\231\350\257\245\345\255\227\347\254\246\344\270\262\346\210\226\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\344\271\213\345\220\216\347\232\204\346\225\260\346\215\256", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\207\272", nullptr));
        outputToOriginDirCbox->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\345\210\260\345\216\237\346\226\207\344\273\266\345\244\271", nullptr));
        outDirLabel->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\347\233\256\345\275\225", nullptr));
        selectOutDirBtn->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210...", nullptr));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\205\245", nullptr));
        selectFileBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\350\246\201\345\244\204\347\220\206\347\232\204\346\226\207\344\273\266\346\210\226\346\226\207\344\273\266\345\244\271", nullptr));
        selectDirBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "\351\242\204\345\244\204\347\220\206", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "\345\244\204\347\220\206", nullptr));
        label_29->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\206\205\345\256\271\347\255\233\351\200\211", nullptr));
        submitFeedBackMessageBtn->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244", nullptr));
        feedBackTextCountLabel->setText(QApplication::translate("MainWindow", "0/800", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\345\217\215\351\246\210\345\273\272\350\256\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
