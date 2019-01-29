//
// Created by Jean Bougeois-Cruz on 1/28/2019.
//

#include <string>
#include "Weapon.h"

#ifndef CLIMBAXE_H
#define CLIMBAXE_H

/**
 * Defines the behavior of a climb axe ( hitpoints : start at 10 but increase by 10 each time the
 * climb axe is used. Ignores 20 armor initially but armor ignored decreases by 5 each time climb
 * axe is used.
 */


class ClimbAxe : public Weapon {

public:

    ClimbAxe() : Weapon("Climb Axe", 10.0){ // 10.0 is the starting hitpoints
        armorIgnored = 20.0;
    }

    virtual ~ClimbAxe() {};

    virtual double hit(double armor);

    virtual double hit();

private:
    double armorIgnored;
};

#endif //CLIMBAXE_H
