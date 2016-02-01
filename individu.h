//définition de condition du préprocesseur
#ifndef INDIVIDU_H
#define INDIVIDU_H

#include <iostream> //inclusion pour entrees/sorties (cout) #include <string> //inclusion pour cout
using namespace std; //espace de nom std

class Individu //définition du nom de la classe
{
public:
    Individu();
    Individu(string lastName,string firstName,int age);
    string getLastName(){ return this->lastName;}
    string getFirstName(){ return this->firstName;}
    int getAge(){ return this->age;}
    void setLastName(string lastName) { this->lastName = lastName;}
    void setFirstName(string firstName){ this->firstName = firstName;}
    void setAge(int age){ this->age=age;}

protected:
    string lastName;
    string firstName;
    int age;
};

#endif // INDIVIDU_H
