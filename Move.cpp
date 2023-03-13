#include "Move.h"

Move::Move() {

}

Move::Move(string nameMove) {
    name = nameMove;
}

string Move::getName() {
    return name;
}