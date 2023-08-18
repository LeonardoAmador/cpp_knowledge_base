#include "IndividualPerson.h"

using namespace std;

IndividualPerson::IndividualPerson(string profession, string birth, string father, string mother, string rg, string cpf)
: Person("", 0, "", "", "", "", "", "", profession, birth, father, mother), rg(rg), cpf(cpf)
{}

string IndividualPerson::getFathersCity(string city) {
    return "Father's city: " + city;
}

