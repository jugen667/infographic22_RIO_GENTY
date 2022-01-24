// reading CSV file
#pragma once
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <list>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QCoreApplication>
#include <QFileDialog>
#include "mainwindow.h"

/*
std::vector<std::vector<std::string>> CSVReading(){

    //vector 2DArray Container = vector of lines
    std::vector<std::vector<std::string>> container;
    std::vector<std::string> lines;
    std::ifstream fileCSV;
    std::string rows, content;
    fileCSV.open("infographic_extinction-main/extinct_animals.csv");

    while(std::getline(fileCSV, rows)){
        // clearing lines to avoid writing several times the same line
        lines.clear();

        // rows is a string but getline takes as a first arg a sstream so we have to force the string to be as a stream
        std::stringstream str(rows);
        while(std::getline(str, content, ',')){
            lines.push_back(content);
        }
        container.push_back(lines);
    }

    fileCSV.close();
    if (container[0].empty()) std::cout <<"\nc'est la merde \n" << std::endl;
    std::cout << container[0][0] << container[0][1] << container[0][2] << std::endl;
    return container;
};
*/
std::vector<std::vector<std::string>> CSVReading(std::string ABSPATH){

    //vector 2DArray Container = vector of lines
    std::vector<std::vector<std::string>> container;
    std::vector<std::string> lines;
    std::ifstream fileCSV;
    std::string rows, content;
    std::string dir = ABSPATH; dir += "/infographic_extinction-main/extinct_animals.csv";
    //std::cout << dir << std::endl;
    fileCSV.open(dir);
    //fileCSV.open("qrc:/files/infographic_extinction-main/extinct_animals.csv");

    std::getline(fileCSV, rows);
    while(std::getline(fileCSV, rows)){
        // clearing lines to avoid writing several times the same line
        lines.clear();

        // rows is a string but getline takes as a first arg a sstream so we have to force the string to be as a stream
        std::stringstream str(rows);
        while(std::getline(str, content, ',')){
            lines.push_back(content);
        }
        container.push_back(lines);
    }

    fileCSV.close();
    //if (container[0].empty()) std::cout <<"\nc'est la merde \n" << std::endl;
    //std::cout << container[0][0] << container[0][1] << container[0][2] << std::endl;
    return container;
};
