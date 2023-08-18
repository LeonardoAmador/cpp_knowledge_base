#include "Person.h"

using namespace std;

Person::Person(string street, int number, string neighborhood, string cep, string city, string code, string name, string contact, string profession, string birth, string father, string mother) 
    : Address(street, number, neighborhood, cep, city) {
    this->code = code;
    this->name = name;
    this->contact = contact;
    this->profession = profession;
    this->birth = birth;
    this->father = father;
    this->mother = mother;
    vector<Address> address;
}

Address Person::getPersonAddress() {
    Address address(this->street, this->number, this->neighborhood, this->cep, this->city);
    this->address.push_back(address);
    return address;
}

