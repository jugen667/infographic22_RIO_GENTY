#pragma once

#include "infographic_extinction-main/Specie.hh"
#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QString>
#include <QTimer>
#include <QCoreApplication>
#include <vector>
#include <string.h>

#define MAX_DECADES 53
//#define ABSPATH "/Users/thomasrio/1FO/C++/PROJET/TEST"
//QString ABSPATHQS = QCoreApplication::applicationFilePath();
//std::string ABSPATH = ABSPATHQS.toStdString();

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    int indexPage;
    std::vector<std::string> indexTime;
    //pour les tests
    //std::vector<std::vector<std::string>> activeList;

    std::vector<std::vector<std::string>> readingList;

    bool Birds, Mammals, Fish, Reptiles, Amphibians;
    bool Africa, Europe, America, Oceania, Asia;
    std::string Decades = "All";
    int cpt_decades = 0;
    std::string ABSPATH1="";

    //game variable
    std::string player = "player";
    //Carnivorous Carni(player);
    //Herbivorous Herbi(player);
    QTimer *timer = new QTimer(this);
    size_t life_percent = 100;

    //temporary list used for sorting
    std::vector<std::vector<std::string>> contSortList;
    std::vector<std::vector<std::string>> catSortList;
    std::vector<std::vector<std::string>> dateSortList;

    // creating the container of species
    std::vector<Specie> activeListSpecie;

    std::string detail_txt(int i);

    std::string apt_names(int i);

    MainWindow(QWidget *parent = nullptr, std::string ABSPATH1 = 0);

    void updt0date();

    ~MainWindow();

private
    slots:

     void on_pushButton_positif_clicked();

    void on_pushButton_negatif_clicked();

    void on_pb_an1_clicked();

    void on_pb_an2_clicked();

    void on_pb_an3_clicked();

    void on_pb_an4_clicked();

    void on_pb_an5_clicked();

    void on_pb_an6_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_comboBox_currentIndexChanged(int index);

    void on_asie_clicked();

    void on_afrique_clicked();

    void on_europe_clicked();

    void on_amerique_clicked();

    void on_oceanie_clicked();

    void on_reset_clicked();

    void on_pb_pos_decades_clicked();

    void on_pb_low_decades_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_link_din_tr_clicked();

    void on_link_din_jg_clicked();

    void on_pb_meat_clicked();

    void decrease_life();

    void on_pb_startgame_clicked();

    void on_progressbarlife_valueChanged(int value);

    void on_cb_animal_type_currentIndexChanged(int index);

    void on_pb_stopgame_clicked();

    void on_pb_herb_clicked();


private:
    Ui::MainWindow *ui;
};
