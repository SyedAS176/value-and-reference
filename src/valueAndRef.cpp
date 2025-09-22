#include "../tests/valueAndRef.hpp"

void addByRef(int &x) {
    x++; //Adds by reference
}

int addByValue(int x) {
    return x+1; //Adds by value and returns it
}