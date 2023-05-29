#include <QApplication>
#include "mainwindow.h"
#include <QPushButton>
int main (int argc, char *argv[]){
  QApplication a (argc, argv);
  MainWindow w;
 //QPushButton btn("Toto", &w);


  w.show();

 
  return a.exec();

}
