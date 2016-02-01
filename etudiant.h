#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Individu.h" //ne pas oublier cette inclusion !

class Etudiant : public Individu
{
public:
    Etudiant(const string lastName, const string firstName, const int age);
    void setEtudiantFormation(int year, string yearFormation);
    void afficheFormation();
    void afficheInfos();

protected:
    string formation[5];
    int indiceArray = 0;
    Individu * individu;
};

#endif // ETUDIANT_H
