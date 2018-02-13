#include <QCoreApplication>
#include "weaponfactory.h"
#include "random.h"
#include <QVector>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<QString> weaponType {"One_handed", "Two_handed", "Axe", "Bow", "Spear", "Dagger"};
    Random RnGesus;
    auto Sword1 = WeaponFactory::newWeapon(weaponType[RnGesus.random_type(weaponType)]);
    qDebug() << "Sword1 address " << &Sword1;
    qDebug() << Sword1->name() << " deals " << Sword1->degat() << " damages";
    auto Sword2 = WeaponFactory::newWeapon(weaponType[RnGesus.random_type(weaponType)]);
    qDebug() << "Sword1 address " << &Sword2;
    qDebug() << Sword2->name() << " deals " << Sword2->degat() << " damages";
    auto Sword3 = WeaponFactory::newWeapon(weaponType[RnGesus.random_type(weaponType)]);
    qDebug() << "Sword1 address " << &Sword3;
    qDebug() << Sword3->name() << " deals " << Sword3->degat() << " damages";
    return a.exec();
}
