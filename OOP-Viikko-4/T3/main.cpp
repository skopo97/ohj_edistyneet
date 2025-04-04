#include <iostream>
#include <vector>

#include "Henkilo.h"


void lisaaHenkilo(std::vector<Henkilo>& henkilot) {
    std::string nimi, osoite;
    int ika;
    std::cout << "Anna nimi: ";
    std::cin >> nimi;
    std::cout << "Anna ika: ";
    std::cin >> ika;
    std::cin.ignore();
    henkilot.emplace_back(nimi, ika);
}

void tulostaHenkilot(const std::vector<Henkilo>& henkilot) {
    for (const auto& henkilo : henkilot) {
        henkilo.tulostaHenkilonTiedot();

    }
}
int main() {


    std::vector<Henkilo> henkilot;


    int valinta;
    do {
        std::cout << "Valitse toiminto:\n";
        std::cout << "1. Lisaa uusi henkilo\n";
        std::cout << "2. Tulosta henkilot\n";
        std::cout << "3. Lopeta\n";
        std::cout << "Valinta: ";
        std::cin >> valinta;

        switch (valinta) {
            case 1:
                lisaaHenkilo(henkilot);
            break;
            case 2:
                if (henkilot.empty()) {
                    std::cout << "Ei henkiloita.\n";
                }
                tulostaHenkilot(henkilot);
            break;
            case 3:
                std::cout << "Sammutetaan.\n";
            break;
            default:
                std::cout << "Virheellinen syöte.\n";
        }
    } while (valinta != 3);

    return 0;
}
