//
// Created by Jean Bougeois-Cruz on 1/26/2019.
//

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage;
    // Ignores armor if less than 30
    if (armor < 30)
    {
        damage = hitPoints;
    }
    else {
        damage = hitPoints - armor;
    }

    if (damage < 0) {
        return 0;
    }
    return damage;
}