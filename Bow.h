//
// Created by Marco Bertini on 08/04/18.
//

#ifndef E3_INHERITANCE_EXERCISE_BOW_H
#define E3_INHERITANCE_EXERCISE_BOW_H

#include "Weapon.h"

// extend Weapon... do we need to include Weapon.h?
class Bow : public Weapon{
public:
    // TODO add a constructor with an "a" parameter with a default of 20
    Bow(int a = 20, bool d = false);
    // must it be explicit ? EH BOH SECONDO ME NO MA CONTROLLA

    // override use(). Each use should decrement arrows
    int use() override;

    int getArrows() const {
        return arrows;
    }

    void setArrows(int arrows) {
        Bow::arrows = arrows;
    }

    bool isDaedric() const;

    void setDaedric(bool daedric);

protected:
    int arrows;
    bool daedric;
};


#endif //E3_INHERITANCE_EXERCISE_BOW_H
