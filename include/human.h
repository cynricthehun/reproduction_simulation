#ifndef HUMAN_H
#define HUMAN_H
#include <string.h>
#include "mobile.h"

using namespace std;

class human: public mobile
{
    private:
        bool gender;
        bool infertility;
        int children_limit;
        double age;
    public:
        human();
        virtual ~human();
        void setGender(bool Gender){
            gender = Gender;
        }
        bool getGender(){
            return gender;
        }
        void setInfertilitiy(bool Infertility){
            infertility = Infertility;
        }
        bool getInfertility(){
            return infertility;
        }
        void setChildrenLimit(int ChildrenLimit){
            children_limit = ChildrenLimit;
        }
        int getChildrenLimit(){
            return children_limit;
        }
        void setAge(double Age){
            age = Age;
        }
        double getAge(){
            return age;
        }
};

#endif // HUMAN_H
