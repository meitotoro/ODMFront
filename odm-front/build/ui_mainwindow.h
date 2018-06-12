/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *inputFilePath;
    QPushButton *inputButton;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *imageList;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioOrtho;
    QPushButton *buttonSetPara;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *back;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(554, 646);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 6);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        inputFilePath = new QTextEdit(widget);
        inputFilePath->setObjectName(QStringLiteral("inputFilePath"));
        inputFilePath->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(inputFilePath);

        inputButton = new QPushButton(widget);
        inputButton->setObjectName(QStringLiteral("inputButton"));

        horizontalLayout->addWidget(inputButton);


        verticalLayout->addWidget(widget);

        widget_5 = new QWidget(centralWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 6);
        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        imageList = new QListWidget(widget_5);
        imageList->setObjectName(QStringLiteral("imageList"));
        imageList->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageList->sizePolicy().hasHeightForWidth());
        imageList->setSizePolicy(sizePolicy);
        imageList->setMaximumSize(QSize(700, 403));

        horizontalLayout_5->addWidget(imageList);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_5);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 6);
        radioOrtho = new QRadioButton(widget_2);
        radioOrtho->setObjectName(QStringLiteral("radioOrtho"));
        radioOrtho->setChecked(true);

        horizontalLayout_2->addWidget(radioOrtho);

        buttonSetPara = new QPushButton(widget_2);
        buttonSetPara->setObjectName(QStringLiteral("buttonSetPara"));

        horizontalLayout_2->addWidget(buttonSetPara);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 6);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addWidget(widget_3);

        widget_6 = new QWidget(centralWidget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, 6);
        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        progressBar = new QProgressBar(widget_6);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_6->addWidget(progressBar);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(widget_6);

        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 6);
        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        startButton = new QPushButton(widget_4);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout_4->addWidget(startButton);

        horizontalSpacer_3 = new QSpacerItem(180, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_4);

        back = new QPushButton(centralWidget);
        back->setObjectName(QStringLiteral("back"));

        verticalLayout->addWidget(back);

        MainWindow->setCentralWidget(centralWidget);
        widget->raise();
        widget_2->raise();
        widget_3->raise();
        widget_4->raise();
        widget_5->raise();
        widget_6->raise();
        back->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 554, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271\357\274\232", Q_NULLPTR));
        inputButton->setText(QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251", Q_NULLPTR));
        radioOrtho->setText(QApplication::translate("MainWindow", "\346\255\243\345\260\204\345\275\261\345\203\217", Q_NULLPTR));
        buttonSetPara->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\346\226\207\344\273\266\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "start", Q_NULLPTR));
        back->setText(QApplication::translate("MainWindow", "back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
