#ifndef MOBILE_H
#define MOBILE_H
#include <iostream>
#include <string.h>

using namespace std;

class mobile
{
    private:
        string name;
        bool god;
        bool living;
        bool attackable;
        int limbs;
    public:
        mobile();
        virtual ~mobile();
        void setName(string Name){
            name = Name;
        }
        string getName(){
            return name;
        }
        void setGod(bool God){
            god = God;
        }
        bool getGod(){
            return god;
        }
        void setLiving(bool Living){
            living = living;
        }
        bool getLiving(){
            return living;
        }
        void setAttackable(bool Attackable){
            attackable = Attackable;
        }
        bool getAttackable(){
            return attackable;
        }
        void setLimbs(int Limbs){
            limbs = Limbs;
        }
        int getLimbs(){
            return limbs;
        }
};

#endif // MOBILE_H
