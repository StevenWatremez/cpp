#include "individu.h"


Individu::Individu()
{
   lastName = "Riper";
   firstName = "Joe";
   age = 33;
}

Individu::Individu(const string lastName, const string firstName, const int age)
{
    this->lastName = lastName;
    this->firstName = firstName;
    this->age = age;
}

bool Individu:: operator< (const Individu & individu) const
{
    if (this->lastName < individu.lastName) return true;
    if (this->lastName > individu.lastName) return false;

    if (this->firstName < individu.firstName) return true;
    if (this->firstName < individu.firstName) return true;

    if (this->age < individu.age) return true;

    return false;
}
