#ifndef INDIVIDUALPERSON_H
#define INDIVIDUALPERSON_H

#include "Person.h"

using namespace std;

class IndividualPerson : public Person {
public:
    IndividualPerson(string profession, string birth, string father, string mother, string rg, string cpf);

    string getFathersCity(string city);

private:
    string rg;
    string cpf;
};

#endif

