#include "Address.h"

using namespace std;

Address::Address(string street, int number, string neighborhood, string cep, string city) {
    this->street = street;
    this->number = number;
    this->neighborhood = neighborhood;
    this->cep = cep;
    this->city = city;
}

string Address::getCityName() {
    return this->city;
}

