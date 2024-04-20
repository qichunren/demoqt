#include <QCoreApplication>
#include <QDebug>
#include "main_app.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MainApp main_app;
    return a.exec();
}
