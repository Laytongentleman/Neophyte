/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNF;
    QAction *actionCF;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *center;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pagemaths;
    QGridLayout *gridLayout_3;
    QTabWidget *TabWidget_2;
    QWidget *tabmain;
    QDial *Mastery;
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_3;
    QLabel *label_5;
    QWidget *tab_4;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *tab_3;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_5;
    QWidget *pagephysique;
    QGridLayout *gridLayout_8;
    QTabWidget *TabWidget_4;
    QWidget *tabmain_3;
    QDial *Mastery_3;
    QLabel *label_11;
    QListWidget *listWidget_3;
    QLabel *label_12;
    QSlider *verticalSlider_3;
    QSlider *horizontalSlider_3;
    QLabel *label_13;
    QLabel *label_14;
    QPlainTextEdit *plainTextEdit_7;
    QLabel *label_15;
    QWidget *tab_9;
    QPlainTextEdit *plainTextEdit_8;
    QWidget *tab_10;
    QPlainTextEdit *plainTextEdit_9;
    QWidget *tab_11;
    QWidget *pageinfo;
    QGridLayout *gridLayout_7;
    QTabWidget *TabWidget_3;
    QWidget *tabmain_2;
    QDial *Mastery_2;
    QLabel *label_6;
    QListWidget *listWidget_2;
    QLabel *label_7;
    QSlider *verticalSlider_2;
    QSlider *horizontalSlider_2;
    QLabel *label_8;
    QLabel *label_9;
    QPlainTextEdit *plainTextEdit_4;
    QLabel *label_10;
    QWidget *tab_6;
    QPlainTextEdit *plainTextEdit_5;
    QWidget *tab_7;
    QPlainTextEdit *plainTextEdit_6;
    QWidget *tab_8;
    QWidget *pagetuto;
    QGridLayout *gridLayout_6;
    QTabWidget *TabWidget;
    QWidget *tab_2;
    QWidget *tab;
    QWidget *mainbody;
    QWidget *leftbody;
    QGridLayout *gridLayout_4;
    QWidget *leftmenu;
    QGridLayout *gridLayout_5;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *mathsbutton;
    QPushButton *physiquebutton;
    QPushButton *infobutton;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuIns_rez_une_quote_ici;
    QMenu *menuPr_pa;
    QMenu *menuView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1090, 604);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"text-align:lcenter;\n"
