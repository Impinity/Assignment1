/*
 * File:   main.cpp
 * Author: Javier <jrescobara@gmail.com> 
 *
 * Created on September 25, 2017, 3:19 PM
 */

#include <cstdlib>
#include <iostream>
#include "Weapon.h"
#include "WeaponFactory.h"

using namespace std;

/**
 * Simulates the behavior of a weapon in the presence and absence of armor, by 
 * printing its damage on standard output. 
 * @param weapon Weapon to simulate
 * @param armor Armor points
 */
void simulateWeapon(Weapon * weapon, double armor) {
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when armor is 0" << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(armor) << " when armor is " << armor << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(40) << " when armor is " << 40 << std::endl << std::endl;
}

/**
 * Simulates the behavior of a climb axe, hits multiple times to demonstrate the damage rising and armor ignored
 * lowering by printing damage to standard output
 * @param weapon Weapon to simulate
 */
void simulateClimbAxe(Weapon * weapon) {
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when no paramater hit() called (0 armor)" << std::endl;
    for (int i = 0;i  < 50; i+=5) {
        cout << weapon->getName() << " inflicts " << weapon->hit(i) << " when armor is " << i << std::endl;
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

    double armor = 25;

    //Common sword
    Weapon *weapon = WeaponFactory::getInstance()->getWeapon("sword");
    simulateWeapon(weapon, armor);
    delete(weapon);

    //Common spear
    weapon = WeaponFactory::getInstance()->getWeapon("spear");
    simulateWeapon(weapon, armor);
    delete(weapon);

    //Simple hammer
    weapon = WeaponFactory::getInstance()->getWeapon("hammer");
    simulateWeapon(weapon, armor);
    delete(weapon);

    //Crazy random sword
    weapon = WeaponFactory::getInstance()->getWeapon("crazy sword");
    simulateWeapon(weapon, armor);
    delete(weapon);

    //Climb axe
    weapon = WeaponFactory::getInstance()->getWeapon("climb axe");
    simulateClimbAxe(weapon);
    delete(weapon);

    return 0;
}

