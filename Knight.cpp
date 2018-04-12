//
// Created by Marco Bertini on 08/04/18.
//

#include "Knight.h"
#include "Dice.h"
#include <string>
using namespace std;

Knight::Knight(string name, int d, bool p) : name(name), dexterity(d), paladin(p){

}

int Knight::fight(GameCharacter &enemy) {
    int damage = this->getWeapon()->use();
    if(paladin)
        damage += 10;
    if(dexterity > 10)
        damage += this->getWeapon()->use();

}

void Knight::move(int x, int y) {

    int addMovement = 0;
    if(dexterity > 10) {
        addMovement = 1;
        if(x > movements)
            x = movements + addMovement;
        if(y > movements)
            y = movements + addMovement;
        posX += x;
        posY += y;
    }else{
        GameCharacter::move(x, y);
    }


}