#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "Animal.hh"
#include "Herbivorous.hh"
#include "Carnivorous.hh"

#include "infographic_extinction-main/Specie.hh"
#include "infographic_extinction-main/CSVReader.hh"

#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <QImage>
#include <QString>
#include <QDesktopServices>
#include <QTimer>
//std::string


Herbivorous herbi("player");
Carnivorous carni("player");
//https://prograide.com/pregunta/40314/puis-je-utiliser-qt-sans-qmake-ou-qt-creator

MainWindow::MainWindow(QWidget *parent, std::string ABSPATH)
        : QMainWindow(parent), ui(new Ui::MainWindow) {

    ABSPATH1 = ABSPATH;
    //déclarations
    ui->setupUi(this);

    //fix th size of the window to avoid strange layout problems
    this->setFixedSize(768, 580);
    //set some global variables which are common to the whole process
    indexPage = 1;
    indexTime = {"all", "Unknown", "Late Pleistocene", "Early Holocene", "Holocene", "Late Holocene", "Iron Age",
                 "Roman period", "BC", "100s", "300s", "400s", "1000s", "1020s", "1200s", "1300s", "1400s", "1410s",
                 "1420s", "1500s", "1600s", "1620s", "1650s", "1660s", "1680s", "1690s", "1700s", "1730s", "1750s",
                 "1760s", "1770s", "1780s", "1790s", "1800s", "1820s", "1830s", "1840s", "1850s", "1860s", "1870s",
                 "1880s", "1890s", "1900s", "1910s", "1920s", "1930s", "1940s", "1950s", "1960s", "1970s", "1980s",
                 "1990s", "2000s", "2010s"};
    Birds = false, Mammals = false, Fish = false, Reptiles = false, Amphibians = false;
    Africa = false, Europe = false, America = false, Oceania = false, Asia = false;
    Decades = indexTime[0];

    //global sorting lists that are created just one time to avoid memory issues
    // creating the container of species
    activeListSpecie.clear();
    //temporary list used for sorting
    contSortList.clear();
    catSortList.clear();
    dateSortList.clear();

    //init
    //One of the most important function is to parse the csv in a big list ->
    readingList = CSVReading(ABSPATH);
    //init gui items.
    ui->tabWidget->setCurrentIndex(0);
    ui->lb_detail->setTextInteractionFlags(
            Qt::TextSelectableByMouse);//the text from the detail label is now selectionable
    ui->lb_indexTime->setText(QString::fromStdString(indexTime[0]));
    QString i = "/";
    i += QString::number(readingList.size() / 6);
    ui->lb_nbpage->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->lb_nbpage->setText(i);

    // game init
    ui->progressbarlife->setDisabled(true);

    //Qtimer
    connect(timer, SIGNAL(timeout()), this, SLOT(decrease_life()));

    //display the whole readinglist to start (all animals)
    updt0date();
}

