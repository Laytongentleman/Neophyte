#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFrame>
#include <QTabWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QList>
#include "heatmap.h"
	#include <QRect>
#include <iostream>
#include <fstream>
#include <sstream>
#include <QGraphicsEffect>
#include <QWebEngineView>
#include "heatmaptotal.h"
#include "skills.h"
#include <QGridLayout>
 int nbskills = 12;
  int hsl []=  {1,2,3};
  Skill maths("Maths",1,"storage/mathsquicktext.txt",hsl) ;

  Skill physique("Physique",2,"storage/physiquequicktext.txt",hsl) ;
  Skill informatique("Informatique",3,"storage/informatique.txt",hsl) ;

  Skill francais("Français",4,"storage/francais.txt",hsl) ;
  Skill anglais("Anglais",5,"storage/anglais.txt",hsl) ;

  Skill allemand("Allemand",6,"storage/allemand.txt",hsl) ;

  Skill sport("Sport",7,"storage/sport.txt",hsl) ;
  Skill health("Health",8,"storage/health.txt",hsl);
  Skill dactylo("Physique",9,"storage/fasttyping.txt",hsl) ;
  Skill geo("Geographie",10,"storage/geographie.txt",hsl) ;
  Skill sleep("Sleep",11,"storage/sleep.txt",hsl) ;
  Skill chess("Chess",12,"storage/chess.txt",hsl);




  Skill skills[] = {maths,physique,informatique,francais,anglais,allemand,sport,health,dactylo,geo,sleep,chess};


using namespace std;
MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui (new Ui::MainWindow)
{
  ui->setupUi(this);

setWindowIcon(QIcon("icon.png"));
  //tabsWidget->setParent(ui->center);
  setWindowTitle("Ma super app !");
  (ui->TabWidget)->setMovable(true);
    (ui->TabWidget)->setTabsClosable(true);
    connect((ui->TabWidget), SIGNAL(tabCloseRequested(int)), this, SLOT(closeTab(int)));
    connect((ui->plainTextEdit_14),SIGNAL(textChanged()), this, SLOT(TextEditChanged()));
    openfiles();
    //tabsWidget->show();
    //m_customBtnBonjour = new CustomButton(this);
   (ui->mainstack)->setCurrentIndex(0);
   (ui->stackedWidget)->setCurrentIndex(7);
   heatmapsetup();
   addskillstabs();
}

void MainWindow::addskillstabs(){



  int indexoffset = 3; 
 for (int i = 0; i < nbskills;i++){
  int index = indexoffset + i;
  QWidget* tabFrame = new QWidget(this);
  (ui->statsWidget)->addTab(tabFrame,skills[i].name);
  QWidget* test = new QWidget(ui->statsWidget->widget(index));
  QGridLayout* grid = new QGridLayout;
  grid->setHorizontalSpacing(6);
  grid->setVerticalSpacing(6);
  grid->setRowStretch(0,0);
  //grid->setColumnStretch(0);
  //(ui->statsWidget->widget(index))->setLayout(grid);
  //tabFrame->setLayout(grid); 
  QString filePath = skills[i].txtpath;
 
  QFile file (filePath);
  QFileInfo fileName(filePath);
  if (!file.open(QIODevice::ReadOnly | QFile::Text)){
    QMessageBox::warning( this, "Warning", "Cannot open file : " + file.errorString());
  }


  QTextStream in(&file);
  QString text = in.readAll();  

  QPlainTextEdit * newedit = new QPlainTextEdit(tabFrame);
  newedit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  skills[i].edit = newedit;
  grid->addWidget(newedit);
  tabFrame->setLayout(grid);

 

  newedit->setPlainText(text);
  newedit->moveCursor (QTextCursor::Start);

  QFile datefile("storage/date.txt");
  if (!datefile.open(QIODevice::ReadOnly | QFile::Text)){
    QMessageBox::warning( this, "Warning", "Cannot open file : " + datefile.errorString());
  }

  QTextStream streamdate(&datefile);

  QString qstr = "|" + streamdate.readAll();//QString::fromStdString(s);

QString currentdateqs = newedit->toPlainText();

std::string currentdate = currentdateqs.toUtf8().constData();
  QLabel* m_label = new QLabel(ui->heatmapsupport);
  m_label->setText(qstr);
bool found = false;
for (int i =0; i < 10; i++) 
{
    if (currentdateqs[i] != qstr[i]) {
        found = true;


        //break;
    }
}
if (found) {
newedit->insertPlainText (qstr + "\n");;
}  file.close();
 

}
}

