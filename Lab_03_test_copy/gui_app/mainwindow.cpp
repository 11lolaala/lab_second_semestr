#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Logger logger;
    logger.TRACER(1,"Программа запущена");
}

MainWindow::~MainWindow()
{
    delete ui;
    logger.TRACER(1,"Программа закончила работу");
}

void MainWindow::on_bt_clicked_clicked()
{
    logger.INFO(2,"Нажата кнопка:", "bt_clicked");
    int argument_1 = ui->argument_1->text().toInt();
    int argument_2 = ui->argument_2->text().toInt();
    ui->result->setText(QString::number(argument_1+argument_2));
}


void MainWindow::on_argument_1_textChanged(const QString &arg1)
{
    logger.DEBUG(3,"Изменились данные:","argument_1", ui->argument_1->text().toInt());
    logger.WARNING(4,"Возможны проблемы, слишком длинный текст в",ui->argument_1->text().toStdString(), "argument_1", 31);
    QString argument_1 = ui->argument_1->text();
    logger.ERROR(5,"Ошибка, введено не число в",ui->argument_1->text().toStdString(),"argument_1", 33);
    logger.CRITICAL(6,"Переполнение в ", ui->argument_1->text().toInt(), "argument_1", 34 );
}


void MainWindow::on_argument_2_textChanged(const QString &arg2)
{
    logger.DEBUG(3,"Изменились данные:","argument_2", ui->argument_2->text().toInt());
    QString argument_2 = ui->argument_2->text();
    logger.WARNING(4,"Возможны проблемы, слишком длинный текст в",ui->argument_2->text().toStdString(), "argument_2", 46);
    logger.ERROR(5,"Ошибка, введено не число в",ui->argument_2->text().toStdString(),"argument_2", 48);
    logger.CRITICAL(6,"Переполнение в ", ui->argument_2->text().toInt(), "argument_2", 44 );
}


void MainWindow::on_result_textChanged(const QString &result)
{
    logger.WARNING(4,"Возможны проблемы, слишком длинный текст в",ui->result->text().toStdString(), "result", 60);
    logger.CRITICAL(6,"Переполнение в ", ui->result->text().toInt(), "result", 51 );
    logger.DEBUG(3,"Изменились данные:","result", ui->result->text().toInt());
}


