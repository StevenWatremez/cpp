#include <iostream>
#include "individu.h"

using namespace std;

int main(int argc, char *argv[])
{
    Individu i1;
    Individu * i2 = new Individu();
    std::cout << "Individu i1 : " << i1.getLastName() << " " << i1.getFirstName() << " a " << i1.getAge() << " ans" << std::endl;

    i2->setLastName("Faudeil");
    i2->setFirstName("Marc");
    i2->setAge(43);

    std::cout << "Individu i2 : " << i2->getLastName() << " " << i2->getFirstName() << " a " << i2->getAge() << " ans" << std::endl;

    Individu * i3 = new Individu("Watremez", "Steven", 25);
    std::cout << "Individu i3 : " << i3->getLastName() << " " << i3->getFirstName() << " a " << i3->getAge() << " ans" << std::endl;

    return 0;
}
