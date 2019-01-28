//
// Created by Jean Bougeois-Cruz on 1/28/2019.
//

#include <string>
#include "Weapon.h"

#ifndef ASSIGNMENT1_CLIMBAXE_H
#define ASSIGNMENT1_CLIMBAXE_H

/**
 * Defines the behavior of a climb axe ( hitpoints : start at 10 but increase by 10 each time the
 * climb axe is used. Ignores 20 armor initially but armor ignored decreases by 5 each time climb
 * axe is used.
 */


class ClimbAxe : public Weapon {
public:

    ClimbAxe() : Weapon("Climb Axe", 10.0){ // 10.0 is the starting hitpoints
    }

    virtual ~ClimbAxe() {};

    virtual double hit(double armor);

    virtual double hit();   //Hides hit() function from Weapon.h to implement random hitPoints on hit even when armor is 0

};

#endif //ASSIGNMENT1_CLIMBAXE_H
