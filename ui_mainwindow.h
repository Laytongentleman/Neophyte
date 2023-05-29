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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *center;
    QGridLayout *gridLayout;
    QTabWidget *TabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menuIns_rez_une_quote_ici;
    QMenu *menuPr_pa;
    QMenu *menuView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1090, 608);
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
        pushButton_6 = new QPushButton(frame_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("res/maril.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(65, 65));

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("res/tetarte.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(50, 50));

        verticalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("res/magneti.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(50, 50));

        verticalLayout_3->addWidget(pushButton_5);


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


        gridLayout_2->addWidget(leftbody, 0, 0, 1, 1);

        center = new QWidget(centralwidget);
        center->setObjectName(QString::fromUtf8("center"));
        center->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(center);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TabWidget = new QTabWidget(center);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        TabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        TabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(TabWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(center, 0, 1, 1, 1);

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
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("MainWindow", "It's all and only numbers ~ Louis", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", " Stats", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "Attrappez les tous !!", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Pokedex", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_6->setToolTip(QCoreApplication::translate("MainWindow", "Suivez moi ~ Mme Mullaert", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Maths", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QCoreApplication::translate("MainWindow", "\342\200\234A clever person solves a problem. A wise person avoids it.\342\200\235\n"
"\342\200\225 Albert Einstein", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Physique", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("MainWindow", "KISS: Keep it simple, stupid ", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Informatique", nullptr));
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
        TabWidget->setTabText(TabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
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
