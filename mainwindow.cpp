#include "mainwindow.h"
#include <QFrame>
#include <QTabWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QList>
	#include <QRect>
#include <iostream>
#include <fstream>
#include <sstream>
#include <QGraphicsEffect>
#include <QWebEngineView>
#include <QGridLayout>
#include <QStatusBar>



#include "skills.h"


   Heatmaptotal* heats[12];
int nbskills = 12;
  int hsl[3]=  {200,70,0};
  Skill maths("Maths",1,"storage/mathsquicktext.txt",hsl) ;
//  hsl[0] = 180;
  Skill physique("Physique",2,"storage/physiquequicktext.txt",hsl) ;
  //hsl[0] = 270;
  Skill informatique("Informatique",3,"storage/informatique.txt",hsl) ;
;
  //hsl[0] = 325;
  Skill francais("Français",4,"storage/francais.txt",hsl) ; 
  //hsl[0] = 250;
  Skill anglais("Anglais",5,"storage/anglais.txt",hsl) ; 
  //hsl[0] = 40;
  //hsl[1] = 100;
  Skill allemand("Allemand",6,"storage/allemand.txt",hsl) ; 
   // hsl[0] = 360;
 //hsl[1] = 80;

  Skill sport("Sport",7,"storage/sport.txt",hsl) ; 
   // hsl[0] = 115;
  //hsl[1] = 59
  Skill health("Health",8,"storage/health.txt",hsl); 
    //hsl[0] = 160;
 //hsl[1] = 60
  Skill dactylo("Dactyolographie",9,"storage/fasttyping.txt",hsl) ;
   // hsl[0] = 27;
 //hsl[1] = 35

  Skill geo("Geographie",10,"storage/geographie.txt",hsl) ;
   // hsl[0] = 260;
 //hsl[1] = 20

  Skill sleep("Sleep",11,"storage/sleep.txt",hsl) ;
   // hsl[0] = 144;
 //hsl[1] = 27

  Skill chess("Chess",12,"storage/chess.txt",hsl);
  Skill skills_list[] = {maths,physique,informatique,francais,anglais,allemand,sport,health,dactylo,geo,sleep,chess};




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
   (ui->statsWidget)->setCurrentIndex(0);

   heatmapsetup();
   addskillstabs();
}
bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
  if (event->type() == QEvent::MouseMove)
  {
    QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
    statusBar()->showMessage(QString("Mouse move (%1,%2)").arg(mouseEvent->pos().x()).arg(mouseEvent->pos().y()));
  }
  return false;
}

void MainWindow::addskillstabs(){



  int indexoffset = 3; 
 for (int i = 0; i < nbskills;i++){
  int index = indexoffset + i;
  QWidget* tabFrame = new QWidget(this);
  (ui->statsWidget)->addTab(tabFrame,skills_list[i].name);
  QWidget* test = new QWidget(ui->statsWidget->widget(index));
  QGridLayout* grid = new QGridLayout;
  grid->setHorizontalSpacing(6);
  grid->setVerticalSpacing(6);
  grid->setRowStretch(0,0);
  //grid->setColumnStretch(0);
  //(ui->statsWidget->widget(index))->setLayout(grid);
  //tabFrame->setLayout(grid); 
  QString filePath = skills_list[i].txtpath;
 
  QFile file (filePath);
  QFileInfo fileName(filePath);
  if (!file.open(QIODevice::ReadOnly | QFile::Text)){
    QMessageBox::warning( this, "Warning", "Cannot open file : " + file.errorString());
  }


  QTextStream in(&file);
  QString text = in.readAll();  

  QPlainTextEdit * newedit = new QPlainTextEdit(tabFrame);
  newedit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  skills_list[i].edit = newedit;
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
 // m_label->setText(qstr);
bool found = false;
for (int i =0; i < 11; i++) 
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
   int y0 = 50 ;
   int ydec = 148;

   for(int i = 0; i<6;i++){
   heats[i] = new Heatmaptotal(ui->heatmapsupport,skills_list[i].name,skills_list[i].txtpath,x1,y0+i*ydec,'*',skills_list[i].hsl,true);
   }
   for(int i = 6; i<12;i++){
   heats[i]= new Heatmaptotal(ui->heatmapsupport,skills_list[i].name,skills_list[i].txtpath,x2,y0+(i-6)*ydec,'*',skills_list[i].hsl,true);
   }
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

void MainWindow::clearLayout(QLayout* layout, bool deleteWidgets){
  while (QLayoutItem* item = layout->takeAt(0))
        {
          if (deleteWidgets)
          {
              if (QWidget* widget = item->widget())
                  widget->deleteLater();
          }
          if (QLayout* childLayout = item->layout())
              clearLayout(childLayout, deleteWidgets);
          delete item;
      }
}


void MainWindow::on_actionSave_All_triggered(){

  int indexoffset = 3; 
 for (int i = 0; i < nbskills;i++){
  int index = indexoffset + i;
  
  QString fileName =  skills_list[i].txtpath;
  QFile file(fileName);
  if (!file.open(QFile::WriteOnly | QFile::Text)){
    QMessageBox::warning(this,"warning","Cannot save file : " + file.errorString());
    return;
  }
  QTextStream out(&file);


  QString text = (skills_list[i].edit)->toPlainText();
  out << text;
  file.close();}
 

  qDeleteAll(ui->heatmapsupport->findChildren<QWidget*>("", Qt::FindDirectChildrenOnly));
  
  heatmapsetup();
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

