#ifndef POIOBJECT_H
#define POIOBJECT_H

#include <QObject>

class PoiObject : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(bool active READ active WRITE setActive NOTIFY activeChanged)
    Q_PROPERTY(int distance READ distance WRITE setDistance NOTIFY distanceChanged)

public:
    PoiObject(QObject *parent=0);
    PoiObject(const QString &name, const bool &active, const int distance, QObject *parent=0);

    QString name() const;
    void setName(const QString &name);

    bool active() const;
    void setActive(const bool &active);

    int distance() const;
    void setDistance(const int distance);

signals:
    void nameChanged();
    void activeChanged();
    void distanceChanged();

private:
    QString m_name;
    bool m_active;
    int m_distance;
};

#endif // POIOBJECT_H