//destructor of the window :)
MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::updt0date() {

    //Little code to make a list of names of the species to inject into
    //the .py script which download the images from the internet
    //it basicly create a list
    // for(int i =151; i<250; i++){std::cout <<char(34) <<"," << char(34);std::cout<< readingList[i][0];}

    //empty the text zone for the names of the animals
    ui->lb_an1->setText(QString::fromStdString(""));
    ui->lb_an2->setText(QString::fromStdString(""));
    ui->lb_an3->setText(QString::fromStdString(""));
    ui->lb_an4->setText(QString::fromStdString(""));
    ui->lb_an5->setText(QString::fromStdString(""));
    ui->lb_an6->setText(QString::fromStdString(""));

    QImage def_image;
    def_image.load(QString::fromStdString("qrc:/files/IMG/Question.png"));
    ui->AN_1->setPixmap(QPixmap::fromImage(def_image));
    ui->AN_2->setPixmap(QPixmap::fromImage(def_image));
    ui->AN_3->setPixmap(QPixmap::fromImage(def_image));
    ui->AN_4->setPixmap(QPixmap::fromImage(def_image));
    ui->AN_5->setPixmap(QPixmap::fromImage(def_image));
    ui->AN_6->setPixmap(QPixmap::fromImage(def_image));

    /*big sort part to create the active list which will be display in the gui*/
    bool contSort;
    bool catSort;
    activeListSpecie.clear();
    contSortList.clear();
    catSortList.clear();
    dateSortList.clear();
    // flag to check if there is a sorting occuring

    contSort = Europe or Africa or America or Oceania or Asia;
    catSort = Birds or Mammals or Reptiles or Amphibians or Fish;

    // continent sort (first for starting at 1 to be sure to not take the header of the csv file)
    for (size_t i = 1; i < readingList.size(); i++) {
        // if sorted only for a specified continent => send it
        if (contSort) {
            if (Africa && readingList[i][5] == "Africa") {
                contSortList.push_back(readingList[i]);
            } else if (America && (readingList[i][5] == "North America" || readingList[i][5] == "South America")) {
                contSortList.push_back(readingList[i]);
            } else if (Europe && readingList[i][5] == "Europe") {
                contSortList.push_back(readingList[i]);
            } else if (Asia && readingList[i][5] == "Asia") {
                contSortList.push_back(readingList[i]);
            } else if (Oceania && readingList[i][5] == "Oceania") {
                contSortList.push_back(readingList[i]);
            } else {
                continue;
            }
        }
            // if no sorting specified, put it anyway
        else {
            contSortList.push_back(readingList[i]);
        }
    }

    // category sorting
    for (size_t i = 0; i < contSortList.size(); i++) {
        // if sorted only for a specified category => send it
        if (catSort) {
            if (Birds && contSortList[i][6] == "Birds") {
                catSortList.push_back(contSortList[i]);
            } else if (Mammals && contSortList[i][6] == "Mammals") {
                catSortList.push_back(contSortList[i]);
            } else if (Amphibians && contSortList[i][6] == "Amphibians") {
                catSortList.push_back(contSortList[i]);
            } else if (Fish && contSortList[i][6] == "Fish") {
                catSortList.push_back(contSortList[i]);
            } else if (Reptiles && contSortList[i][6] == "Reptiles") {
                catSortList.push_back(contSortList[i]);
            } else {
                continue;
            }
        }
            // if no sorting specified, put it anyway
        else {
            catSortList.push_back(contSortList[i]);
        }
    }

    for (size_t i = 0; i < catSortList.size(); i++) {
        if (Decades == catSortList[i][3]) {
            dateSortList.push_back(catSortList[i]);
        } else if (Decades == "all") {
            dateSortList.push_back(catSortList[i]);
        }
    }
    for (size_t i = 0; i < dateSortList.size(); i++) {
        Specie x(dateSortList[i][0], dateSortList[i][1], dateSortList[i][2], dateSortList[i][3], dateSortList[i][4],
                 dateSortList[i][5], dateSortList[i][6]);
        activeListSpecie.push_back(x);
    }

    // list of species reading
    for (size_t i = 0; i < dateSortList.size(); i++) {
        Specie x(readingList[i][0], readingList[i][1], readingList[i][2], readingList[i][3], readingList[i][4],
                 readingList[i][5], readingList[i][6]);
        activeListSpecie.push_back(x);
    }

    /*update the gui with the new list of animal*/
    //set the text of the animals for the right page of the list
    std::string label = activeListSpecie[0 + (indexPage - 1) * 6].returnCommonName(), temp;
    temp.clear();
    if (label.size() > 14) {
        for (int i = 0; i < 14; i++) { temp.push_back(label[i]); }
        temp.push_back('\n');
        for (int i = 14; i < int(label.size()); i++) { temp.push_back(label[i]); }
    }
    else { temp = label; }
    ui->lb_an1->setText(QString::fromStdString(apt_names(1 + (indexPage - 1) * 6)));
    ui->lb_an2->setText(QString::fromStdString(apt_names(2 + (indexPage - 1) * 6)));
    ui->lb_an3->setText(QString::fromStdString(apt_names(3 + (indexPage - 1) * 6)));
    ui->lb_an4->setText(QString::fromStdString(apt_names(4 + (indexPage - 1) * 6)));
    ui->lb_an5->setText(QString::fromStdString(apt_names(5 + (indexPage - 1) * 6)));
    ui->lb_an6->setText(QString::fromStdString(apt_names(6 + (indexPage - 1) * 6)));

    //Update the image displayed
    std::string tempstr;
    std::string actif = activeListSpecie[1 + (indexPage - 1) * 6].returnCommonName();
    for (int i = 0; i < int(activeListSpecie[1 + (indexPage - 1) * 6].returnCommonName().size()); i++) {
        if (actif.at(i) == ' ') {
            tempstr += '_';
        } else {
            tempstr += actif.at(i);
        }
    }
    QImage myImage;
    std::string dir = ABSPATH1;
    std::cout<< dir<<std::endl;
    if (actif == "") {
        dir += "/IMG/Question.png";
    } else {
        dir += "/imageFind/simple_images/" + tempstr + "/" + tempstr + ".jpeg";
    }
    std::cout<< dir<<std::endl;
    myImage.load(QString::fromStdString(dir));
    ui->AN_1->setPixmap(QPixmap::fromImage(myImage));
    tempstr = "";
    actif = activeListSpecie[2 + (indexPage - 1) * 6].returnCommonName();
    for (int i = 0; i < int(activeListSpecie[2 + (indexPage - 1) * 6].returnCommonName().size()); i++) {
        if (actif.at(i) == ' ') { tempstr += '_'; } else { tempstr += actif.at(i); }
    }
    dir = ABSPATH1;
    dir += "/imageFind/simple_images/" + tempstr + "/" + tempstr + ".jpeg";
    myImage.load(QString::fromStdString(dir));
    ui->AN_2->setPixmap(QPixmap::fromImage(myImage));
    tempstr = "";
    actif = activeListSpecie[3 + (indexPage - 1) * 6].returnCommonName();
    for (int i = 0; i < int(activeListSpecie[3 + (indexPage - 1) * 6].returnCommonName().size()); i++) {
        if (actif.at(i) == ' ') { tempstr += '_'; } else { tempstr += actif.at(i); }
    }
    dir = ABSPATH1;
    dir += "/imageFind/simple_images/" + tempstr + "/" + tempstr + ".jpeg";
    myImage.load(QString::fromStdString(dir));
    ui->AN_3->setPixmap(QPixmap::fromImage(myImage));
    tempstr = "";
    actif = activeListSpecie[4 + (indexPage - 1) * 6].returnCommonName();
    for (int i = 0; i < int(activeListSpecie[4 + (indexPage - 1) * 6].returnCommonName().size()); i++) {
        if (actif.at(i) == ' ') { tempstr += '_'; } else { tempstr += actif.at(i); }
    }
    dir = ABSPATH1;
    dir += "/imageFind/simple_images/" + tempstr + "/" + tempstr + ".jpeg";
    myImage.load(QString::fromStdString(dir));
    ui->AN_4->setPixmap(QPixmap::fromImage(myImage));
    tempstr = "";
    actif = activeListSpecie[5 + (indexPage - 1) * 6].returnCommonName();
    for (int i = 0; i < int(activeListSpecie[5 + (indexPage - 1) * 6].returnCommonName().size()); i++) {
        if (actif.at(i) == ' ') { tempstr += '_'; } else { tempstr += actif.at(i); }
    }
    dir = ABSPATH1;
    dir += "/imageFind/simple_images/" + tempstr + "/" + tempstr + ".jpeg";
    myImage.load(QString::fromStdString(dir));
    ui->AN_5->setPixmap(QPixmap::fromImage(myImage));
    tempstr = "";
    actif = activeListSpecie[6 + (indexPage - 1) * 6].returnCommonName();
    for (int i = 0; i < int(activeListSpecie[6 + (indexPage - 1) * 6].returnCommonName().size()); i++) {
        if (actif.at(i) == ' ') { tempstr += '_'; } else { tempstr += actif.at(i); }
    }
    dir = ABSPATH1;
    dir += "/imageFind/simple_images/" + tempstr + "/" + tempstr + ".jpeg";
    myImage.load(QString::fromStdString(dir));
    ui->AN_6->setPixmap(QPixmap::fromImage(myImage));
    tempstr = "";

    //update the other components such the text of the number of pages
    QString i = "/";
    i += QString::number(activeListSpecie.size() / 12);
    ui->lb_nbpage->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->lb_nbpage->setText(i);
    ui->spinBox->setValue(indexPage);
    ui->spinBox->setMaximum(activeListSpecie.size() / 12);
    ui->lb_detail->setText("\nclick on the images of the animals on the current page to display "
                           "the details of the animal, its continent, the exact year of its extinction, its country of origin and other specificities.");
}

