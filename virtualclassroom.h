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

private slots:
    void on_pushButton_calendar_clicked();

    void on_pushButton_home_clicked();

    void on_pushButton_class_clicked();

    void on_pushButton_announcement_clicked();

    void on_pushButton_file_clicked();

    void on_pushButton_chat_clicked();

    void on_pushButton_setting_clicked();

private:
    Ui::VirtualClassroom *ui;
};

#endif // VIRTUALCLASSROOM_H
