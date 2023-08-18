#include <iostream>
#include <string>

using namespace std;

class Character {
public:
	int hitPoints;
	int defensePower;
	int attackPower;
	
    Character(string name, int hitPoints, int attackPower, int defensePower):name(name), hitPoints(hitPoints), attackPower(attackPower), defensePower(defensePower) {}

    void attack(Character& targetCharacter) {
        targetCharacter.hitPoints -= (this->attackPower - targetCharacter.defensePower);
    }

private:
    string name;
};
