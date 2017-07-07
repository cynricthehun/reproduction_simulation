#include <iostream>
#include "human.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int numberOfHumans = 0;
int randomGender;

void createChild(){

    randomGender = rand() % 2;

    human Human;

    Human.setName("Adam Son");
    Human.setGender(randomGender);
    Human.setAttackable(true);
    Human.setGod(false);
    Human.setLimbs(4);
    Human.setLiving(true);
    Human.setInfertilitiy(false);

    if (Human.getGender() == 1) {
        cout << "Male" << endl;
    } else {
        cout << "Female" << endl;
    }

    numberOfHumans++;
}

void steadyReproduction(bool humanOneGender, bool humanTwoGender, bool humanOneInfertility, bool humanTwoInfertility){
    if (humanOneGender == 1 && humanTwoGender == 0 && humanOneInfertility == 0 && humanTwoInfertility == 0){
        createChild();
    } else {
        cout << "No chance of reproduction." << endl;
    }
}

bool checkInfertility(double adamAge, double eveAge){
    if (adamAge > 55 || eveAge > 50){
        return true;
    } else {
        return false;
    }
}

int main()
{
    srand(time(0));

    human Adam;

    human Eve;

    Adam.setName("Adam");
    Adam.setGender(true);
    Adam.setAttackable(true);
    Adam.setGod(false);
    Adam.setLimbs(4);
    Adam.setLiving(true);
    Adam.setInfertilitiy(false);
    Adam.setAge(40);

    Eve.setName("Eve");
    Eve.setGender(false);
    Eve.setAttackable(true);
    Eve.setGod(false);
    Eve.setLimbs(4);
    Eve.setLiving(true);
    Eve.setInfertilitiy(false);
    Eve.setAge(45);

    cout << Adam.getName() << " and is a " << Adam.getGender() << endl;
    cout << Adam.getName() << "'s god status, " << Adam.getGod() << endl;
    cout << "His attackable status is, " << Adam.getAttackable() << endl;
    cout << Adam.getName() << " has " << Adam.getLimbs() << " limbs." << endl;

    cout << Eve.getName() << " and is a " << Eve.getGender() << endl;
    cout << Eve.getName() << "'s god status, " << Eve.getGod() << endl;
    cout << "Her attackable status is, " << Eve.getAttackable() << endl;
    cout << Eve.getName() << " has " << Eve.getLimbs() << " limbs." << endl;

    double AdamsAge = Adam.getAge();
    double EvesAge = Eve.getAge();

    for (int i = 0; i < 20; i++) {
        if (checkInfertility(Adam.getAge(), Eve.getAge()) == true){
            Adam.setInfertilitiy(true);
            Eve.setInfertilitiy(true);
        }
        steadyReproduction(Adam.getGender(), Eve.getGender(), Adam.getInfertility(), Eve.getInfertility());

        //increase adam and eves age.
        Adam.setAge(AdamsAge++);

        Eve.setAge(EvesAge++);
    }
}
