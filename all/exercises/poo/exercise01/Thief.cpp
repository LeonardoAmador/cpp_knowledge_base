#include <iostream>
#include "Character.cpp"


using namespace std;

class Thief : public Character {
public:
    void attack(Character& targetCharacter) {
        const int impact = (this->attackPower - targetCharacter.defensePower) * 2;
        targetCharacter.hitPoints -= impact;
    }
};

