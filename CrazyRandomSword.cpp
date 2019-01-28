//
// Created by Jean Bougeois-Cruz on 1/26/2019.
//

#include "CrazyRandomSword.h"
#include <iostream>

double CrazyRandomSword::hit(double armor) {
    double ignored;
    double damage;
    // Seed for randomness
    srand(time(NULL));

    // Can't use a range between 2 and 1/3 armor if 1/3 armor is too small
    if (((int)armor/3) < 3)
        ignored = 0;
    // Ignores a random number from 2 to 1/3 of armor
    else
        ignored = ((rand() % ((int)armor / 3) - 1) + 2);
    damage = hitPoints - (armor - ignored);

    if (damage < 0) {
        return 0;
    }
    return damage;
}