//
// Created by Marco Bertini on 08/04/18.
//

#ifndef E3_INHERITANCE_EXERCISE_KNIGHT_H
#define E3_INHERITANCE_EXERCISE_KNIGHT_H

#include <string>
#include "GameCharacter.h"
using namespace std;

// extend GameCharacter
class Knight : public GameCharacter{
public:
    // TODO add a std::string name and some values for the new attributes
    Knight(string name, int d, bool p);

    // TODO override fight: dexterity > 10 perform second attack
    // if paladin then +10 damage
    int fight(GameCharacter& enemy) override;

    // TODO override move: if dexterity > 10 allow +1 movement
    void move(int x, int y) override;

    // override base class method
    char getCharacterSymbol() const {
        return 'K';
    }

private:
    int dexterity;
    bool paladin;
    string name;
};


#endif //E3_INHERITANCE_EXERCISE_KNIGHT_H
