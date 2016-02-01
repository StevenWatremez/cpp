//définition de condition du préprocesseur
#ifndef INDIVIDU_H
#define INDIVIDU_H

#include <iostream> //inclusion pour entrees/sorties (cout) #include <string> //inclusion pour cout
using namespace std; //espace de nom std

class Individu //définition du nom de la classe
{
public:
    Individu();
    Individu(const string lastName, const string firstName, const int age);
    const string getLastName() const { return this->lastName;}
    const string getFirstName()const { return this->firstName;}
    const int getAge() const { return this->age;}
    void setLastName(const string lastName) { this->lastName = lastName;}
    void setFirstName(const string firstName){ this->firstName = firstName;}
    void setAge(const int age){ this->age=age;}

protected:
    string lastName;
    string firstName;
    int age;
};

#endif // INDIVIDU_H