std::string MainWindow::apt_names(int j) {
    if (int(activeListSpecie.size()) < j) return "";
    std::string label = activeListSpecie[j].returnCommonName(), temp;
    temp.clear();
    if (label.size() > 14) {
        for (int i = 0; i < 14; i++) { temp.push_back(label[i]); }
        temp.push_back('\n');
        for (int i = 14; i < int(label.size()); i++) { temp.push_back(label[i]); }
    }
    else { temp = label; }
    return temp;
}

//change the index of the actual page from the active list of animals
//and update the label which shows the page number
void MainWindow::on_pushButton_positif_clicked() {
    if (int(activeListSpecie.size() / 12) > indexPage)indexPage++;
    updt0date();
}

void MainWindow::on_pushButton_negatif_clicked() {
    if (indexPage > 1)indexPage--;
    updt0date();
}

//Text zone for the number of pages action
void MainWindow::on_spinBox_valueChanged(int arg1) {
    if (arg1 > 1 & int(activeListSpecie.size()) / 12 > arg1) {
        indexPage = arg1;
        updt0date();
    }
}


// Detailled text depending on the image clicked
void MainWindow::on_pb_an1_clicked() {
    //Giant aye-aye,Daubentonia robusta,1000 AD,1000s,Madagascar,Africa,Mammals
    ui->lb_detail->setText(QString::fromStdString(detail_txt((indexPage - 1) * 6)));
}

