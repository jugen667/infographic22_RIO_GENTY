#include "mainwindow.h"
#include <QApplication>
//@open animals22.app --args "/Users/thomasrio/1FO/C++/PROJET/TEST"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // remplacez le chemin de l'application ci dessous ↓
    std::string ABSPATH1 = "/Users/thomasrio/1FO/C++/PROJET/animals22_RIO_GENTY";
    if (argv[1] != nullptr){
        ABSPATH1 = argv[1];
    }

    MainWindow w(nullptr,ABSPATH1);
    w.setWindowTitle("Animals 22 (ThrIsNoPlanB)");
    w.show();
    return a.exec();
}
