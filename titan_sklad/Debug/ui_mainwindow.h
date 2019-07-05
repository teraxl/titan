/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openFile;
    QAction *exitProgramm;
    QAction *action;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_ArrangeAll;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ClearAll;
    QTabWidget *allTabWidget;
    QWidget *tabSklad1;
    QGraphicsView *graphicsView;
    QWidget *tabSklad2;
    QWidget *tabSklad3;
    QWidget *tabSklad4;
    QWidget *tabSklad5;
    QWidget *tabSklad6;
    QWidget *tabSklad8;
    QWidget *tabSklad9;
    QWidget *tabSklad15;
    QWidget *tabSklad11_12;
    QWidget *tabSklad13_14;
    QWidget *tabSklad41_42;
    QWidget *tabSklad51_52;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1055, 807);
        openFile = new QAction(MainWindow);
        openFile->setObjectName(QString::fromUtf8("openFile"));
        exitProgramm = new QAction(MainWindow);
        exitProgramm->setObjectName(QString::fromUtf8("exitProgramm"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        btn_ArrangeAll = new QPushButton(centralWidget);
        btn_ArrangeAll->setObjectName(QString::fromUtf8("btn_ArrangeAll"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        btn_ArrangeAll->setFont(font);
        btn_ArrangeAll->setAutoFillBackground(false);
        btn_ArrangeAll->setCheckable(false);
        btn_ArrangeAll->setFlat(false);

        horizontalLayout->addWidget(btn_ArrangeAll);

        horizontalSpacer = new QSpacerItem(400, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ClearAll = new QPushButton(centralWidget);
        btn_ClearAll->setObjectName(QString::fromUtf8("btn_ClearAll"));
        btn_ClearAll->setFont(font);

        horizontalLayout->addWidget(btn_ClearAll);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        allTabWidget = new QTabWidget(centralWidget);
        allTabWidget->setObjectName(QString::fromUtf8("allTabWidget"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        allTabWidget->setFont(font1);
        allTabWidget->setTabPosition(QTabWidget::South);
        allTabWidget->setTabShape(QTabWidget::Rounded);
        allTabWidget->setTabBarAutoHide(false);
        tabSklad1 = new QWidget();
        tabSklad1->setObjectName(QString::fromUtf8("tabSklad1"));
        tabSklad1->setMinimumSize(QSize(1033, 0));
        graphicsView = new QGraphicsView(tabSklad1);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 1011, 651));
        allTabWidget->addTab(tabSklad1, QString());
        tabSklad2 = new QWidget();
        tabSklad2->setObjectName(QString::fromUtf8("tabSklad2"));
        allTabWidget->addTab(tabSklad2, QString());
        tabSklad3 = new QWidget();
        tabSklad3->setObjectName(QString::fromUtf8("tabSklad3"));
        allTabWidget->addTab(tabSklad3, QString());
        tabSklad4 = new QWidget();
        tabSklad4->setObjectName(QString::fromUtf8("tabSklad4"));
        allTabWidget->addTab(tabSklad4, QString());
        tabSklad5 = new QWidget();
        tabSklad5->setObjectName(QString::fromUtf8("tabSklad5"));
        allTabWidget->addTab(tabSklad5, QString());
        tabSklad6 = new QWidget();
        tabSklad6->setObjectName(QString::fromUtf8("tabSklad6"));
        allTabWidget->addTab(tabSklad6, QString());
        tabSklad8 = new QWidget();
        tabSklad8->setObjectName(QString::fromUtf8("tabSklad8"));
        allTabWidget->addTab(tabSklad8, QString());
        tabSklad9 = new QWidget();
        tabSklad9->setObjectName(QString::fromUtf8("tabSklad9"));
        allTabWidget->addTab(tabSklad9, QString());
        tabSklad15 = new QWidget();
        tabSklad15->setObjectName(QString::fromUtf8("tabSklad15"));
        allTabWidget->addTab(tabSklad15, QString());
        tabSklad11_12 = new QWidget();
        tabSklad11_12->setObjectName(QString::fromUtf8("tabSklad11_12"));
        allTabWidget->addTab(tabSklad11_12, QString());
        tabSklad13_14 = new QWidget();
        tabSklad13_14->setObjectName(QString::fromUtf8("tabSklad13_14"));
        allTabWidget->addTab(tabSklad13_14, QString());
        tabSklad41_42 = new QWidget();
        tabSklad41_42->setObjectName(QString::fromUtf8("tabSklad41_42"));
        allTabWidget->addTab(tabSklad41_42, QString());
        tabSklad51_52 = new QWidget();
        tabSklad51_52->setObjectName(QString::fromUtf8("tabSklad51_52"));
        allTabWidget->addTab(tabSklad51_52, QString());

        gridLayout->addWidget(allTabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1055, 20));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(openFile);
        menu->addAction(exitProgramm);
        menu_2->addAction(action);

        retranslateUi(MainWindow);

        btn_ArrangeAll->setDefault(true);
        allTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        openFile->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        exitProgramm->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\236\320\261 \320\220\320\262\321\202\320\276\321\200\320\265", nullptr));
        btn_ArrangeAll->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\222\321\201\321\221", nullptr));
        btn_ClearAll->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\222\321\201\321\221", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad1), QApplication::translate("MainWindow", "\342\204\226 1", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad2), QApplication::translate("MainWindow", "\342\204\226 2", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad3), QApplication::translate("MainWindow", "\342\204\226 3", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad4), QApplication::translate("MainWindow", "\342\204\226 4", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad5), QApplication::translate("MainWindow", "\342\204\226 5", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad6), QApplication::translate("MainWindow", "\342\204\226 6", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad8), QApplication::translate("MainWindow", "\342\204\226 8", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad9), QApplication::translate("MainWindow", "\342\204\226 9", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad15), QApplication::translate("MainWindow", "\342\204\226 15", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad11_12), QApplication::translate("MainWindow", "\342\204\226 11-12", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad13_14), QApplication::translate("MainWindow", "\342\204\226 13-14", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad41_42), QApplication::translate("MainWindow", "\342\204\226 41-42", nullptr));
        allTabWidget->setTabText(allTabWidget->indexOf(tabSklad51_52), QApplication::translate("MainWindow", "\342\204\226 51-52", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
