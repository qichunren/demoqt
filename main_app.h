#ifndef MAIN_APP_H
#define MAIN_APP_H

#include <QObject>
#include <QTimer>

class MainApp : public QObject
{
    Q_OBJECT
public:
    explicit MainApp(QObject *parent = nullptr);

signals:

public slots:

    void tick_slot();

private:
    QTimer _timer;
};

#endif // MAIN_APP_H
