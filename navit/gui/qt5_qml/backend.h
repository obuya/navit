#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QDebug>
#include <QQmlApplicationEngine>

#include "coord.h"

class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QObject *parent = 0);

    QString text() const;
    void showMenu(struct point* p);
    void set_navit(struct navit* nav);
    void set_engine(QQmlApplicationEngine* engine);

signals:
    void displayMenu();

public slots:
    void list_maps(int cause);
    void get_pois();

private:
    struct navit *nav;
    struct point *p;
    struct coord_geo g;
    struct pcoord c;
    QQmlApplicationEngine* engine;

};

#endif // BACKEND_H
