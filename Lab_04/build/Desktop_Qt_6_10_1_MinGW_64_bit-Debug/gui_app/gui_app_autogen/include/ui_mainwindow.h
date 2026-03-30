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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_0_main;
    QLabel *main_text;
    QPushButton *bt_autorization;
    QPushButton *bt_regestration;
    QWidget *page_1_register;
    QLabel *text_regestration;
    QLineEdit *line_edit_input_login;
    QLineEdit *line_edit_input_password;
    QLabel *text_input_login;
    QLabel *text_input_password;
    QPushButton *bt_in_main;
    QPushButton *bt_enter_REG;
    QLabel *text_label_REG;
    QWidget *page_2_autorization;
    QLabel *text_autorization;
    QLineEdit *line_edit_input_login_AUTO;
    QLabel *text_input_login_2_AUTO;
    QLabel *text_input_password_2_AUTO;
    QLineEdit *line_edit_input_password_AUTO;
    QPushButton *bt_in_main_AUTO;
    QPushButton *bt_enter_AUTO;
    QLabel *text_label_AUTO;
    QWidget *page_3_accaunt;
    QLabel *text_account;
    QPushButton *bt_in_main_ACC;
    QLabel *label;
    QPushButton *bt_change_photo;
    QLabel *labe_acc;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1109, 740);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-50, 10, 1291, 691));
        stackedWidget->setAutoFillBackground(true);
        page_0_main = new QWidget();
        page_0_main->setObjectName("page_0_main");
        main_text = new QLabel(page_0_main);
        main_text->setObjectName("main_text");
        main_text->setGeometry(QRect(300, 120, 721, 111));
        QFont font;
        font.setPointSize(16);
        main_text->setFont(font);
        bt_autorization = new QPushButton(page_0_main);
        bt_autorization->setObjectName("bt_autorization");
        bt_autorization->setGeometry(QRect(480, 280, 251, 101));
        bt_autorization->setFont(font);
        bt_autorization->setToolTipDuration(-1);
        bt_regestration = new QPushButton(page_0_main);
        bt_regestration->setObjectName("bt_regestration");
        bt_regestration->setGeometry(QRect(480, 430, 251, 101));
        bt_regestration->setFont(font);
        stackedWidget->addWidget(page_0_main);
        page_1_register = new QWidget();
        page_1_register->setObjectName("page_1_register");
        text_regestration = new QLabel(page_1_register);
        text_regestration->setObjectName("text_regestration");
        text_regestration->setGeometry(QRect(480, 110, 381, 71));
        text_regestration->setFont(font);
        line_edit_input_login = new QLineEdit(page_1_register);
        line_edit_input_login->setObjectName("line_edit_input_login");
        line_edit_input_login->setGeometry(QRect(510, 280, 261, 71));
        QFont font1;
        font1.setPointSize(14);
        line_edit_input_login->setFont(font1);
        line_edit_input_password = new QLineEdit(page_1_register);
        line_edit_input_password->setObjectName("line_edit_input_password");
        line_edit_input_password->setGeometry(QRect(510, 460, 261, 71));
        line_edit_input_password->setFont(font1);
        text_input_login = new QLabel(page_1_register);
        text_input_login->setObjectName("text_input_login");
        text_input_login->setGeometry(QRect(510, 250, 63, 20));
        text_input_password = new QLabel(page_1_register);
        text_input_password->setObjectName("text_input_password");
        text_input_password->setGeometry(QRect(510, 430, 111, 20));
        bt_in_main = new QPushButton(page_1_register);
        bt_in_main->setObjectName("bt_in_main");
        bt_in_main->setGeometry(QRect(950, 570, 151, 61));
        QFont font2;
        font2.setPointSize(12);
        bt_in_main->setFont(font2);
        bt_enter_REG = new QPushButton(page_1_register);
        bt_enter_REG->setObjectName("bt_enter_REG");
        bt_enter_REG->setGeometry(QRect(550, 570, 171, 51));
        text_label_REG = new QLabel(page_1_register);
        text_label_REG->setObjectName("text_label_REG");
        text_label_REG->setGeometry(QRect(290, 170, 751, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        text_label_REG->setFont(font3);
        stackedWidget->addWidget(page_1_register);
        page_2_autorization = new QWidget();
        page_2_autorization->setObjectName("page_2_autorization");
        text_autorization = new QLabel(page_2_autorization);
        text_autorization->setObjectName("text_autorization");
        text_autorization->setGeometry(QRect(470, 70, 271, 101));
        text_autorization->setFont(font);
        line_edit_input_login_AUTO = new QLineEdit(page_2_autorization);
        line_edit_input_login_AUTO->setObjectName("line_edit_input_login_AUTO");
        line_edit_input_login_AUTO->setGeometry(QRect(460, 280, 261, 71));
        line_edit_input_login_AUTO->setFont(font1);
        text_input_login_2_AUTO = new QLabel(page_2_autorization);
        text_input_login_2_AUTO->setObjectName("text_input_login_2_AUTO");
        text_input_login_2_AUTO->setGeometry(QRect(460, 250, 63, 20));
        text_input_password_2_AUTO = new QLabel(page_2_autorization);
        text_input_password_2_AUTO->setObjectName("text_input_password_2_AUTO");
        text_input_password_2_AUTO->setGeometry(QRect(460, 430, 111, 20));
        line_edit_input_password_AUTO = new QLineEdit(page_2_autorization);
        line_edit_input_password_AUTO->setObjectName("line_edit_input_password_AUTO");
        line_edit_input_password_AUTO->setGeometry(QRect(460, 460, 261, 71));
        line_edit_input_password_AUTO->setFont(font1);
        bt_in_main_AUTO = new QPushButton(page_2_autorization);
        bt_in_main_AUTO->setObjectName("bt_in_main_AUTO");
        bt_in_main_AUTO->setGeometry(QRect(930, 560, 151, 61));
        bt_in_main_AUTO->setFont(font2);
        bt_enter_AUTO = new QPushButton(page_2_autorization);
        bt_enter_AUTO->setObjectName("bt_enter_AUTO");
        bt_enter_AUTO->setGeometry(QRect(530, 570, 111, 51));
        text_label_AUTO = new QLabel(page_2_autorization);
        text_label_AUTO->setObjectName("text_label_AUTO");
        text_label_AUTO->setGeometry(QRect(440, 170, 471, 51));
        text_label_AUTO->setFont(font3);
        stackedWidget->addWidget(page_2_autorization);
        page_3_accaunt = new QWidget();
        page_3_accaunt->setObjectName("page_3_accaunt");
        text_account = new QLabel(page_3_accaunt);
        text_account->setObjectName("text_account");
        text_account->setGeometry(QRect(420, 30, 401, 51));
        text_account->setFont(font);
        bt_in_main_ACC = new QPushButton(page_3_accaunt);
        bt_in_main_ACC->setObjectName("bt_in_main_ACC");
        bt_in_main_ACC->setGeometry(QRect(930, 530, 151, 61));
        bt_in_main_ACC->setFont(font2);
        label = new QLabel(page_3_accaunt);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 170, 651, 311));
        label->setPixmap(QPixmap(QString::fromUtf8(":/photos/images/bLPUHHkWv3k.jpg")));
        label->setScaledContents(true);
        bt_change_photo = new QPushButton(page_3_accaunt);
        bt_change_photo->setObjectName("bt_change_photo");
        bt_change_photo->setGeometry(QRect(480, 520, 201, 61));
        bt_change_photo->setFont(font2);
        labe_acc = new QLabel(page_3_accaunt);
        labe_acc->setObjectName("labe_acc");
        labe_acc->setGeometry(QRect(450, 100, 371, 51));
        labe_acc->setFont(font1);
        stackedWidget->addWidget(page_3_accaunt);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1109, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        main_text->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216! \320\222\320\276\320\271\320\264\320\270\321\202\320\265 \320\270\320\273\320\270 \320\267\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\321\203\320\271\321\202\320\265\321\201\321\214 \320\262 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\265", nullptr));
        bt_autorization->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        bt_regestration->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        text_regestration->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\273\320\276\320\263\320\270\320\275 \320\270 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        text_input_login->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        text_input_password->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        bt_in_main->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        bt_enter_REG->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        text_label_REG->setText(QString());
        text_autorization->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\320\264\320\270\321\202\320\265 \320\262 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        text_input_login_2_AUTO->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        text_input_password_2_AUTO->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        bt_in_main_AUTO->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        bt_enter_AUTO->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        text_label_AUTO->setText(QString());
        text_account->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213 \321\203\321\201\320\277\320\265\321\210\320\275\320\276 \320\262\320\276\321\210\320\273\320\270 \320\262 \320\260\320\272\320\272\320\260\321\203\320\275\321\202!", nullptr));
        bt_in_main_ACC->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        label->setText(QString());
        bt_change_photo->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", nullptr));
        labe_acc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
