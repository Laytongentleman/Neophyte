#include <QApplication>
#include "mainwindow.h"
#include <QPushButton>
#include "timelogic.h"
#include <QStandardPaths>
#include <QStyle>
int main (int argc, char *argv[]){
update_date();
  QApplication a (argc, argv);

  MainWindow w;
 //QPushButton btn("Toto", &w);



  w.setWindowState(Qt::WindowMaximized);
  //w.setWindowState(Qt::WindowFullScreen);
  w.show();
  QFont newFont("Terminus", 14, QFont::Bold, true);
//set font of application
  QApplication::setFont(newFont);
  //a.setStyle("Windows");

 
  return a.exec();


}