void MainWindow::on_pb_an2_clicked() {
    ui->lb_detail->setText(QString::fromStdString(detail_txt((indexPage - 1) * 6 + 1)));
}

void MainWindow::on_pb_an3_clicked() {
    ui->lb_detail->setText(QString::fromStdString(detail_txt((indexPage - 1) * 6 + 2)));
}

void MainWindow::on_pb_an4_clicked() {
    ui->lb_detail->setText(QString::fromStdString(detail_txt((indexPage - 1) * 6 + 3)));
}

void MainWindow::on_pb_an5_clicked() {
    ui->lb_detail->setText(QString::fromStdString(detail_txt((indexPage - 1) * 6 + 4)));
}

void MainWindow::on_pb_an6_clicked() {
    //  initial code, synthetized with detail_txt() after, to modify the default texte more efficiently
    //QString i = QString::fromStdString("The " + activeListSpecie[(indexPage-1)*6+5].returnCommonName() + "(" + activeListSpecie[(indexPage-1)*6+5].returnScientName() + ") is an extinct "+ activeListSpecie[(indexPage-1)*6+5].returnCategory() +"\nthat was endemic in "+ activeListSpecie[(indexPage-1)*6+5].returnExtDecade() + " which is located in the "+ activeListSpecie[(indexPage-1)*6+5].returnLocation()  + " continent \n");
    //i+= QString::fromStdString("that wonderful specie lived approximately in the "+activeListSpecie[(indexPage-1)*6+5].returnExtDate() +" \nin the "+ activeListSpecie[(indexPage-1)*6+5].returnExtDecade());
    ui->lb_detail->setText(QString::fromStdString(detail_txt((indexPage - 1) * 6 + 5)));
}

