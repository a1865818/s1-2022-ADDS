#include "Move.h"

Move::Move() {

}

Move::Move(string s) {
    name = s;
}

string Move::getName() {
    return name;
}