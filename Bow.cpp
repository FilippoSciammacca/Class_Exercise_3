//
// Created by Marco Bertini on 08/04/18.
//

#include <iostream>
#include "Bow.h"

Bow::Bow(int a, bool d) : arrows(a), daedric(d) {

}

int Bow::use() {
    int result = 0;
    if (arrows != 0){
        result = Weapon::use();
        if (daedric)
            result *= 2;
    }else{
        std::cout << "You ran out of arrows!" << std::endl;
    }
    return result;

}

bool Bow::isDaedric() const {
    return daedric;
}

void Bow::setDaedric(bool daedric) {
    Bow::daedric = daedric;
}
