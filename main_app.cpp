#include "main_app.h"
#include <QDebug>

MainApp::MainApp(QObject *parent) : QObject(parent)
{
    connect(&_timer, SIGNAL(timeout()), this, SLOT(tick_slot()));

    _timer.start(1000);
}

void MainApp::tick_slot() {
    qDebug()  << "tick slot";
}
