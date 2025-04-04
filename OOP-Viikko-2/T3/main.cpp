#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Noppa.h"

int main() {
    //Huono satunnainen, mutta toimii tähän tarkoitukseen
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    Noppa noppa;
    for (int i{0}; i < 10; ++i) {
        noppa.heitaNoppaa();
        noppa.kerroViimeisenHeitonLukema();
    }






    return 0;
}
