//
// Created by Jean Bougeois-Cruz on 1/28/2019.
//

#include "ClimbAxe.h"

double ClimbAxe::hit(double armor) {
    double damage = hitPoints - (armor - armorIgnored);

    hitPoints += 10.0;
    if (armorIgnored != 0)
    {
        armorIgnored -= 5;
    }

    if (damage < 0) {
        return 0;
    }

    return damage;
}

double ClimbAxe::hit() {
    double damage = hitPoints;

    hitPoints += 10.0;
    if (armorIgnored != 0)
    {
        armorIgnored -= 5;
    }

    if (damage < 0) {
        return 0;
    }

    return damage;
}
