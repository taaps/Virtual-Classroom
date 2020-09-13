#include "virtualclassroom.h"
#include "ui_virtualclassroom.h"

VirtualClassroom::VirtualClassroom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VirtualClassroom)
{
    ui->setupUi(this);
}

VirtualClassroom::~VirtualClassroom()
{
    delete ui;
}
