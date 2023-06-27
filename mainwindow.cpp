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
 (ui->mainstack)->setCurrentIndex(1);
 (ui->stackedWidget)->setCurrentIndex(0);
 int year = 2023;
 QString month[12] = {"Jan","Fev","Mars","Avril","Mai","Juin","Juill","Aout","Sept","Oct","Nov","Dec"};
  
 int monthsize[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
 if ((year %4 == 0 && year %100 != 0) || year %400 == 0) { 
   monthsize[1] = 29;
 }


 for (int k = 0 ; k <12; k++){
 QLabel* t = new QLabel(ui->heatmapsupport);
 t->setText(month[k]);
 t->move(40+k*4.3*14,50);
 }
 int yoff = 70;
 QLabel* maths = new QLabel(ui->heatmapsupport);
 maths->setText("MATHS");
 maths->move(300,yoff - 50);

 ifstream infile("storage/mathsquicktext.txt");



                
  Heatmap * harray[12][31]; 
   for (int i =0 ; i < 53;i++){
     for(int j = 0; j < 7; j++){
       if ((1+j)+(i)*7 <= 366) {
 //int a = rand()%255;
char buff[400];
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( 255 , 255, 255);}*:hover{border: 1rem solid;background-color: blue;}");
  std::string buffAsStdStr = buff;
  Heatmap* test = new Heatmap(ui->heatmapsupport);
  test->move(20 + i*14,yoff + j*14);
 test->resize(10,10);
 char date[20];
 int c = i*7+(j+1);
 int potmonth = 0;
 while (c > monthsize[potmonth]){
   c = c - monthsize[potmonth];
   if (potmonth < 11) {potmonth++;} else {potmonth = 0;}
 }
 
 snprintf(date, sizeof(date), "%d %s", c,  month[potmonth].toUtf8().constData()
) ;

  test->setToolTip(date);

   test->setStyleSheet(buff);
   harray[potmonth][c] = test;
  }
}
}
    bool registering = false;
    int d=0;
    int m=0;

 int score = 0;

  /* FILE * fp = fopen("storage/date.txt","w");
 

   char cur_time[128];
  
   time_t      t1;
   struct tm*  ptm;
  
   t1 = time(NULL);
   ptm = localtime(&t1);
   
   strftime(cur_time, 128, "%Y-%m-%d %H:%M:%S", ptm);
   int curday = ptm->tm_mday;
   int curmonth = ptm->tm_mon;
   printf("%d", curmonth+1);*/
  int streak = -1;
  bool streakbroken = false;
  bool streakok = true;
  while (infile.good())
  {

    string sLine;
    getline(infile, sLine);
    if (sLine[0] == '|') {
      if (registering == true){
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( %d , %d , %d);}*:hover{border: 1rem solid;background-color: blue;}", 255-a,255-a, (255-a/10));
   harray[m][d]->setStyleSheet(buff);
      }
      struct tm tm;
           //char buf[255];

           sLine.erase(0,1);
           memset(&tm, 0, sizeof(tm));
          const char * sline2 = sLine.c_str();
           strptime(sline2, "%Y-%m-%d %H:%M:%S", &tm);
            // des pistes à explorer pour mieux mettre la date auto dans le fichier mathsquicktext
           //strftime(buf, sizeof(buf), "%d %b %Y %H:%M", &tm);
           //puts(buf);
           d = tm.tm_mday;
           m =tm.tm_mon ;
           // on brise la streak que si la streak est brisé avant aujourd'hui et pas le futur
          
           if (not streakbroken  )  {
           if (streakok){
           streak++;
           }
           else{
             streakbroken = true;
           }

           }
           streakok = false;
           registering = true;

           score = 0;
    }
    else{
      int countch = 0;
      int l = sLine.length();
      for (int i = 0; i < l;i++) {
        if (sLine[countch] == '*'){ score++; streakok = true;}
        countch++;
        if (sLine[countch] == '%'){ score--;}

      }
    }
  }
      if (registering == true){
        streakok = true;
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( %d , %d , %d);}*:hover{border: 1rem solid;background-color: blue;}", 255-a,255-a, (255-a/10));
   harray[m][d]->setStyleSheet(buff);
      } 

 QLabel* curstreak = new QLabel(ui->heatmapsupport);
 char buff[50];
 snprintf(buff, sizeof(buff), "current streak : %d", streak);

 curstreak->setText(buff);
 curstreak->move(360,yoff - 50);


 // copie à clean
//
 yoff = 70+150;
 for (int k = 0 ; k <12; k++){
 QLabel* t = new QLabel(ui->heatmapsupport);
 t->setText(month[k]);
 t->move(40+k*4.3*14,yoff-30);
 }





// physique 
infile.clear();
  infile.close();
