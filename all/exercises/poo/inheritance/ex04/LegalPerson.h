#ifndef LEGALPERSON_H
#define LEGALPERSON_H

#include "Person.h"

using namespace std;

class LegalPerson : public Person {
public:
    LegalPerson(string contact, string stateRegistration, string cnpj);

private:
    string stateRegistration;
    string cnpj;
};

#endif