void MainWindow::heatmapsetup(){
   int x1 = 20;
   int x2 = 840;
   int y0 = 60 ;
   int ydec = 150;

   Heatmaptotal * heatmaths = new Heatmaptotal(ui->heatmapsupport,"Maths","storage/mathsquicktext.txt",x1,y0,'*',134,true);
   
   Heatmaptotal * heatsport = new Heatmaptotal(ui->heatmapsupport,"Sport","storage/mathsquicktext.txt",x2,y0,'$',350,true);
   
   Heatmaptotal * heatallemand = new Heatmaptotal(ui->heatmapsupport,"Allemand","storage/mathsquicktext.txt",x2,y0+2*ydec,'#', 22,true);

   Heatmaptotal * heatfrançais = new Heatmaptotal(ui->heatmapsupport,"Français","storage/mathsquicktext.txt",x2,y0+ydec,'*',300,true);

 
   Heatmaptotal * heatphys= new Heatmaptotal(ui->heatmapsupport,"Physique - Chimie","storage/physiquequicktext.txt",x1,y0 + ydec,'&',189,true);
   
   Heatmaptotal * heatinfo = new Heatmaptotal(ui->heatmapsupport,"Informatique","storage/mathsquicktext.txt",x1,y0 +2*ydec,'@',256,true);
   
   Heatmaptotal * heatanglais = new Heatmaptotal(ui->heatmapsupport,"Anglais","storage/mathsquicktext.txt",x1,y0+3*ydec,'~', 300,true);

   Heatmaptotal * heatfasttyping = new Heatmaptotal(ui->heatmapsupport,"Dactylographie","storage/mathsquicktext.txt",x2,y0+3*ydec,'%',164,true);
 
   Heatmaptotal * heatgeo = new Heatmaptotal(ui->heatmapsupport,"Géographie","storage/mathsquicktext.txt",x1, y0 + 4* ydec,'$',210,true);

   Heatmaptotal * heatchess = new Heatmaptotal(ui->heatmapsupport,"Chess","storage/mathsquicktext.txt",x2,y0 +4 * ydec,'$',164,true);

   Heatmaptotal * heathealth = new Heatmaptotal(ui->heatmapsupport,"Health","storage/mathsquicktext.txt",x1, y0 + 5* ydec,'$',140,true);

   Heatmaptotal * heatsleep = new Heatmaptotal(ui->heatmapsupport,"Sleep","storage/mathsquicktext.txt",x2,y0 +5 * ydec,'$',250,true);

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

QPlainTextEdit* MainWindow::currentTextEdit(){
  QList<QPlainTextEdit *> fileEditList = (ui->TabWidget)->findChildren<QPlainTextEdit *>("plainTextEdit_14"); 
  for (int i = 0; i < fileEditList.count(); i++){
    if ((ui->TabWidget)->indexOf(fileEditList[i]->parentWidget()) == (ui->TabWidget)->currentIndex()){
      return fileEditList[i];
    }
  }
  return new QPlainTextEdit;
}

void MainWindow::openTabFile(QString filePath){
  QFile file (filePath);
  QFileInfo fileName(filePath);
  if (!file.open(QIODevice::ReadOnly | QFile::Text)){
    QMessageBox::warning( this, "Warning", "Cannot open file : " + file.errorString());
  }

  (ui->TabWidget)->setTabToolTip((ui->TabWidget)->currentIndex(), filePath);
  QTextStream in(&file);
  QString text = in.readAll();

  MainWindow::currentTextEdit() ->setPlainText(text);
  file.close();
  (ui->TabWidget)->setTabText(ui->TabWidget->currentIndex(),fileName.fileName());

}
void MainWindow::on_actionOpen_File_triggered(){
  QString filePath =QFileDialog::getOpenFileName(this, "Open the file");
  MainWindow::openTabFile(filePath);
}


using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::ostringstream;

string readFileIntoString(const string& path) {
    ifstream input_file(path);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << path << "'" << endl;
        exit(EXIT_FAILURE);
    }
    return string((std::istreambuf_iterator<char>(input_file)), std::istreambuf_iterator<char>());
}

