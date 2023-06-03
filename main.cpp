#include <QApplication>
#include "mainwindow.h"
#include <QPushButton>
#include "timelogic.h"
int main (int argc, char *argv[]){
  QApplication a (argc, argv);
  MainWindow w;
 //QPushButton btn("Toto", &w);

  update_date();
  w.show();

 
  return a.exec();

}
