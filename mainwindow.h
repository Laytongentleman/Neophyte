#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPushButton>
#include "custombutton.h"
#include <QTabWidget>
#include <QPlainTextEdit>
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
    void on_actionCF_triggered(); 
    void closeTab(int index);
   void on_mathsbutton_clicked();
 void on_physiquebutton_clicked();
 void on_infobutton_clicked();
  void on_anglaisbutton_clicked();
 void on_tutobutton_clicked();
   void on_actionOpen_File_triggered();
   void openTabFile(QString filepath);
   QPlainTextEdit*  currentTextEdit();
    void TextEditChanged();
void on_actionSave_All_triggered();
void on_actionSave_As_triggered();
void on_action_Exit_triggered();
void openfiles();
void on_startbutton_clicked(); 
void on_statsbutton_clicked(); 
void heatmapsetup();
void addskillstabs();

private:
    CustomButton * m_customBtnBonjour;
    Ui::MainWindow *ui;
    QTabWidget *tabsWidget = new QTabWidget(this);
};
#endif //MAINWINDOW.H
