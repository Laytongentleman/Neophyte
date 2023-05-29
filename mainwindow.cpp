#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFrame>
#include <QTabWidget>
MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui (new Ui::MainWindow)
{
  ui->setupUi(this);
  //tabsWidget->setParent(ui->center);
  setWindowTitle("Ma super app !");
  (ui->TabWidget)->addTab(new QWidget, "tab1");
  (ui->TabWidget)->addTab(new QWidget, "tab2");
  (ui->TabWidget)->addTab(new QWidget, "tab3");
  (ui->TabWidget)->resize(9999,(ui->TabWidget)->height());
  (ui->TabWidget)->setMovable(true);
  (ui->TabWidget)->setTabsClosable(true);
  //tabsWidget->show();
  //m_customBtnBonjour = new CustomButton(this);
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::on_actionNF_triggered(){
  QFrame *tabFrame = new QFrame(this);
  (ui->TabWidget)->addTab(tabFrame,"Untitled");
}
void MainWindow::on_actionCF_triggered(){
  (ui->TabWidget)->removeTab((ui->TabWidget)->currentIndex());
}
