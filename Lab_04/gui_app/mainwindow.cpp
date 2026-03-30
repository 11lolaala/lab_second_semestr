#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <functions.hpp>
#include <QCryptographicHash>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Logger::TRACER(1, "Программа запущена");
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    QPalette color = this->palette();
    QColor myColor(149, 221, 224);
    color.setColor(QPalette::Window, myColor);
    this->setAutoFillBackground(true);
    this->setPalette(color);

    QDir dir(":/photos/images");
    photos = dir.entryList(QDir::Files);
}

bool Users::User_reg(QString login_, QString password_){
    bool correct_login = true;
    bool correct_password = true;
    if (!(login_[0].isLetter())){
        Logger::ERROR(5,"Логин должен начинаться только с букв", login_.toStdString(), "line_edit_input_login", 17);
        correct_login = false;
    }
    if (!(password_[0].isLetter())){
        Logger::ERROR(5,"Пароль должен начинаться только с букв", login_.toStdString(), "line_edit_input_login", 17);
        correct_password = false;
    }
    for (int i = 0; i<login_.length();++i){
        if (login_[i] == ' '){
        Logger::ERROR(5,"Логин не должен содержать пробелы", login_.toStdString(), "line_edit_input_login", 24);
        correct_login = false;
        }
    }
    for (int i = 0; i<password_.length();++i){
        if (password_[i] == ' '){
            Logger::ERROR(5,"Пароль не должен содержать пробелы", login_.toStdString(), "line_edit_input_login", 24);
            correct_password = false;
        }
    }
    if (correct_login == true && correct_password == true){
        QFile file_login_and_password("login.csv");
        if(file_login_and_password.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream append(&file_login_and_password);
            append << login_ << "|" << hash_password(password_) << "\n";
            file_login_and_password.close();
            return true;
        }
    }
    else {
        return false;
    }
}

QString Users::hash_password(const QString &password_){
    QByteArray byteArray = password_.toUtf8();
    QByteArray hash = QCryptographicHash::hash(byteArray, QCryptographicHash::Sha256);
    return QString(hash.toHex());
}

bool Users::autorization(const QString login_, const QString password_){
    bool autorization_ = false;
    QString password_hash = Users::hash_password(password_);
    QFile file_login_and_password("login.csv");
    if (file_login_and_password.open(QIODevice::ReadOnly | QIODevice::Text)){
        autorization_ = false;
    }
    QTextStream read_string(&file_login_and_password);
    while (!(read_string.atEnd())){
        QString line_string = read_string.readLine();
        QStringList parts_line_string = line_string.split("|");
        if(parts_line_string.size() < 2)
            continue;
        QString login_csv = parts_line_string[0];
        QString password_csv = parts_line_string[1];
        if (login_ == login_csv && password_hash == password_csv){
            autorization_ = true;
        }
    }
    return autorization_;
}

MainWindow::~MainWindow()
{
    delete ui;
    Logger::TRACER(1, "Программа закончила работу");
}

void MainWindow::on_bt_autorization_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2_autorization);
}


void MainWindow::on_bt_regestration_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_1_register);
}


void MainWindow::on_bt_in_main_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0_main);
    ui->line_edit_input_login->clear();
    ui->line_edit_input_password->clear();
    ui->line_edit_input_login_AUTO->clear();
    ui->line_edit_input_password_AUTO->clear();
}


void MainWindow::on_bt_in_main_AUTO_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0_main);
    ui->line_edit_input_login->clear();
    ui->line_edit_input_password->clear();
    ui->line_edit_input_login_AUTO->clear();
    ui->line_edit_input_password_AUTO->clear();
}



void MainWindow::on_bt_enter_REG_clicked()
{
    QString login = ui->line_edit_input_login->text();
    QString password = ui->line_edit_input_password->text();
    bool regestration = Users::User_reg(login,password);
    if (regestration == true){
        ui->stackedWidget->setCurrentWidget(ui->page_3_accaunt);
        ui->line_edit_input_login->clear();
        ui->line_edit_input_password->clear();
        ui->text_label_REG->clear();
        ui->labe_acc->setText("Добро пожаловать " + login);
    }
    else {
        ui->text_label_REG->setText("Логин и пароль не должен начинаться с цифр или символа, а также содержать пробелы");
    }
    Logger::WARNING(4, "Введено слишком много символов, могут быть проблемы", login.toStdString(), "line_edit_input_login", 136);
    Logger::WARNING(4, "Введено слишком много символов, могут быть проблемы", password.toStdString(), "line_edit_input_password", 136);
}


void MainWindow::on_bt_in_main_ACC_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0_main);
}

void MainWindow::on_bt_enter_AUTO_clicked()
{
    QString login = ui->line_edit_input_login_AUTO->text();
    QString password = ui->line_edit_input_password_AUTO->text();
    bool autorization = Users::autorization(login, password);
    if (autorization == true){
        ui->stackedWidget->setCurrentWidget(ui->page_3_accaunt);
        ui->line_edit_input_login_AUTO->clear();
        ui->line_edit_input_password_AUTO->clear();
        ui->text_label_AUTO->clear();
        ui->labe_acc->setText("Добро пожаловать " + login);
    }
    else {
        ui->text_label_AUTO->setText("Неверно введен логин или пароль");
    }
}


void MainWindow::on_bt_change_photo_clicked()
{
    currentPhoto++;

    if(currentPhoto >= photos.size())
        currentPhoto = 0;

    QString path = ":/photos/images/" + photos[currentPhoto];

    QPixmap pix(path);
    ui->label->setPixmap(pix);
}

