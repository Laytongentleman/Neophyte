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
  QFont newFont("Terminus", 14, QFont::Bold, true);
//set font of application
  QApplication::setFont(newFont);

 
  return a.exec();


}
