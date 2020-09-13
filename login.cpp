#include "login.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

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

void MainWindow::on_pushButton_login_clicked()
{
    Qt::CheckState student_checkbox = ui->checkBox_student->checkState();
    Qt::CheckState teacher_checkbox = ui->checkBox_teacher->checkState();

    if(student_checkbox == Qt::Checked && teacher_checkbox == Qt::Checked)
    {
        QMessageBox::warning(this, "Login", "Please select only one of teacher or student");
        return;
    }
    else if(student_checkbox != Qt::Checked && teacher_checkbox != Qt::Checked)
    {
        QMessageBox::warning(this, "Login", "Please select either teacher or student");
        return;
    }

    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "tapasvi" && password == "patel")
    {
        hide();
        virtual_classroom = new VirtualClassroom(this);
        virtual_classroom->show();
    }
    else
    {
         QMessageBox::warning(this, "Login", "Username and/or password is not correct");
    }
}