infile.open("storage/physiquequicktext.txt");



                
   for (int i =0 ; i < 53;i++){
     for(int j = 0; j < 7; j++){
       if ((1+j)+(i)*7 <= 366) {
 //int a = rand()%255;
 char buff[400];
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( 255 , 255, 255);}*:hover{border: 1rem solid;background-color: skyblue;}");
  std::string buffAsStdStr = buff;
  
  Heatmap * test = new Heatmap(ui->heatmapsupport);
  test->move(20 + i*14,yoff + j*14);
 test->resize(10,10);
 char date[20];
 int c = i*7+(j+1);
 int potmonth = 0;
 while (c > monthsize[potmonth]){
   c = c - monthsize[potmonth];
   if (potmonth < 11) {potmonth++;} else {potmonth = 0;}
 }
 
 snprintf(date, sizeof(date), "%d %s", c,  month[potmonth].toUtf8().constData()
) ;

  test->setToolTip(date);

   test->setStyleSheet(buff);
   harray[potmonth][c] = test;
  }
}
}
    registering = false;
    d=0;
     m=0;
    score = 0;
  while (infile.good())
  {
    string sLine;
    getline(infile, sLine);

    if (sLine[0] == '|') {
      if (registering == true){
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( %d , %d , %d);}*:hover{border: 1rem solid;background-color: skyblue ;}", 255-a,255-(a/10), (255-a/10));
  harray[m][d]->setStyleSheet(buff);
      }
      struct tm tm;
           //char buf[255];

           sLine.erase(0,1);
           memset(&tm, 0, sizeof(tm));
          const char * sline2 = sLine.c_str();
           strptime(sline2, "%Y-%m-%d %H:%M:%S", &tm);
            // des pistes à explorer pour mieux mettre la date auto dans le fichier mathsquicktext
           //strftime(buf, sizeof(buf), "%d %b %Y %H:%M", &tm);
           //puts(buf);
           d = tm.tm_mday;
           m =tm.tm_mon ;
           registering = true;
           score = 0;
    }
    else{
      int countch = 0;
      int l = sLine.length();
      for (int i = 0; i < l;i++) {
        if (sLine[countch] == '&'){ score++;}
        countch++;
        if (sLine[countch] == '%'){ score--;}

      }
    }
  }
      if (registering == true){
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( %d , %d , %d);}*:hover{border: 1rem solid;background-color: skyblue;}", 255-a,255-(a/10), (255-a/10));
   harray[m][d]->setStyleSheet(buff);
      }

// info
infile.clear();
  infile.close();
infile.open("storage/mathsquicktext.txt");


 
  yoff= 70+300 ;
 for (int k = 0 ; k <12; k++){
 QLabel* t = new QLabel(ui->heatmapsupport);
 t->setText(month[k]);
 t->move(40+k*4.3*14,yoff-30);
 }
for (int i =0 ; i < 53;i++){
     for(int j = 0; j < 7; j++){
       if ((1+j)+(i)*7 <= 366) {
 //int a = rand()%255;
 char buff[400];
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( 255 , 255, 255);}*:hover{border: 1rem solid;background-color: purple;}");
  std::string buffAsStdStr = buff;
  
  Heatmap * test = new Heatmap(ui->heatmapsupport);
  test->move(20 + i*14,yoff + j*14);
 test->resize(10,10);
 char date[20];
 int c = i*7+(j+1);
 int potmonth = 0;
 while (c > monthsize[potmonth]){
   c = c - monthsize[potmonth];
   if (potmonth < 11) {potmonth++;} else {potmonth = 0;}
 }
 
 snprintf(date, sizeof(date), "%d %s", c,  month[potmonth].toUtf8().constData()
) ;

  test->setToolTip(date);

   test->setStyleSheet(buff);
   harray[potmonth][c] = test;
  }
}
}
    registering = false;
    d=0;
     m=0;
    score = 0;
  while (infile.good())
  {
    string sLine;
    getline(infile, sLine);

    if (sLine[0] == '|') {
      if (registering == true){
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( %d , %d , %d);}*:hover{border: 1rem solid;background-color: purple ;}", 255-(a/(5)),255-a, (255-a/10));
   harray[m][d]->setStyleSheet(buff);
      }
      struct tm tm;
           //char buf[255];

           sLine.erase(0,1);
           memset(&tm, 0, sizeof(tm));
          const char * sline2 = sLine.c_str();
           strptime(sline2, "%Y-%m-%d %H:%M:%S", &tm);
            // des pistes à explorer pour mieux mettre la date auto dans le fichier mathsquicktext
           //strftime(buf, sizeof(buf), "%d %b %Y %H:%M", &tm);
           //puts(buf);
           d = tm.tm_mday;
           m =tm.tm_mon ;
           registering = true;
           score = 0;
    }
    else{
      int countch = 0;
      int l = sLine.length();
      for (int i = 0; i < l;i++) {
        if (sLine[countch] == '@'){ score++;}
        countch++;
        if (sLine[countch] == '%'){ score--;}

      }
    }
  }
      if (registering == true){
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( %d , %d , %d);}*:hover{border: 1rem solid;background-color: purple;}", 255-(a/5),255-(a), (255-(a/10)));
   harray[m][d]->setStyleSheet(buff);
      }

