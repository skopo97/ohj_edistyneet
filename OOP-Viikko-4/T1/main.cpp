#include <iostream>
#include "Henkilo.h"

int main() {
    Henkilo alkuperainen("Sami Koponen", 28);
    Henkilo kopio(alkuperainen, "Uusi henkilo");
    std::cout << "Alkuperäinen henkilö luotu\n";
    alkuperainen.tulostaHenkilonTiedot();
    std::cout << "Kopioitu henkilö luotu\n";
    kopio.tulostaHenkilonTiedot();
    return 0;
}
