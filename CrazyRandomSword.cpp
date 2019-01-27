//
// Created by Jean Bougeois-Cruz on 1/26/2019.
//

#include "CrazyRandomSword.h"
#include <iostream>

double CrazyRandomSword::hit(double armor) {
    // Seed for randomness
    srand(time(NULL));

    std::cout << (rand() % 25) + 2;
    // Ignores a random number from 2 to 1/3 of armor
    double ignored = ((rand() % ((int)armor / 3) - 1) + 2);
    double damage = hitPoints - (armor - ignored);
    std::cout << "Sword hitPoints " << hitPoints << std::endl;
    std::cout << "Sword ignored " << ignored << std::endl;
    if (damage < 0) {
        return 0;
    }
    return damage;
}
