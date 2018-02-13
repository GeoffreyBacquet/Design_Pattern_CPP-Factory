#include "weaponfactory.h"

Weapon *WeaponFactory::newWeapon(const QString &description)
{
    if( description == "One_handed" )
    {
        return new One_handed;
    }
    if( description == "Two_handed" )
    {
        return new Two_handed;
    }
    if( description == "Axe" )
    {
        return new Axe;
    }
    if( description == "Bow" )
    {
        return new Bow;
    }
    if( description == "Spear" )
    {
        return new Spear;
    }
    if( description == "Dagger" )
    {
        return new Dagger;
    }
    return NULL;
}
