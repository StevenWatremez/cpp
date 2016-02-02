#include <iostream>
#include "individu.h"
#include "etudiant.h"
#include <vector>

using namespace std;

/********************************************************************************************************
* METHODS DECLARATIONS
********************************************************************************************************/
/*
* TP1
*/
void exerciseIndividu();
void exerciseEtudiant();
void exerciseEtudiantPoly();
void pointerExercise();
void copyConstructorExercise();

/*
* TP2
*/
void methodPointerParam();
void vectorMethod();
void surchargeOperateur();

/********************************************************************************************************
* MAIN
********************************************************************************************************/
int main(int argc, char *argv[])
{
    // TP1
    //exerciseIndividu();
    //exerciseEtudiant();
    //exerciseEtudiantPoly();
    //pointerExercise();
    //copyConstructorExercise();

    // TP2
    //methodPointerParam();
    //vectorMethod();
    surchargeOperateur();

    return 0;
}


/********************************************************************************************************
* TP1 - BASES DU C++ - METHODS DEFINITIONS
********************************************************************************************************/
void exerciseIndividu(){
    Individu i1;
    Individu * i2 = new Individu();
    std::cout << "Individu i1 : " << i1.getLastName() << " " << i1.getFirstName() << " a " << i1.getAge() << " ans" << std::endl;

    //i2->setLastName("Faudeil");
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

void pointerExercise(){
    // #1
    Individu * individu = new Individu("Steven", "Watremez", 24);
    Individu * petitNouveau = individu;

    petitNouveau->setAge(100);
    petitNouveau->setFirstName("Roger");
    //petitNouveau->setLastName("Roger");

    // the reference about the invidu change when you change petitNouveau
    std::cout << "Individu individu : " << individu->getLastName() << " " << individu->getFirstName() << " a " << individu->getAge() << " ans" << std::endl;

    // #2 It not now a pointer
    Individu petitpetitNouveau = *individu;

    // you use so the . to access to the method
    std::cout << "Individu petitpetitNouveau : " << petitpetitNouveau.getLastName() << " " << petitpetitNouveau.getFirstName() << " a " << petitpetitNouveau.getAge() << " ans" << std::endl;

    // #3
    Individu is1("Chuck","Norris",53);

    // print is1
    std::cout << "Individu is1 : " << is1.getLastName() << " " << is1.getFirstName() << " a " << is1.getAge() << " ans" << std::endl;

    Individu * is2 = &is1;

    // print is2
    std::cout << "Individu is2 : " << is2->getLastName() << " " << is2->getFirstName() << " a " << is2->getAge() << " ans" << std::endl;

    // change value of is1
    //is1.setLastName("Jean");
    is1.setFirstName("Tutier");
    is1.setAge(40);

    // print is1
    std::cout << "Individu is1 changement 1 : " << is1.getLastName() << " " << is1.getFirstName() << " a " << is1.getAge() << " ans" << std::endl;

    // change value of is2
    is2->setFirstName("Trade");
    is2->setFirstName("Soap");
    is2->setAge(90);

    // print is1 and is2 after changement
    std::cout << "Individu is1 changement 2 : " << is1.getLastName() << " " << is1.getFirstName() << " a " << is1.getAge() << " ans" << std::endl;
    std::cout << "Individu is2 changement : " << is2->getLastName() << " " << is2->getFirstName() << " a " << is2->getAge() << " ans" << std::endl;
}

void copyConstructorExercise(){
   Etudiant e1("Chuck", "Norris", 53);
   Etudiant e2 = e1; // appel du constructeur de copie
   Etudiant e3(e1); // appel du constructeur de copie

   // print e1, e2 et e3
   e1.afficheInfos();
   e1.afficheFormation();
   e2.afficheInfos();
   e2.afficheFormation();
   e3.afficheInfos();
   e3.afficheInfos();

}

/********************************************************************************************************
* TP2 - BASES DU C++ - METHODS DEFINITIONS
********************************************************************************************************/

/*
 * polymorphisme paramétrique
*/
void methodPointerParam() {
    Individu * i1 = new Etudiant("Roger", "Roger", 40);

    string name = "Norris";

    // passage de paramètre par copie : name
    //i1->setLastName(name);

    // passage de paramètre par adresse : &name
    //i1->setLastName(&name);

    // passage de paramètre par reference : name or &name
    i1->setLastName(name);

    // print infos
    i1->afficheInfos();
}

void vectorMethod() {
    vector<Etudiant> vec_individus;

    Etudiant i1("Roger", "Seve", 40);
    Etudiant i2("Pas", "Franck", 40);

    vec_individus.push_back(i1);
    vec_individus.push_back(i2);

    Individu individuTest;

    for (unsigned int i = 0; i < vec_individus.size(); i++) {
        individuTest = vec_individus.at(i);
        std::cout << "Individu i3 : " << individuTest.getLastName() << " " << individuTest.getFirstName() << " a " << individuTest.getAge() << " ans" << std::endl;
    }
// you can use this when you delete the virtual word before afficheInfos() inside Individu.h
//    for (vector<Individu>::iterator it = vec_individus.begin(); it != vec_individus.end(); ++it) {
//           (*it).afficheInfos();
//    }
}

void surchargeOperateur() {
//    vector<Etudiant> vec_individus;

//    Etudiant i1("Roger", "Seve", 88);
//    Etudiant i2("Pas", "Franck", 44);
//    Etudiant i3("Fred", "Lauger", 40);
//    Etudiant i4("Oris", "Cast", 20);

//    vec_individus.push_back(i1);
//    vec_individus.push_back(i2);
//    vec_individus.push_back(i3);
//    vec_individus.push_back(i4);

    Individu i1;

    bool testOperator = i1.operator <(i1);
    std::cout << testOperator << endl;
}
