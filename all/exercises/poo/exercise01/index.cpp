#include <iostream>
#include <string>
#include "Mage.cpp"
#include "Thief.cpp"
#include "Warrior.cpp"

using namespace std;

int main() {
    Mage arthur("Arthur", 90, 4, 2, 14);
    Thief beatrice("Beatrice", 140, 22, 8);
    Warrior cain("Cain", 200, 14, 12, 4);

    cout << "Initial state:" << endl;
    cout << "Arthur:" << endl;
    arthur.display();
    cout << "Beatrice:" << endl;
    beatrice.display();
    cout << "Cain:" << endl;
    cain.display();

    cain.switchPosition();
    arthur.attack(cain);
    beatrice.attack(arthur);

    cout << "After round 1:" << endl;
    cout << "Arthur:" << endl;
    arthur.display();
    cout << "Beatrice:" << endl;
    beatrice.display();
    cout << "Cain:" << endl;
    cain.display();

    cain.switchPosition();
    cain.attack(arthur);
    arthur.increaseTargetLife(arthur);
    beatrice.attack(cain);

    cout << "After round 2:" << endl;
    cout << "Arthur:" << endl;
    arthur.display();
    cout << "Beatrice:" << endl;
    beatrice.display();
    cout << "Cain:" << endl;
    cain.display();

    return 0;
}
