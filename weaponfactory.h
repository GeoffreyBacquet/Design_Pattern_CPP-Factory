#ifndef WEAPONFACTORY_H
#define WEAPONFACTORY_H
#include <QString>
#include <iostream>


///////////////////////////////////////
///         Classe Abstraite        ///
///                                 ///
///                                 ///
///////////////////////////////////////

class Weapon{
public:
    virtual int degat() = 0;
    virtual QString name() = 0;
};

///////////////////////////////////////
///  Classes dérivée de Weapon      ///
///     pouvant etre appelées       ///
///     par la factory              ///
///////////////////////////////////////

class One_handed : public Weapon
{
public:
    int degat() override { return 10; }
    QString name() override { return "One handed Sword"; }
};

class Two_handed : public Weapon
{
public:
    int degat() override { return 20; }
    QString name() override { return "Two handed Sword"; }
};

class Axe : public Weapon
{
    int degat() override { return 20; }
    QString name() override { return "Axe"; }
};

class Bow : public Weapon
{
    int degat() override { return 20; }
    QString name() override { return "Bow"; }
};

class Spear : public Weapon
{
    int degat() override { return 20; }
    QString name() override { return "Spear"; }
};

class Dagger : public Weapon
{
    int degat() override { return 20; }
    QString name() override { return "Dagger"; }
};

///////////////////////////////////////
///  Factory                        ///
///  Permet de créer des objets     ///
///  sans en connaitre la classe    ///
///                                 ///
///////////////////////////////////////

class WeaponFactory
{
public:
    static Weapon *newWeapon(const QString &description);
};


#endif // WEAPONFACTORY_H
