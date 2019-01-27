//
// Created by Jean Bougeois-Cruz on 1/26/2019.
//

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, ignores all armor
 * points if armor is less than 30)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer",25.0)
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};
#endif // SIMPLEHAMMER_H
