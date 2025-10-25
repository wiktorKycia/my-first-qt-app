#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <vector>
#include <string>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    srand(time(NULL));
    int rnd = random()%3;
    std::vector<std::string> greetings = {"hello world!", "hello from qt", "C++ is amazing"};
    ui->label->setText(QString::fromStdString(greetings[rnd]));
}

