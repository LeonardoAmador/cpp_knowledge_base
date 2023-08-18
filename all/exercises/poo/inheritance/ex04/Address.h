#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

using namespace std;

class Address {
protected:
    string street;
    int number;
    string neighborhood;
    string cep;
    string city;

public:
    Address(const string& street, int number, const string& neighborhood, const string& cep, const string& city);
    string getCityName();
};

#endif

