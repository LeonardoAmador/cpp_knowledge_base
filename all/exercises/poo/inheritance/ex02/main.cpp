#include "Dog.h"
#include <iostream>

using namespace std;

int main() {
    Dog dog("hunter", "black-white", "Lok", "Viralata");
    dog.showNameRace();
    cout << dog.getColor() << endl;
    return 0;
}

