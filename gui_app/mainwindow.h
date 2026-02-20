#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <functions.hpp>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bt_clicked_clicked();

    void on_argument_1_textChanged(const QString &arg1);

    void on_argument_2_textChanged(const QString &arg2);

    void on_result_textChanged(const QString &result);

private:
    Ui::MainWindow *ui;
    size_t counter_ = 0;
    Logger logger;
};
#endif // MAINWINDOW_H
