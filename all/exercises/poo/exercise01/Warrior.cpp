#include <string>
#include <iostream>
#include "Character.cpp"

using namespace std;

class Warrior : public Character {
public:
    Warrior(string name, int hitPoints, int attackPower, int defensePower, int shield)
        : Character(name, hitPoints, attackPower, defensePower), shield(shield), position("attacking") {}

    void attack(Character& targetCharacter) {
        if (position == "attacking") {
            Character::attack(targetCharacter);
        } else {
            cout << "Your position doesn't allow you to attack!" << endl;
        }
    }

    void switchPosition() {
        if (position == "attacking") {
            position = "defending";
            defensePower += shield;
        } else {
            position = "attacking";
            defensePower -= shield;
        }
    }

private:
    int shield;
    string position;
};
