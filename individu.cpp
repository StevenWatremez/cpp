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
