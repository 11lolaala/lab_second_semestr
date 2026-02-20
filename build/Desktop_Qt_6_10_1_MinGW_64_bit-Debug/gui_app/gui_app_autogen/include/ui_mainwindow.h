/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *bt_clicked;
    QLineEdit *argument_1;
    QLineEdit *argument_2;
    QLineEdit *result;
    QMenuBar *menubar;
    QMenu *menulab_03;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        bt_clicked = new QPushButton(centralwidget);
        bt_clicked->setObjectName("bt_clicked");
        bt_clicked->setGeometry(QRect(310, 350, 121, 81));
        QFont font;
        font.setPointSize(13);
        bt_clicked->setFont(font);
        argument_1 = new QLineEdit(centralwidget);
        argument_1->setObjectName("argument_1");
        argument_1->setGeometry(QRect(50, 210, 141, 51));
        argument_2 = new QLineEdit(centralwidget);
        argument_2->setObjectName("argument_2");
        argument_2->setGeometry(QRect(220, 210, 141, 51));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setEnabled(false);
        result->setGeometry(QRect(440, 210, 141, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menulab_03 = new QMenu(menubar);
        menulab_03->setObjectName("menulab_03");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menulab_03->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bt_clicked->setText(QCoreApplication::translate("MainWindow", "\321\201\320\273\320\276\320\266\320\270\321\202\321\214", nullptr));
        menulab_03->setTitle(QCoreApplication::translate("MainWindow", "lab_03", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
