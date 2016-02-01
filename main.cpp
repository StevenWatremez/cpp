#include <iostream>
#include "individu.h"

using namespace std;

int main(int argc, char *argv[])
{
    Individu i1;
    Individu * i2 = new Individu();
    std::cout << "Individu i1 : " << i1.getLastName() << " " << i1.getFirstName() << " a " << i1.getAge() << " ans" << std::endl;
    i2->setFirstName("Faudeil");
    std::cout << "Individu i2 : " << i2->getLastName() << " " << i2->getFirstName() << " a " << i2->getAge() << " ans" << std::endl;
    return 0;
}
