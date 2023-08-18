#include <iostream>
#include "Character.cpp"

using namespace std;

class Mage : public Character {
public:
    Mage(string name, int hitPoints, int attackPower, int defensePower, int spellPower)
        : Character(name, hitPoints, attackPower, defensePower), spellPower(spellPower) {}

    void attack(Character& targetCharacter) {
        const int uniteAttackSpell = this->attackPower + this->spellPower;
        const int impact = uniteAttackSpell >= targetCharacter.defensePower ? uniteAttackSpell - targetCharacter.defensePower : targetCharacter.defensePower - uniteAttackSpell;

        targetCharacter.hitPoints -= impact;
    }

    void increaseTargetLife(Character& targetCharacter) {
        targetCharacter.hitPoints += (this->spellPower * 2);
    }

private:
    int spellPower;
};

