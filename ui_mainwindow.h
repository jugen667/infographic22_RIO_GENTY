/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *oceanie;
    QLabel *label_2;
    QPushButton *asie;
    QPushButton *amerique;
    QPushButton *afrique;
    QComboBox *comboBox;
    QPushButton *europe;
    QLabel *label;
    QPushButton *pb_an1;
    QPushButton *pb_an2;
    QPushButton *pb_an3;
    QPushButton *pb_an4;
    QPushButton *pb_an5;
    QPushButton *pb_an6;
    QLabel *AN_1;
    QLabel *AN_2;
    QLabel *AN_3;
    QLabel *lb_an1;
    QLabel *lb_an2;
    QLabel *lb_an3;
    QLabel *AN_4;
    QLabel *AN_5;
    QLabel *AN_6;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QLabel *lb_an4;
    QLabel *lb_an5;
    QLabel *lb_an6;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_low_decades;
    QPushButton *pb_pos_decades;
    QSpacerItem *horizontalSpacer;
    QSlider *horizontalSlider;
    QLabel *lb_indexTime;
    QSpinBox *spinBox;
    QLabel *lb_nbpage;
    QPushButton *pushButton_positif;
    QPushButton *pushButton_negatif;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *tab_4;
    QLabel *label_9;
    QLabel *lb_Game_AN;
    QScrollBar *progressbarlife;
    QPushButton *pb_meat;
    QPushButton *pb_startgame;
    QComboBox *cb_animal_type;
    QPushButton *pb_herb;
    QLabel *label_12;
    QPushButton *pb_stopgame;
    QWidget *tab_2;
    QLabel *label_10;
    QWidget *tab_3;
    QLabel *label_11;
    QPushButton *link_din_tr;
    QPushButton *link_din_jg;
    QLabel *lb_detail;
    QPushButton *reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(765, 566);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(7.000000000000000);
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(16777213, 16777215));
        centralwidget->setAutoFillBackground(false);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-10, -10, 781, 411));
        tabWidget->setMaximumSize(QSize(16777212, 16777215));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        oceanie = new QPushButton(tab);
        oceanie->setObjectName(QString::fromUtf8("oceanie"));
        oceanie->setGeometry(QRect(640, 50, 31, 41));
        oceanie->setMaximumSize(QSize(16777213, 16777215));
        oceanie->setCursor(QCursor(Qt::CrossCursor));
        oceanie->setAcceptDrops(true);
        oceanie->setToolTipDuration(1);
