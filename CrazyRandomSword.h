//
// Created by Jean Bougeois-Cruz on 1/26/2019.
//

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoint = random in from 7-100,
 * ignores Ignores a random amount of integer armor points, ranging from to 2
 * to a third of the armor the weapon hits.)
 */


class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 1.0){ // 1.0 is temporary value as the hitpoints change on hit
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

    virtual double hit();   // Hides hit() function from Weapon.h to implement random hitPoints on hit even when armor is 0

};

#endif //CRAZYRANDOMSWORD_H
