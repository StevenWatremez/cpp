#include "etudiant.h"

Etudiant::Etudiant(const string lastName, const string firstName, const int age) : Individu(lastName, firstName, age) {}
Etudiant::Etudiant(const Etudiant & e) {
    this->lastName = e.lastName;
    this->firstName = e.firstName;
    this->age = e.age;
}

void Etudiant::setEtudiantFormation(int year, string yearFormation){
    if ((year - 1 > -1) && (year - 1 < 5)) {
        this->formation[year - 1] = yearFormation;
    } else {
        std::cout << "It is not a valid year";
    }
}

void Etudiant::afficheFormation(){
    for ( int i = 0 ; i < 5 ; i++) {
        std::cout << this->formation[i] << endl;
    }
}

void Etudiant::afficheInfos() {
    std::cout << "Individu : " << getLastName() << " " << getFirstName() << " a " << getAge() << " ans" << std::endl;
}
