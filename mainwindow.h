#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include "custombutton.h"
#include <QTabWidget>
QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow;}
QT_END_NAMESPACE
class MainWindow : public QMainWindow{
  Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_actionNF_triggered();
private:
    CustomButton * m_customBtnBonjour;
    Ui::MainWindow *ui;
    QTabWidget *tabsWidget = new QTabWidget(this);
};
#endif //MAINWINDOW.H
