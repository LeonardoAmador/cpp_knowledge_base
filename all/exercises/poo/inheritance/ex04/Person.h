#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "Address.h"

using namespace std;

class Person : public Address {
public:
    Person(string street, int number, string neighborhood, string cep, string city, string code, string name, string contact, string profession, string birth, string father, string mother);
    Address getPersonAddress();

private:
    string code;
    string name;
    string contact;
    string profession;
    string birth;
    string father;
    string mother;
    vector<Address> address;
};

#endif

