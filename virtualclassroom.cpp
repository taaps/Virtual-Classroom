#include "virtualclassroom.h"
#include "ui_virtualclassroom.h"

VirtualClassroom::VirtualClassroom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VirtualClassroom)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white");
    ui->groupBox->setStyleSheet("background-color: lightgrey");
    ui->pushButton_home->setStyleSheet("background-color: white");
    ui->pushButton_class->setStyleSheet("background-color: white");
    ui->pushButton_announcement->setStyleSheet("background-color: white");
    ui->pushButton_calendar->setStyleSheet("background-color: white");
    ui->pushButton_file->setStyleSheet("background-color: white");
    ui->pushButton_chat->setStyleSheet("background-color: white");
    ui->pushButton_setting->setStyleSheet("background-color: white");

    // Hide necessary widgets
    ui->calendarWidget->hide();
}

VirtualClassroom::~VirtualClassroom()
{
    delete ui;
}

void VirtualClassroom::on_pushButton_calendar_clicked()
{
    // Show necessary widgets
    ui->calendarWidget->show();
}

void VirtualClassroom::on_pushButton_home_clicked()
{
    // Hide necessary widgets
    ui->calendarWidget->hide();
}

void VirtualClassroom::on_pushButton_class_clicked()
{
    // Hide necessary widgets
    ui->calendarWidget->hide();
}

void VirtualClassroom::on_pushButton_announcement_clicked()
{
    // Hide necessary widgets
    ui->calendarWidget->hide();
}

void VirtualClassroom::on_pushButton_file_clicked()
{
    // Hide necessary widgets
    ui->calendarWidget->hide();
}

void VirtualClassroom::on_pushButton_chat_clicked()
{
    // Hide necessary widgets
    ui->calendarWidget->hide();
}

void VirtualClassroom::on_pushButton_setting_clicked()
{
    // Hide necessary widgets
    ui->calendarWidget->hide();
}