"}\n"
"\n"
"\n"
"#frame{\n"
"	border:none;\n"
"  padding: 0;\n"
"	margin: 0;\n"
"}\n"
"#frame_2{\n"
"	border:none;\n"
"  padding: 0;\n"
"	margin: 0;\n"
"}\n"
"#frame_3{\n"
"	border:none;\n"
"  padding: 0;\n"
"	margin: 0;\n"
"}"));
        actionNF = new QAction(MainWindow);
        actionNF->setObjectName(QString::fromUtf8("actionNF"));
        actionNF->setCheckable(false);
        actionNF->setChecked(false);
        actionNF->setShortcutVisibleInContextMenu(false);
        actionCF = new QAction(MainWindow);
        actionCF->setObjectName(QString::fromUtf8("actionCF"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        center = new QWidget(centralwidget);
        center->setObjectName(QString::fromUtf8("center"));
        center->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(center);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(center);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pagemaths = new QWidget();
        pagemaths->setObjectName(QString::fromUtf8("pagemaths"));
        gridLayout_3 = new QGridLayout(pagemaths);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        TabWidget_2 = new QTabWidget(pagemaths);
        TabWidget_2->setObjectName(QString::fromUtf8("TabWidget_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Clean"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        TabWidget_2->setFont(font);
        tabmain = new QWidget();
        tabmain->setObjectName(QString::fromUtf8("tabmain"));
        Mastery = new QDial(tabmain);
        Mastery->setObjectName(QString::fromUtf8("Mastery"));
        Mastery->setGeometry(QRect(590, 0, 221, 161));
        Mastery->setMaximum(100);
        Mastery->setValue(3);
        Mastery->setWrapping(false);
        label = new QLabel(tabmain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(650, 50, 91, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("ClearlyU"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(tabmain);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(540, 230, 256, 192));
        label_2 = new QLabel(tabmain);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 190, 111, 121));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setPixmap(QPixmap(QString::fromUtf8("res/ronflex.png")));
        label_2->setScaledContents(true);
        label_2->setIndent(-1);
        verticalSlider = new QSlider(tabmain);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(180, 20, 20, 160));
        QFont font2;
        font2.setItalic(true);
        verticalSlider->setFont(font2);
        verticalSlider->setValue(5);
        verticalSlider->setOrientation(Qt::Vertical);
        horizontalSlider = new QSlider(tabmain);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 450, 401, 20));
        horizontalSlider->setValue(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(tabmain);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 201, 41));
        label_3->setFont(font);
        label_4 = new QLabel(tabmain);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 420, 81, 20));
        plainTextEdit_3 = new QPlainTextEdit(tabmain);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(250, 20, 271, 231));
        label_5 = new QLabel(tabmain);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(630, 190, 57, 18));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Clean"));
        font3.setPointSize(12);
        label_5->setFont(font3);
        TabWidget_2->addTab(tabmain, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        plainTextEdit_2 = new QPlainTextEdit(tab_4);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 10, 601, 451));
        TabWidget_2->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        plainTextEdit = new QPlainTextEdit(tab_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(40, 50, 611, 371));
        TabWidget_2->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        TabWidget_2->addTab(tab_5, QString());

        gridLayout_3->addWidget(TabWidget_2, 0, 0, 1, 1);

        stackedWidget->addWidget(pagemaths);
        pagephysique = new QWidget();
        pagephysique->setObjectName(QString::fromUtf8("pagephysique"));
        gridLayout_8 = new QGridLayout(pagephysique);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        TabWidget_4 = new QTabWidget(pagephysique);
        TabWidget_4->setObjectName(QString::fromUtf8("TabWidget_4"));
        TabWidget_4->setFont(font);
        tabmain_3 = new QWidget();
        tabmain_3->setObjectName(QString::fromUtf8("tabmain_3"));
        Mastery_3 = new QDial(tabmain_3);
        Mastery_3->setObjectName(QString::fromUtf8("Mastery_3"));
        Mastery_3->setGeometry(QRect(580, 0, 221, 161));
        Mastery_3->setMaximum(100);
        Mastery_3->setValue(8);
        Mastery_3->setWrapping(false);
        label_11 = new QLabel(tabmain_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(650, 50, 91, 61));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);
        listWidget_3 = new QListWidget(tabmain_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(540, 230, 256, 192));
        label_12 = new QLabel(tabmain_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(-10, 80, 141, 131));
        label_12->setMaximumSize(QSize(16777215, 16777215));
        label_12->setPixmap(QPixmap(QString::fromUtf8("res/prism.png")));
        label_12->setScaledContents(true);
        label_12->setIndent(-1);
        verticalSlider_3 = new QSlider(tabmain_3);
        verticalSlider_3->setObjectName(QString::fromUtf8("verticalSlider_3"));
        verticalSlider_3->setGeometry(QRect(190, 50, 20, 160));
        verticalSlider_3->setFont(font2);
        verticalSlider_3->setValue(5);
        verticalSlider_3->setOrientation(Qt::Vertical);
        horizontalSlider_3 = new QSlider(tabmain_3);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(0, 450, 401, 20));
        horizontalSlider_3->setValue(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(tabmain_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 30, 201, 41));
        label_13->setFont(font);
        label_14 = new QLabel(tabmain_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(170, 420, 81, 20));
        plainTextEdit_7 = new QPlainTextEdit(tabmain_3);
        plainTextEdit_7->setObjectName(QString::fromUtf8("plainTextEdit_7"));
        plainTextEdit_7->setGeometry(QRect(250, 20, 271, 231));
        label_15 = new QLabel(tabmain_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(630, 190, 57, 18));
        label_15->setFont(font3);
        TabWidget_4->addTab(tabmain_3, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        plainTextEdit_8 = new QPlainTextEdit(tab_9);
        plainTextEdit_8->setObjectName(QString::fromUtf8("plainTextEdit_8"));
        plainTextEdit_8->setGeometry(QRect(0, 10, 601, 451));
        TabWidget_4->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        plainTextEdit_9 = new QPlainTextEdit(tab_10);
        plainTextEdit_9->setObjectName(QString::fromUtf8("plainTextEdit_9"));
        plainTextEdit_9->setGeometry(QRect(40, 50, 611, 371));
        TabWidget_4->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        TabWidget_4->addTab(tab_11, QString());

        gridLayout_8->addWidget(TabWidget_4, 0, 0, 1, 1);

        stackedWidget->addWidget(pagephysique);
        pageinfo = new QWidget();
        pageinfo->setObjectName(QString::fromUtf8("pageinfo"));
        gridLayout_7 = new QGridLayout(pageinfo);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        TabWidget_3 = new QTabWidget(pageinfo);
        TabWidget_3->setObjectName(QString::fromUtf8("TabWidget_3"));
        TabWidget_3->setFont(font);
        tabmain_2 = new QWidget();
        tabmain_2->setObjectName(QString::fromUtf8("tabmain_2"));
        Mastery_2 = new QDial(tabmain_2);
        Mastery_2->setObjectName(QString::fromUtf8("Mastery_2"));
        Mastery_2->setGeometry(QRect(580, 0, 221, 161));
        Mastery_2->setMaximum(100);
        Mastery_2->setValue(8);
        Mastery_2->setWrapping(false);
        label_6 = new QLabel(tabmain_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(650, 50, 91, 61));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        listWidget_2 = new QListWidget(tabmain_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(540, 230, 256, 192));
        label_7 = new QLabel(tabmain_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 290, 111, 121));
        label_7->setMaximumSize(QSize(16777215, 16777215));
        label_7->setPixmap(QPixmap(QString::fromUtf8("res/graph.png")));
        label_7->setScaledContents(true);
        label_7->setIndent(-1);
        verticalSlider_2 = new QSlider(tabmain_2);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(180, 20, 20, 160));
        verticalSlider_2->setFont(font2);
        verticalSlider_2->setValue(5);
        verticalSlider_2->setOrientation(Qt::Vertical);
        horizontalSlider_2 = new QSlider(tabmain_2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 450, 401, 20));
        horizontalSlider_2->setValue(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(tabmain_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 30, 201, 41));
        label_8->setFont(font);
        label_9 = new QLabel(tabmain_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 420, 81, 20));
        plainTextEdit_4 = new QPlainTextEdit(tabmain_2);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(250, 20, 271, 231));
        label_10 = new QLabel(tabmain_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(630, 190, 57, 18));
        label_10->setFont(font3);
        TabWidget_3->addTab(tabmain_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        plainTextEdit_5 = new QPlainTextEdit(tab_6);
        plainTextEdit_5->setObjectName(QString::fromUtf8("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(0, 10, 601, 451));
        TabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        plainTextEdit_6 = new QPlainTextEdit(tab_7);
        plainTextEdit_6->setObjectName(QString::fromUtf8("plainTextEdit_6"));
        plainTextEdit_6->setGeometry(QRect(40, 50, 611, 371));
        TabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        TabWidget_3->addTab(tab_8, QString());

        gridLayout_7->addWidget(TabWidget_3, 0, 0, 1, 1);

        stackedWidget->addWidget(pageinfo);
        pagetuto = new QWidget();
        pagetuto->setObjectName(QString::fromUtf8("pagetuto"));
        gridLayout_6 = new QGridLayout(pagetuto);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        TabWidget = new QTabWidget(pagetuto);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        TabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        TabWidget->addTab(tab, QString());

        gridLayout_6->addWidget(TabWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(pagetuto);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(center, 0, 1, 1, 1);

        mainbody = new QWidget(centralwidget);
        mainbody->setObjectName(QString::fromUtf8("mainbody"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainbody->sizePolicy().hasHeightForWidth());
        mainbody->setSizePolicy(sizePolicy);
        mainbody->setMaximumSize(QSize(210, 16777215));
        mainbody->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 137, 255);"));

        gridLayout_2->addWidget(mainbody, 0, 2, 1, 1);

        leftbody = new QWidget(centralwidget);
        leftbody->setObjectName(QString::fromUtf8("leftbody"));
        sizePolicy.setHeightForWidth(leftbody->sizePolicy().hasHeightForWidth());
        leftbody->setSizePolicy(sizePolicy);
        leftbody->setMaximumSize(QSize(210, 16777215));
        gridLayout_4 = new QGridLayout(leftbody);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        leftmenu = new QWidget(leftbody);
        leftmenu->setObjectName(QString::fromUtf8("leftmenu"));
        gridLayout_5 = new QGridLayout(leftmenu);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(leftmenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("res/triballs.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("res/ballshine.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_5->addWidget(frame, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);

        frame_2 = new QFrame(leftmenu);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mathsbutton = new QPushButton(frame_2);
        mathsbutton->setObjectName(QString::fromUtf8("mathsbutton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("res/maril.png"), QSize(), QIcon::Normal, QIcon::Off);
        mathsbutton->setIcon(icon2);
        mathsbutton->setIconSize(QSize(65, 65));

        verticalLayout_3->addWidget(mathsbutton);

        physiquebutton = new QPushButton(frame_2);
        physiquebutton->setObjectName(QString::fromUtf8("physiquebutton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("res/tetarte.png"), QSize(), QIcon::Normal, QIcon::Off);
        physiquebutton->setIcon(icon3);
        physiquebutton->setIconSize(QSize(50, 50));

        verticalLayout_3->addWidget(physiquebutton);

        infobutton = new QPushButton(frame_2);
        infobutton->setObjectName(QString::fromUtf8("infobutton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("res/magneti.png"), QSize(), QIcon::Normal, QIcon::Off);
        infobutton->setIcon(icon4);
        infobutton->setIconSize(QSize(50, 50));

        verticalLayout_3->addWidget(infobutton);


        gridLayout_5->addWidget(frame_2, 2, 0, 1, 1);

        frame_3 = new QFrame(leftmenu);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, -1, -1);
        pushButton_7 = new QPushButton(frame_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("res/Miaouss.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon5);
        pushButton_7->setIconSize(QSize(40, 40));

        verticalLayout_4->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(frame_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("res/metamorph.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon6);
        pushButton_8->setIconSize(QSize(40, 40));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(frame_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("res/hoothoot.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon7);
        pushButton_9->setIconSize(QSize(40, 40));

        verticalLayout_4->addWidget(pushButton_9);


        gridLayout_5->addWidget(frame_3, 3, 0, 1, 1);


        gridLayout_4->addWidget(leftmenu, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(leftbody);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 1, 0, 1, 1);


        gridLayout_2->addWidget(leftbody, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1090, 30));
        menuIns_rez_une_quote_ici = new QMenu(menubar);
        menuIns_rez_une_quote_ici->setObjectName(QString::fromUtf8("menuIns_rez_une_quote_ici"));
        menuPr_pa = new QMenu(menubar);
        menuPr_pa->setObjectName(QString::fromUtf8("menuPr_pa"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuIns_rez_une_quote_ici->menuAction());
        menubar->addAction(menuPr_pa->menuAction());
        menubar->addAction(menuView->menuAction());
        menuIns_rez_une_quote_ici->addAction(actionNF);
        menuIns_rez_une_quote_ici->addAction(actionCF);

        retranslateUi(MainWindow);

        TabWidget_2->setCurrentIndex(0);
        TabWidget_4->setCurrentIndex(0);
        TabWidget_3->setCurrentIndex(0);
        TabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNF->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
#if QT_CONFIG(shortcut)
        actionNF->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCF->setText(QCoreApplication::translate("MainWindow", "Close File", nullptr));
#if QT_CONFIG(shortcut)
        actionCF->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "Total Mastery", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", " Variables al\303\251atoires ", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Probabilit\303\251s", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Produit Scalaire 25 3 ", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Dimension finie", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Current power output", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Prepa sup", nullptr));
        plainTextEdit_3->setPlainText(QCoreApplication::translate("MainWindow", "29 05 2023 : bibmaths + td + mathtraining\n"
"", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "SKILLS:", nullptr));
        TabWidget_2->setTabText(TabWidget_2->indexOf(tabmain), QCoreApplication::translate("MainWindow", "Overview", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("MainWindow", "29 05 2023", nullptr));
        TabWidget_2->setTabText(TabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "History", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "Les maths c'est pas seulement du fun", nullptr));
        TabWidget_2->setTabText(TabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Motivation", nullptr));
        TabWidget_2->setTabText(TabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Achievements", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Total Mastery", nullptr));

        const bool __sortingEnabled1 = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget_3->item(0);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Machines Thermiques", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_3->item(1);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Transition de phases", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_3->item(2);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "2nd principe", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_3->item(3);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainWindow", "1er principe", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_3->item(4);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("MainWindow", "Description de la mati\303\250re", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_3->item(5);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("MainWindow", "Formation de l'image", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_3->item(6);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("MainWindow", "Ondes", nullptr));
        listWidget_3->setSortingEnabled(__sortingEnabled1);

        label_12->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Current power output", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Prepa sup", nullptr));
        plainTextEdit_7->setPlainText(QCoreApplication::translate("MainWindow", "29 05 2023 : bibmaths + td + mathtraining\n"
"", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "SKILLS:", nullptr));
        TabWidget_4->setTabText(TabWidget_4->indexOf(tabmain_3), QCoreApplication::translate("MainWindow", "Overview", nullptr));
        plainTextEdit_8->setPlainText(QCoreApplication::translate("MainWindow", "29 05 2023", nullptr));
        TabWidget_4->setTabText(TabWidget_4->indexOf(tab_9), QCoreApplication::translate("MainWindow", "History", nullptr));
        plainTextEdit_9->setPlainText(QCoreApplication::translate("MainWindow", "Les maths c'est pas seulement du fun", nullptr));
        TabWidget_4->setTabText(TabWidget_4->indexOf(tab_10), QCoreApplication::translate("MainWindow", "Motivation", nullptr));
        TabWidget_4->setTabText(TabWidget_4->indexOf(tab_11), QCoreApplication::translate("MainWindow", "Achievements", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Total Mastery", nullptr));

        const bool __sortingEnabled2 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem11 = listWidget_2->item(0);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("MainWindow", "Graphes", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget_2->item(1);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("MainWindow", "Logique", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_2->item(2);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("MainWindow", "Backtracking", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget_2->item(3);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("MainWindow", "Complexit\303\251", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled2);

        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Current power output", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Prepa sup", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("MainWindow", "29 05 2023 : bibmaths + td + mathtraining\n"
"", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "SKILLS:", nullptr));
        TabWidget_3->setTabText(TabWidget_3->indexOf(tabmain_2), QCoreApplication::translate("MainWindow", "Overview", nullptr));
        plainTextEdit_5->setPlainText(QCoreApplication::translate("MainWindow", "29 05 2023", nullptr));
        TabWidget_3->setTabText(TabWidget_3->indexOf(tab_6), QCoreApplication::translate("MainWindow", "History", nullptr));
        plainTextEdit_6->setPlainText(QCoreApplication::translate("MainWindow", "Les maths c'est pas seulement du fun", nullptr));
        TabWidget_3->setTabText(TabWidget_3->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Motivation", nullptr));
        TabWidget_3->setTabText(TabWidget_3->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Achievements", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("MainWindow", "It's all and only numbers ~ Louis", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", " Stats", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "Attrappez les tous !!", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Pokedex", nullptr));
#if QT_CONFIG(tooltip)
        mathsbutton->setToolTip(QCoreApplication::translate("MainWindow", "Suivez moi ~ Mme Mullaert", nullptr));
#endif // QT_CONFIG(tooltip)
        mathsbutton->setText(QCoreApplication::translate("MainWindow", "Maths", nullptr));
#if QT_CONFIG(tooltip)
        physiquebutton->setToolTip(QCoreApplication::translate("MainWindow", "\342\200\234A clever person solves a problem. A wise person avoids it.\342\200\235\n"
"\342\200\225 Albert Einstein", nullptr));
#endif // QT_CONFIG(tooltip)
        physiquebutton->setText(QCoreApplication::translate("MainWindow", "Physique", nullptr));
#if QT_CONFIG(tooltip)
        infobutton->setToolTip(QCoreApplication::translate("MainWindow", "KISS: Keep it simple, stupid ", nullptr));
#endif // QT_CONFIG(tooltip)
        infobutton->setText(QCoreApplication::translate("MainWindow", "Informatique", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_7->setToolTip(QCoreApplication::translate("MainWindow", "If you only do what you can do, you'll never be better than what you are now. ~Shifu", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Anglais", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_8->setToolTip(QCoreApplication::translate("MainWindow", "Il ne d\303\251pend pas de toi d'\303\252tre riche, mais il d\303\251pend de toi d'\303\252tre heureux.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Fran\303\247ais - Philo", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_9->setToolTip(QCoreApplication::translate("MainWindow", "\342\200\236Derjenige, der sich mit Einsicht f\303\274r beschr\303\244nkt erkl\303\244rt, ist der Vollkommenheit am n\303\244chsten.\342\200\234", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Allemand", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Tutoriel", nullptr));
        menuIns_rez_une_quote_ici->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuPr_pa->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