std::string MainWindow::detail_txt(int i) {
    i += 1;
    std::string text = "The " + activeListSpecie[i].returnCommonName() + "(" + activeListSpecie[i].returnScientName() +
                       ") is an extinct " + activeListSpecie[i].returnCategory() + "\nthat was endemic in " +
                       activeListSpecie[i].returnExtDecade() + " which is located in the " +
                       activeListSpecie[i].returnLocation() + " continent \n";
    text += "that wonderful specie lived approximately before the " + activeListSpecie[i].returnExtDecade() +
            " \nand the precice year of his extinction is " + activeListSpecie[i].returnExtDate();

    return text;
}


// Familly species actions
void MainWindow::on_comboBox_currentIndexChanged(int index) {
    switch (index) {
        case 0  :
            Birds = false, Mammals = false, Fish = false, Reptiles = false, Amphibians = false;
            break; //optional
        case 1  :
            Birds = true;
            Mammals = false, Fish = false, Reptiles = false, Amphibians = false;
            break; //optional
        case 2  :
            Mammals = true;
            Birds = false, Fish = false, Reptiles = false, Amphibians = false;
            break; //optional
        case 3  :
            Fish = true;
            Birds = false, Mammals = false, Reptiles = false, Amphibians = false;
            break; //optional
        case 4  :
            Reptiles = true;
            Birds = false, Mammals = false, Fish = false, Amphibians = false;
            break; //optional
        case 5  :
            Amphibians = true;
            Birds = false, Mammals = false, Fish = false, Reptiles = false;
            break; //optional

        default : //Optional
            break;
    }
    indexPage = 1;
    updt0date();
}

//Sort by continents actions
void MainWindow::on_asie_clicked() {
    Asia = !Asia;
    ui->asie->setFlat(Asia);
    indexPage = 1;
    updt0date();
}

void MainWindow::on_afrique_clicked() {
    Africa = !Africa;
    ui->afrique->setFlat(Africa);
    indexPage = 1;
    updt0date();
}

void MainWindow::on_europe_clicked() {
    Europe = !Europe;
    ui->europe->setFlat(Europe);
    indexPage = 1;
    updt0date();
}

void MainWindow::on_amerique_clicked() {
    America = !America;
    ui->amerique->setFlat(America);
    indexPage = 1;
    updt0date();
}

void MainWindow::on_oceanie_clicked() {
    Oceania = !Oceania;
    ui->oceanie->setFlat(Oceania);
    indexPage = 1;
    updt0date();
}

// Reset action
void MainWindow::on_reset_clicked() {
    Birds = false, Mammals = false, Fish = false, Reptiles = false, Amphibians = false;
    Africa = false, Europe = false, America = false, Oceania = false, Asia = false;
    ui->horizontalSlider->setSliderPosition(0);
    ui->lb_indexTime->setText(QString::fromStdString(indexTime[0]));
    Decades = indexTime[0];
    indexPage = 1;
    cpt_decades = 0;
    updt0date();
    ui->comboBox->setCurrentIndex(0);
    ui->lb_detail->setText("and no, this button does not allow to revive these animals unfortunately disappeared :/");
}

// Decades change
void MainWindow::on_horizontalSlider_sliderMoved(int position) {
    cpt_decades = position;
    if (position < int(indexTime.size())) {
        ui->lb_indexTime->setText(QString::fromStdString(indexTime[position]));
        Decades = indexTime[position];
        indexPage = 1;
        updt0date();
    }
}

void MainWindow::on_pb_pos_decades_clicked() {
    if (cpt_decades < MAX_DECADES) {
        ui->horizontalSlider->setSliderPosition(cpt_decades++);
        ui->lb_indexTime->setText(QString::fromStdString(indexTime[cpt_decades]));
        Decades = indexTime[cpt_decades];
        indexPage = 1;
        updt0date();
    }
}

void MainWindow::on_pb_low_decades_clicked() {
    if (cpt_decades > 0) {
        ui->horizontalSlider->setSliderPosition(cpt_decades--);
        ui->lb_indexTime->setText(QString::fromStdString(indexTime[cpt_decades]));
        Decades = indexTime[cpt_decades];
        indexPage = 1;
        updt0date();
    }
}

