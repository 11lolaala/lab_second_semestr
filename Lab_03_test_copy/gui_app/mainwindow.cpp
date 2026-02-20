#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Logger::TRACER(1,"Программа запущена");
}

MainWindow::~MainWindow()
{
    delete ui;
    Logger::TRACER(1,"Программа закончила работу");
}

void MainWindow::on_bt_clicked_clicked()
{
    Logger::INFO(2,"Нажата кнопка:", "bt_clicked");
    int argument_1 = ui->argument_1->text().toInt();
    int argument_2 = ui->argument_2->text().toInt();
    ui->result->setText(QString::number(argument_1+argument_2));
}


void MainWindow::on_argument_1_textChanged(const QString &arg1)
{
    Logger::DEBUG(3,"Изменились данные:","argument_1", ui->argument_1->text().toInt());
    Logger::WARNING(4,"Возможны проблемы, слишком длинный текст в",ui->argument_1->text().toStdString(), "argument_1", 31);
    QString argument_1 = ui->argument_1->text();
    Logger::ERROR(5,"Ошибка, введено не число в",ui->argument_1->text().toStdString(),"argument_1", 33);
    Logger::CRITICAL(6,"Переполнение в ", ui->argument_1->text().toInt(), "argument_1", 34 );
}


void MainWindow::on_argument_2_textChanged(const QString &arg2)
{
   Logger::DEBUG(3,"Изменились данные:","argument_2", ui->argument_2->text().toInt());
    QString argument_2 = ui->argument_2->text();
    Logger::WARNING(4,"Возможны проблемы, слишком длинный текст в",ui->argument_2->text().toStdString(), "argument_2", 46);
    Logger::ERROR(5,"Ошибка, введено не число в",ui->argument_2->text().toStdString(),"argument_2", 48);
    Logger::CRITICAL(6,"Переполнение в ", ui->argument_2->text().toInt(), "argument_2", 44 );
}


void MainWindow::on_result_textChanged(const QString &result)
{
    Logger::WARNING(4,"Возможны проблемы, слишком длинный текст в",ui->result->text().toStdString(), "result", 60);
    Logger::CRITICAL(6,"Переполнение в ", ui->result->text().toInt(), "result", 51 );
    Logger::DEBUG(3,"Изменились данные:","result", ui->result->text().toInt());
}



