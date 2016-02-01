#include <iostream>
#include "individu.h"
#include "etudiant.h"

using namespace std;

void exerciseIndividu();
void exerciseEtudiant();
void exerciseEtudiantPoly();

int main(int argc, char *argv[])
{
    //exerciseIndividu();
    //exerciseEtudiant();
    exerciseEtudiantPoly();

    return 0;
}


void exerciseIndividu(){
    Individu i1;
    Individu * i2 = new Individu();
    std::cout << "Individu i1 : " << i1.getLastName() << " " << i1.getFirstName() << " a " << i1.getAge() << " ans" << std::endl;

    i2->setLastName("Faudeil");
    i2->setFirstName("Marc");
    i2->setAge(43);

    std::cout << "Individu i2 : " << i2->getLastName() << " " << i2->getFirstName() << " a " << i2->getAge() << " ans" << std::endl;

    Individu * i3 = new Individu("Watremez", "Steven", 25);
    std::cout << "Individu i3 : " << i3->getLastName() << " " << i3->getFirstName() << " a " << i3->getAge() << " ans" << std::endl;

    delete i2;
    // the pointer is delete but not erase beacause
    // the memory does'nt need the memory,
    // so put the value of the pointer to null for understand the deletion
    i2 = NULL;
    delete i3;
    i3 = NULL;
}

void exerciseEtudiant(){
    Etudiant * etudiant = new Etudiant("Roger", "Watremez", 24);
    etudiant->setEtudiantFormation(1, "CSI1");
    etudiant->setEtudiantFormation(2, "CSI2");
    etudiant->setEtudiantFormation(3, "CSI3");
    etudiant->setEtudiantFormation(4, "M1GL");
    etudiant->setEtudiantFormation(5, "M2GL");

    etudiant->afficheFormation();
    etudiant->afficheInfos();
}

void exerciseEtudiantPoly() {
    Individu * etudiant = new Etudiant("Roger", "Watremez", 24);

    etudiant->afficheInfos();
}