void MainWindow::on_link_din_tr_clicked() {
    QString link = "https://www.linkedin.com/in/thomas-rio/";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_link_din_jg_clicked() {
    QString link = "https://www.linkedin.com/in/julien-genty-4aa9a11b4/";
    QDesktopServices::openUrl(QUrl(link));
}


//game area

void MainWindow::decrease_life() {
    if (ui->cb_animal_type->currentIndex() == 0 & carni.getLife() > 0) {
        carni.addLife(-1);
        ui->progressbarlife->setValue(carni.getLife());
    } else if (ui->cb_animal_type->currentIndex() == 1 & herbi.getLife() > 0) {
        herbi.addLife(-1);
        ui->progressbarlife->setValue(herbi.getLife());
    }
}

void MainWindow::on_pb_startgame_clicked() {
    timer->start(100);
    ui->lb_detail->setText(
            "find the right food for the right specie before it raise 0pts of life \notherwise it falls down faster \ntime is important too !");
    if (ui->cb_animal_type->currentIndex() == 0) {
        ui->progressbarlife->setValue(carni.getLife());
    } else if (ui->cb_animal_type->currentIndex() == 1) {
        ui->progressbarlife->setValue(herbi.getLife());
    }
}


void MainWindow::on_progressbarlife_valueChanged(int value) {
    QImage myImage;
    if (value == 0 && ui->cb_animal_type->currentIndex() == 0) {
        myImage.load(QString::fromStdString(":/files/IMG/croco_die.png"));
        ui->lb_Game_AN->setPixmap(QPixmap::fromImage(myImage));
    } else if (ui->cb_animal_type->currentIndex() == 0) {
        myImage.load(QString::fromStdString(":/files/IMG/croco.png"));
        ui->lb_Game_AN->setPixmap(QPixmap::fromImage(myImage));
    }
    if (value == 0 && ui->cb_animal_type->currentIndex() == 1) {
        myImage.load(QString::fromStdString(":/files/IMG/diplo_die.png"));
        ui->lb_Game_AN->setPixmap(QPixmap::fromImage(myImage));
    } else if (ui->cb_animal_type->currentIndex() == 1) {
        myImage.load(QString::fromStdString(":/files/IMG/diplo.png"));
        ui->lb_Game_AN->setPixmap(QPixmap::fromImage(myImage));
    }
}

void MainWindow::on_cb_animal_type_currentIndexChanged(int index) {
    QImage myImage;
    if (index == 0) {
        myImage.load(QString::fromStdString(":/files/IMG/croco.png"));
        ui->lb_Game_AN->setPixmap(QPixmap::fromImage(myImage));
        carni.setLife(100);
        timer->stop();
    }
    if (index == 1) {
        myImage.load(QString::fromStdString(":/files/IMG/diplo.png"));
        ui->lb_Game_AN->setPixmap(QPixmap::fromImage(myImage));
        herbi.setLife(100);
        timer->stop();
    }
}

void MainWindow::on_pb_stopgame_clicked() {
    timer->stop();
}

void MainWindow::on_pb_herb_clicked() {
    if (herbi.getLife() < 100 && timer->isActive() && ui->cb_animal_type->currentIndex() == 1) {
        herbi.addLife(5);
        ui->progressbarlife->setValue(herbi.getLife());
    } else if (ui->cb_animal_type->currentIndex() == 0 && carni.getLife() > 0) {
        carni.addLife(-10);
        ui->progressbarlife->setValue(carni.getLife());
    }
}

void MainWindow::on_pb_meat_clicked() {
    if (carni.getLife() < 100 && timer->isActive() && ui->cb_animal_type->currentIndex() == 0) {
        carni.addLife(5);
        ui->progressbarlife->setValue(carni.getLife());
    } else if (ui->cb_animal_type->currentIndex() == 1 && herbi.getLife() > 0) {
        herbi.addLife(-10);
        ui->progressbarlife->setValue(herbi.getLife());
    }
}