void MainWindow::openfiles(){
  int nbjournaux = 2;
  /*QPlainTextEdit* journaux[nbjournaux]={ui->mathsquicktext, ui->physiquequicktext};
  QString journauxnames[nbjournaux]={"storage/mathsquicktext.txt","storage/physiquequicktext.txt"};
  
  for (int x = 0; x < nbjournaux;x++){
  QString filePath = journauxnames[x];

  QFile file (filePath);
  QFileInfo fileName(filePath);
  if (!file.open(QIODevice::ReadOnly | QFile::Text)){
    QMessageBox::warning( this, "Warning", "Cannot open file : " + file.errorString());
  }
  QTextStream in(&file);
  QString text = in.readAll();

  journaux[x]->setPlainText(text);
  journaux[x]->moveCursor (QTextCursor::Start);

  QFile datefile("storage/date.txt");
  if (!datefile.open(QIODevice::ReadOnly | QFile::Text)){
    QMessageBox::warning( this, "Warning", "Cannot open file : " + datefile.errorString());
  }

  QTextStream streamdate(&datefile);

  QString qstr = "|" + streamdate.readAll();//QString::fromStdString(s);

QString currentdateqs = journaux[x]->toPlainText();

std::string currentdate = currentdateqs.toUtf8().constData();
  QLabel* m_label = new QLabel(ui->heatmapsupport);
  m_label->setText(qstr);
bool found = false;
for (int i =0; i < 11; i++) 
{
    if (currentdateqs[i] != qstr[i]) {
        found = true;


        //break;
    }
}
if (found) {
journaux[x]->insertPlainText (qstr + "\n");;
}  file.close();
  
}*/
}




void MainWindow::on_actionSave_All_triggered(){
  /*QString fileName = (ui->TabWidget)->tabToolTip(ui->TabWidget->currentIndex());
  if (fileName == "Untitled"){
    MainWindow::on_actionSave_As_triggered();
    return;
  }
  QFile file(fileName);
  if (!file.open(QFile::WriteOnly | QFile::Text)){
    QMessageBox::warning(this,"warning","Cannot save file : " + file.errorString());
    return;
  }
  QTextStream out(&file);
  QString text = MainWindow::currentTextEdit()->toPlainText();
  out << text;
  file.close();
  QString newTabText = (ui->TabWidget)->tabText((ui->TabWidget)->currentIndex()).remove(0,1);
  (ui->TabWidget)->setTabText((ui->TabWidget)->currentIndex(),newTabText); 
  */

  


  int indexoffset = 3; 
 for (int i = 0; i < nbskills;i++){
  int index = indexoffset + i;
  
  QString fileName =  skills[i].txtpath;
  QFile file(fileName);
  if (!file.open(QFile::WriteOnly | QFile::Text)){
    QMessageBox::warning(this,"warning","Cannot save file : " + file.errorString());
    return;
  }
  QTextStream out(&file);


  QString text = (skills[i].edit)->toPlainText();
  out << text;
  file.close();}
 
  
}


void MainWindow::on_actionSave_As_triggered(){
    if (ui->TabWidget->count() == 0) {
        QMessageBox::warning(this, "Warning", "Cannot save file !");
        return;
    }
    QString filePath = QFileDialog::getSaveFileName(this, "Save as ...");
    QFile file(filePath);

    if (!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save file : " + file.errorString());

        return;}
}
void MainWindow::on_startbutton_clicked(){
  (ui->mainstack)->setCurrentIndex(0);
}

void MainWindow::closeTab(int index){

  (ui->TabWidget)->removeTab(index);
}
void MainWindow::on_mathsbutton_clicked(){
  (ui->stackedWidget)->setCurrentIndex(0);
}
void MainWindow::on_physiquebutton_clicked(){
  (ui->stackedWidget)->setCurrentIndex(1);
}
void MainWindow::on_infobutton_clicked(){
  (ui->stackedWidget)->setCurrentIndex(2);
}
void MainWindow::on_anglaisbutton_clicked(){
  (ui->stackedWidget)->setCurrentIndex(3);
}
void MainWindow::on_tutobutton_clicked(){
  (ui->stackedWidget)->setCurrentIndex(6);
}
void MainWindow::on_statsbutton_clicked(){
  (ui->stackedWidget)->setCurrentIndex(7);
}
void MainWindow::TextEditChanged(){
 QString tabName =  (ui->TabWidget)->tabText((ui->TabWidget)->currentIndex());
 if (tabName.at(0) != "*")
   (ui->TabWidget)->setTabText((ui->TabWidget)->currentIndex(), "*"+tabName);
}


void MainWindow::on_action_Exit_triggered(){
  QCoreApplication::exit();
}