#if QT_CONFIG(accessibility)
        oceanie->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        oceanie->setLayoutDirection(Qt::LeftToRight);
        oceanie->setAutoFillBackground(false);
        oceanie->setFlat(true);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(640, 10, 100, 100));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(100, 100));
        label_2->setCursor(QCursor(Qt::CrossCursor));
        label_2->setMouseTracking(true);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/WORLD.png")));
        label_2->setScaledContents(true);
        asie = new QPushButton(tab);
        asie->setObjectName(QString::fromUtf8("asie"));
        asie->setGeometry(QRect(700, 20, 31, 51));
        asie->setMaximumSize(QSize(16777213, 16777215));
        asie->setCursor(QCursor(Qt::CrossCursor));
        asie->setFlat(true);
        amerique = new QPushButton(tab);
        amerique->setObjectName(QString::fromUtf8("amerique"));
        amerique->setGeometry(QRect(650, 10, 41, 31));
        amerique->setMaximumSize(QSize(16777213, 16777215));
        amerique->setCursor(QCursor(Qt::CrossCursor));
        amerique->setFlat(true);
        afrique = new QPushButton(tab);
        afrique->setObjectName(QString::fromUtf8("afrique"));
        afrique->setGeometry(QRect(670, 60, 31, 41));
        afrique->setMaximumSize(QSize(16777213, 16777215));
        afrique->setCursor(QCursor(Qt::CrossCursor));
        afrique->setFlat(true);
        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 80, 122, 41));
        europe = new QPushButton(tab);
        europe->setObjectName(QString::fromUtf8("europe"));
        europe->setGeometry(QRect(670, 30, 31, 31));
        europe->setMaximumSize(QSize(16777213, 16777215));
        europe->setCursor(QCursor(Qt::CrossCursor));
        europe->setFlat(true);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -3, 781, 391));
        label->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/BACKGROUND.png")));
        label->setScaledContents(true);
        pb_an1 = new QPushButton(tab);
        pb_an1->setObjectName(QString::fromUtf8("pb_an1"));
        pb_an1->setGeometry(QRect(310, 40, 101, 121));
        pb_an1->setCursor(QCursor(Qt::WhatsThisCursor));
        pb_an1->setCheckable(false);
        pb_an1->setFlat(true);
        pb_an2 = new QPushButton(tab);
        pb_an2->setObjectName(QString::fromUtf8("pb_an2"));
        pb_an2->setGeometry(QRect(420, 40, 101, 121));
        pb_an2->setCursor(QCursor(Qt::WhatsThisCursor));
        pb_an2->setFlat(true);
        pb_an3 = new QPushButton(tab);
        pb_an3->setObjectName(QString::fromUtf8("pb_an3"));
        pb_an3->setGeometry(QRect(530, 40, 101, 121));
        pb_an3->setCursor(QCursor(Qt::WhatsThisCursor));
        pb_an3->setFlat(true);
        pb_an4 = new QPushButton(tab);
        pb_an4->setObjectName(QString::fromUtf8("pb_an4"));
        pb_an4->setGeometry(QRect(310, 180, 101, 121));
        pb_an4->setCursor(QCursor(Qt::WhatsThisCursor));
        pb_an4->setFlat(true);
        pb_an5 = new QPushButton(tab);
        pb_an5->setObjectName(QString::fromUtf8("pb_an5"));
        pb_an5->setGeometry(QRect(420, 180, 101, 121));
        pb_an5->setCursor(QCursor(Qt::WhatsThisCursor));
        pb_an5->setFlat(true);
        pb_an6 = new QPushButton(tab);
        pb_an6->setObjectName(QString::fromUtf8("pb_an6"));
        pb_an6->setGeometry(QRect(530, 180, 101, 121));
        pb_an6->setCursor(QCursor(Qt::WhatsThisCursor));
        pb_an6->setFlat(true);
        AN_1 = new QLabel(tab);
        AN_1->setObjectName(QString::fromUtf8("AN_1"));
        AN_1->setGeometry(QRect(310, 50, 100, 100));
        AN_1->setMaximumSize(QSize(100, 100));
        AN_1->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/an-bee.png")));
        AN_1->setScaledContents(true);
        AN_2 = new QLabel(tab);
        AN_2->setObjectName(QString::fromUtf8("AN_2"));
        AN_2->setGeometry(QRect(420, 50, 100, 100));
        AN_2->setMaximumSize(QSize(100, 100));
        AN_2->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/an-cow.png")));
        AN_2->setScaledContents(true);
        AN_3 = new QLabel(tab);
        AN_3->setObjectName(QString::fromUtf8("AN_3"));
        AN_3->setGeometry(QRect(530, 50, 100, 100));
        AN_3->setMaximumSize(QSize(100, 100));
        AN_3->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/an-coc.png")));
        AN_3->setScaledContents(true);
        lb_an1 = new QLabel(tab);
        lb_an1->setObjectName(QString::fromUtf8("lb_an1"));
        lb_an1->setGeometry(QRect(300, 149, 111, 41));
        lb_an2 = new QLabel(tab);
        lb_an2->setObjectName(QString::fromUtf8("lb_an2"));
        lb_an2->setGeometry(QRect(419, 149, 101, 41));
        lb_an3 = new QLabel(tab);
        lb_an3->setObjectName(QString::fromUtf8("lb_an3"));
        lb_an3->setGeometry(QRect(533, 149, 101, 41));
        AN_4 = new QLabel(tab);
        AN_4->setObjectName(QString::fromUtf8("AN_4"));
        AN_4->setGeometry(QRect(310, 190, 100, 100));
        AN_4->setMaximumSize(QSize(100, 100));
        AN_4->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/an-dog.png")));
        AN_4->setScaledContents(true);
        AN_5 = new QLabel(tab);
        AN_5->setObjectName(QString::fromUtf8("AN_5"));
        AN_5->setGeometry(QRect(420, 190, 100, 100));
        AN_5->setMaximumSize(QSize(100, 100));
        AN_5->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/an-rat.png")));
        AN_5->setScaledContents(true);
        AN_6 = new QLabel(tab);
        AN_6->setObjectName(QString::fromUtf8("AN_6"));
        AN_6->setGeometry(QRect(530, 190, 100, 100));
        AN_6->setMaximumSize(QSize(100, 100));
        AN_6->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/an-wolf.png")));
        AN_6->setScaledContents(true);
        checkBox_2 = new QCheckBox(tab);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(670, 160, 69, 20));
        checkBox_2->setChecked(true);
        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(670, 200, 67, 20));
        checkBox->setChecked(true);
        lb_an4 = new QLabel(tab);
        lb_an4->setObjectName(QString::fromUtf8("lb_an4"));
        lb_an4->setGeometry(QRect(310, 290, 101, 41));
        lb_an5 = new QLabel(tab);
        lb_an5->setObjectName(QString::fromUtf8("lb_an5"));
        lb_an5->setGeometry(QRect(420, 289, 101, 41));
        lb_an6 = new QLabel(tab);
        lb_an6->setObjectName(QString::fromUtf8("lb_an6"));
        lb_an6->setGeometry(QRect(530, 289, 110, 41));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 290, 261, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        pb_low_decades = new QPushButton(gridLayoutWidget);
        pb_low_decades->setObjectName(QString::fromUtf8("pb_low_decades"));
        pb_low_decades->setMaximumSize(QSize(20, 16777215));

        gridLayout->addWidget(pb_low_decades, 1, 1, 1, 1);

        pb_pos_decades = new QPushButton(gridLayoutWidget);
        pb_pos_decades->setObjectName(QString::fromUtf8("pb_pos_decades"));
        pb_pos_decades->setMaximumSize(QSize(20, 70));

        gridLayout->addWidget(pb_pos_decades, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSlider = new QSlider(gridLayoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::SplitHCursor));
        horizontalSlider->setMaximum(53);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 0, 1, 4);

        lb_indexTime = new QLabel(gridLayoutWidget);
        lb_indexTime->setObjectName(QString::fromUtf8("lb_indexTime"));
        lb_indexTime->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(lb_indexTime, 0, 4, 1, 1);

        spinBox = new QSpinBox(tab);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(430, 343, 41, 21));
        spinBox->setFrame(true);
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMinimum(1);
        lb_nbpage = new QLabel(tab);
        lb_nbpage->setObjectName(QString::fromUtf8("lb_nbpage"));
        lb_nbpage->setGeometry(QRect(460, 343, 61, 20));
        lb_nbpage->setMinimumSize(QSize(50, 0));
        lb_nbpage->setMaximumSize(QSize(100, 16777213));
        lb_nbpage->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextEditable);
        pushButton_positif = new QPushButton(tab);
        pushButton_positif->setObjectName(QString::fromUtf8("pushButton_positif"));
        pushButton_positif->setGeometry(QRect(530, 338, 80, 32));
        pushButton_positif->setMinimumSize(QSize(50, 0));
        pushButton_positif->setMaximumSize(QSize(100, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/IMG/PAG_DROITE.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_positif->setIcon(icon1);
        pushButton_positif->setIconSize(QSize(30, 16));
        pushButton_positif->setCheckable(false);
        pushButton_negatif = new QPushButton(tab);
        pushButton_negatif->setObjectName(QString::fromUtf8("pushButton_negatif"));
        pushButton_negatif->setGeometry(QRect(330, 338, 80, 32));
        pushButton_negatif->setMinimumSize(QSize(50, 0));
        pushButton_negatif->setMaximumSize(QSize(100, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/IMG/PAG_GAUCHE.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_negatif->setIcon(icon2);
        pushButton_negatif->setIconSize(QSize(30, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 40, 121, 121));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/fond_img.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 40, 121, 121));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/fond_img.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(520, 40, 121, 121));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/fond_img.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 180, 121, 121));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/fond_img.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(410, 180, 121, 121));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/fond_img.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(520, 180, 121, 121));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/fond_img.png")));
        label_8->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        label->raise();
        label_2->raise();
        comboBox->raise();
        europe->raise();
        afrique->raise();
        amerique->raise();
        asie->raise();
        oceanie->raise();
        AN_1->raise();
        AN_2->raise();
        AN_3->raise();
        AN_4->raise();
        AN_5->raise();
        AN_6->raise();
        checkBox_2->raise();
        checkBox->raise();
        gridLayoutWidget->raise();
        spinBox->raise();
        lb_nbpage->raise();
        pushButton_positif->raise();
        pushButton_negatif->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        lb_an2->raise();
        lb_an3->raise();
        lb_an6->raise();
        lb_an1->raise();
        lb_an4->raise();
        lb_an5->raise();
        pb_an1->raise();
        pb_an2->raise();
        pb_an3->raise();
        pb_an4->raise();
        pb_an5->raise();
        pb_an6->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, -3, 781, 391));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/Game_bc.png")));
        label_9->setScaledContents(true);
        lb_Game_AN = new QLabel(tab_4);
        lb_Game_AN->setObjectName(QString::fromUtf8("lb_Game_AN"));
        lb_Game_AN->setGeometry(QRect(190, 220, 100, 100));
        lb_Game_AN->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/croco.png")));
        lb_Game_AN->setScaledContents(true);
        progressbarlife = new QScrollBar(tab_4);
        progressbarlife->setObjectName(QString::fromUtf8("progressbarlife"));
        progressbarlife->setGeometry(QRect(160, 330, 161, 16));
        progressbarlife->setMouseTracking(true);
        progressbarlife->setSliderPosition(0);
        progressbarlife->setTracking(true);
        progressbarlife->setOrientation(Qt::Horizontal);
        pb_meat = new QPushButton(tab_4);
        pb_meat->setObjectName(QString::fromUtf8("pb_meat"));
        pb_meat->setGeometry(QRect(460, 270, 100, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/IMG/bouffe_carni.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_meat->setIcon(icon3);
        pb_startgame = new QPushButton(tab_4);
        pb_startgame->setObjectName(QString::fromUtf8("pb_startgame"));
        pb_startgame->setGeometry(QRect(460, 220, 100, 32));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/IMG/EARTH.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_startgame->setIcon(icon4);
        cb_animal_type = new QComboBox(tab_4);
        cb_animal_type->addItem(QString());
        cb_animal_type->addItem(QString());
        cb_animal_type->setObjectName(QString::fromUtf8("cb_animal_type"));
        cb_animal_type->setGeometry(QRect(50, 190, 121, 32));
        pb_herb = new QPushButton(tab_4);
        pb_herb->setObjectName(QString::fromUtf8("pb_herb"));
        pb_herb->setGeometry(QRect(590, 270, 100, 32));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/IMG/bouffe_herbi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_herb->setIcon(icon5);
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(110, 330, 58, 16));
        pb_stopgame = new QPushButton(tab_4);
        pb_stopgame->setObjectName(QString::fromUtf8("pb_stopgame"));
        pb_stopgame->setGeometry(QRect(590, 220, 100, 32));
        pb_stopgame->setIcon(icon4);
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, -3, 781, 391));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/More_info.png")));
        label_10->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, -3, 781, 391));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/files/IMG/About_page.png")));
        label_11->setScaledContents(true);
        link_din_tr = new QPushButton(tab_3);
        link_din_tr->setObjectName(QString::fromUtf8("link_din_tr"));
        link_din_tr->setGeometry(QRect(580, 280, 151, 32));
        link_din_jg = new QPushButton(tab_3);
        link_din_jg->setObjectName(QString::fromUtf8("link_din_jg"));
        link_din_jg->setGeometry(QRect(580, 320, 151, 32));
        tabWidget->addTab(tab_3, QString());
        lb_detail = new QLabel(centralwidget);
        lb_detail->setObjectName(QString::fromUtf8("lb_detail"));
        lb_detail->setGeometry(QRect(50, 420, 611, 91));
        lb_detail->setMouseTracking(true);
        lb_detail->setTabletTracking(true);
        lb_detail->setWordWrap(true);
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(680, 450, 51, 32));
        reset->setCursor(QCursor(Qt::ForbiddenCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 765, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(checkBox, &QCheckBox::toggled, lb_an3, &QLabel::setVisible);
        QObject::connect(checkBox, &QCheckBox::toggled, lb_an2, &QLabel::setVisible);
        QObject::connect(checkBox, &QCheckBox::toggled, lb_an1, &QLabel::setVisible);
        QObject::connect(checkBox_2, &QCheckBox::toggled, AN_3, &QLabel::setVisible);
        QObject::connect(checkBox_2, &QCheckBox::toggled, AN_2, &QLabel::setVisible);
        QObject::connect(checkBox_2, &QCheckBox::toggled, AN_1, &QLabel::setVisible);
        QObject::connect(checkBox_2, &QCheckBox::toggled, AN_6, &QLabel::setVisible);
        QObject::connect(checkBox_2, &QCheckBox::toggled, AN_5, &QLabel::setVisible);
        QObject::connect(checkBox_2, &QCheckBox::toggled, AN_4, &QLabel::setVisible);
        QObject::connect(checkBox, &QCheckBox::toggled, lb_an4, &QLabel::setVisible);
        QObject::connect(checkBox, &QCheckBox::toggled, lb_an5, &QLabel::setVisible);
        QObject::connect(checkBox, &QCheckBox::toggled, lb_an6, &QLabel::setVisible);

        tabWidget->setCurrentIndex(0);
        oceanie->setDefault(false);
        asie->setDefault(false);
        amerique->setDefault(false);
        afrique->setDefault(false);
        europe->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        oceanie->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        oceanie->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        oceanie->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        oceanie->setText(QString());
        label_2->setText(QString());
        asie->setText(QString());
        amerique->setText(QString());
        afrique->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "all", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Birds", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Mammals", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Fish", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Reptiles", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Amphibians", nullptr));

        europe->setText(QString());
        label->setText(QString());
        pb_an1->setText(QString());
        pb_an2->setText(QString());
        pb_an3->setText(QString());
        pb_an4->setText(QString());
        pb_an5->setText(QString());
        pb_an6->setText(QString());
        AN_1->setText(QString());
        AN_2->setText(QString());
        AN_3->setText(QString());
        lb_an1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">AN</p></body></html>", nullptr));
        lb_an2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">AN</p></body></html>", nullptr));
        lb_an3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">AN</p></body></html>", nullptr));
        AN_4->setText(QString());
        AN_5->setText(QString());
        AN_6->setText(QString());
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Images", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Names", nullptr));
        lb_an4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">AN</p></body></html>", nullptr));
        lb_an5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">AN</p></body></html>", nullptr));
        lb_an6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">AN</p></body></html>", nullptr));
        pb_low_decades->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pb_pos_decades->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        lb_indexTime->setText(QString());
        lb_nbpage->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">/5</p></body></html>", nullptr));
        pushButton_positif->setText(QString());
        pushButton_negatif->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Diagram", nullptr));
        label_9->setText(QString());
        lb_Game_AN->setText(QString());
        pb_meat->setText(QCoreApplication::translate("MainWindow", "meat", nullptr));
        pb_startgame->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        cb_animal_type->setItemText(0, QCoreApplication::translate("MainWindow", "carnivorous", nullptr));
        cb_animal_type->setItemText(1, QCoreApplication::translate("MainWindow", "herbivorous", nullptr));

        pb_herb->setText(QCoreApplication::translate("MainWindow", "herb", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Life bar", nullptr));
        pb_stopgame->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Game", nullptr));
        label_10->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "More info", nullptr));
        label_11->setText(QString());
        link_din_tr->setText(QCoreApplication::translate("MainWindow", "Linkedin Thomas Rio", nullptr));
        link_din_jg->setText(QCoreApplication::translate("MainWindow", "Linkedin Julien Genty", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "About", nullptr));
        lb_detail->setText(QString());
        reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
