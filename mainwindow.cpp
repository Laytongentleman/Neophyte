#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFrame>
#include <QTabWidget>
MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui (new Ui::MainWindow)
{
  ui->setupUi(this);
  tabsWidget->setParent(ui->center);
  setWindowTitle("Ma super app !");
  tabsWidget->addTab(new QWidget, "tab1");
  tabsWidget->addTab(new QWidget, "tab2");
  tabsWidget->addTab(new QWidget, "tab3");
  tabsWidget->resize(9999,tabsWidget->height());
  tabsWidget->setMovable(true);
  tabsWidget->setTabsClosable(true);




  tabsWidget->show();
  //m_customBtnBonjour = new CustomButton(this);
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::on_actionNF_triggered(){
  QFrame *tabFrame = new QFrame(this);
  tabsWidget->addTab(tabFrame,"Untitled");
  printf("ça doit ajouter");
}

