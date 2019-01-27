//
// Created by Jean Bougeois-Cruz on 1/26/2019.
//

#include <string>
#include <cstdlib>
#include <ctime>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a simple hammer (hitpoint = random in from 7-100,
 * ignores Ignores a random amount of integer armor points, ranging from to 2
 * to a third of the armor the weapon hits.)
 */


class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 1) // this changes in the body
    {
        srand(time(nullptr));
        hitPoints = (rand() % 94) + 7;
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif //CRAZYRANDOMSWORD_H
