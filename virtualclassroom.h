#ifndef VIRTUALCLASSROOM_H
#define VIRTUALCLASSROOM_H

#include <QMainWindow>

namespace Ui {
class VirtualClassroom;
}

class VirtualClassroom : public QMainWindow
{
    Q_OBJECT

public:
    explicit VirtualClassroom(QWidget *parent = nullptr);
    ~VirtualClassroom();

private:
    Ui::VirtualClassroom *ui;
};

#endif // VIRTUALCLASSROOM_H
