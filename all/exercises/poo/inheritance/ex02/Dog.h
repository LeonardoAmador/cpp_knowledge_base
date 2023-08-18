#include "Animal.h"
#include <string>

using namespace std;

class Dog : public Animal {
public:
    Dog(string type, string color, string name, string race);
    void showNameRace();

private:
    string name;
    string race;
};


