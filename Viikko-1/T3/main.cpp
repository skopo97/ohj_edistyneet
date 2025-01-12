#include <iostream>
#include <vector>

//Indeksoinnin avulla kasvatus
std::vector<int> kasvataTaulukkoa(std::vector<int> taulukko, int kasvatus) {
    for (std::size_t i {0}; i < taulukko.size(); ++i) {
        taulukko[i] += kasvatus;
    }
    return taulukko;
}

//Osoittimen avulla kasvatus
std::vector<int> kasvataTaulukkoa(std::vector<int> *taulukko, int kasvatus) {
    for (std::size_t i {0}; i < taulukko->size(); ++i) {
        (*taulukko)[i] += kasvatus;
    }
    return *taulukko;
}

std::vector<int> tulostaTaulukko(std::vector<int> taulukko) {
    for (std::size_t i{0}; i < taulukko.size(); ++i) {
        std::cout << taulukko[i] << " ";
    }
    return taulukko;
}


int main() {
    std::vector<int> taulukko(10);
    std::cout << "Taulukko ennen aliohjelmakutsua 1: ";
    tulostaTaulukko(taulukko);
    std::cout << '\n';
    std::cout << "Taulukko alihojelmakutsun 1 jälkeen: ";
    tulostaTaulukko(kasvataTaulukkoa(taulukko, 1));
    std::cout << '\n';
    std::cout << '\n';
    std::cout << "Taulukko ennen aliohjelmakutsua 2: ";
    tulostaTaulukko(taulukko);
    std::cout << '\n';
    std::cout << "Taulukko alihojelmakutsun 2 jälkeen: ";
    tulostaTaulukko(kasvataTaulukkoa(&taulukko, 1));
    return 0;


}