// sport 
infile.clear();
  infile.close();
infile.open("storage/mathsquicktext.txt");



yoff= 70+450;                
for (int k = 0 ; k <12; k++){
 QLabel* t = new QLabel(ui->heatmapsupport);
 t->setText(month[k]);
 t->move(40+k*4.3*14,yoff-30);
 }

   for (int i =0 ; i < 53;i++){
     for(int j = 0; j < 7; j++){
       if ((1+j)+(i)*7 <= 366) {
 //int a = rand()%255;
 char buff[400];
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( 255 , 255, 255);}*:hover{border: 1rem solid;background-color: red ;}");
  std::string buffAsStdStr = buff;
  
  Heatmap * test = new Heatmap(ui->heatmapsupport);
  test->move(20 + i*14,yoff + j*14);
 test->resize(10,10);
 char date[20];
 int c = i*7+(j+1);
 int potmonth = 0;
 while (c > monthsize[potmonth]){
   c = c - monthsize[potmonth];
   if (potmonth < 11) {potmonth++;} else {potmonth = 0;}
 }
 
 snprintf(date, sizeof(date), "%d %s", c,  month[potmonth].toUtf8().constData()
) ;

  test->setToolTip(date);

   test->setStyleSheet(buff);
   harray[potmonth][c] = test;
  }
}
}
    registering = false;
    d=0;
     m=0;
    score = 0;



  while (infile.good())
  {
    string sLine;
    getline(infile, sLine);

    if (sLine[0] == '|') {
      if (registering == true){
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( %d , %d , %d);}*:hover{border: 1rem solid;background-color: red ;}", 255-(a/10),255-a, (255-a));
   harray[m][d]->setStyleSheet(buff);
      }
      struct tm tm;
           //char buf[255];

           sLine.erase(0,1);
           memset(&tm, 0, sizeof(tm));
          const char * sline2 = sLine.c_str();
           strptime(sline2, "%Y-%m-%d %H:%M:%S", &tm);
            // des pistes à explorer pour mieux mettre la date auto dans le fichier mathsquicktext
           //strftime(buf, sizeof(buf), "%d %b %Y %H:%M", &tm);
           //puts(buf);
           d = tm.tm_mday;
           m =tm.tm_mon ;
           registering = true;
           score = 0;
    }
    else{
      int countch = 0;
      int l = sLine.length();
      for (int i = 0; i < l;i++) {
        if (sLine[countch] == '$'){ score++;}
        countch++;
        if (sLine[countch] == '%'){ score--;}

      }
    }
  }
      if (registering == true){
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: rgb( %d , %d , %d);}*:hover{border: 1rem solid;background-color: red;}", 255-(a/10),255-a, (255-a));
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
  QPlainTextEdit* journaux[nbjournaux]={ui->mathsquicktext, ui->physiquequicktext};
  QString journauxnames[nbjournaux]={"mathsquicktext.txt","physiquequicktext.txt"};
  
  for (int x = 0; x < nbjournaux;x++){
  QString filePath ="storage/" + journauxnames[x];

  QFile file (filePath);
  QFileInfo fileName(filePath);
  if (!file.open(QIODevice::ReadOnly | QFile::Text)){
    QMessageBox::warning( this, "Warning", "Cannot open file : " + file.errorString());
  }
  QTextStream in(&file);
  QString text = in.readAll();

  journaux[x]->setPlainText(text);
  journaux[x]->moveCursor (QTextCursor::Start);
  string s = "|"+ readFileIntoString("storage/date.txt");
QString qstr = QString::fromStdString(s);

QString currentdateqs = journaux[x]->toPlainText();

std::string currentdate = currentdateqs.toUtf8().constData();

bool found = false;
for (int i =0; i < 7; i++) {
    if (currentdate[i+1] != s[i+1]) {
        found = true;

        break;
    }
}
if (found) {
journaux[x]->insertPlainText (qstr + "\n");;
}  file.close();
  
}
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
  int nbjournaux = 2;
  QPlainTextEdit* journaux[nbjournaux]={ui->mathsquicktext, ui->physiquequicktext};
  QString journauxnames[nbjournaux]={"mathsquicktext.txt","physiquequicktext.txt"};
  
  for (int x = 0; x < nbjournaux;x++){
    QString fileName = "storage/" + journauxnames[x];
  QFile file(fileName);
  if (!file.open(QFile::WriteOnly | QFile::Text)){
    QMessageBox::warning(this,"warning","Cannot save file : " + file.errorString());
    return;
  }
  QTextStream out(&file);
  QString text = (journaux[x])->toPlainText();
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
void MainWindow::TextEditChanged(){
 QString tabName =  (ui->TabWidget)->tabText((ui->TabWidget)->currentIndex());
 if (tabName.at(0) != "*")
   (ui->TabWidget)->setTabText((ui->TabWidget)->currentIndex(), "*"+tabName);
}


void MainWindow::on_action_Exit_triggered(){
  QCoreApplication::exit();
}

