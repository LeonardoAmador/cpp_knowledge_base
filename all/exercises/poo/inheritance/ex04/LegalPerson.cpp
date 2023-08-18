#include "LegalPerson.h"

using namespace std;

LegalPerson::LegalPerson(string contact, string stateRegistration, string cnpj) :
    Person("", 0, "", "", "", "", "", contact, "", "", "", ""), stateRegistration(stateRegistration), cnpj(cnpj)
{
}

std::string LegalPerson::getContact() const {
    return this->contact;
}

