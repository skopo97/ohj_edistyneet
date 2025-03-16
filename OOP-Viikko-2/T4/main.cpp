#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Noppa.h"

int main() {
    //Huono satunnainen, mutta toimii tähän tarkoitukseen
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    Noppa monopoli(2);

    monopoli.heitaNoppaa();
    monopoli.kerroViimeisenHeitonLukema();

    Noppa customNoppa(5);
    customNoppa.setNoppienLukumaara(3);

    customNoppa.heitaNoppaa();
    customNoppa.kerroViimeisenHeitonLukema();










    return 0;
}
