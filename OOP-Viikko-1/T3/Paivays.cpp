//
// Created by samit on 3/11/2025.
//
#include <iostream>
#include "Paivays.h"
#include <limits>


//Setterit

void Paivays::setPaiva(const int& paiva) {
    m_paiva = paiva;
}

void Paivays::setKuukausi(const int &kuukausi) {
    m_kuukausi = kuukausi;
}

void Paivays::setVuosi(const int &vuosi) {
    m_vuosi = vuosi;
}

//Getterit

int Paivays::getPaiva() const {
    return m_paiva;
}
int Paivays::getKuukausi() const {
    return m_kuukausi;
}
int Paivays::getVuosi() const {
    return m_vuosi;
}

//Tulostus

void Paivays::tulostaPaivays() const {
    std::cout << m_paiva << '.' << m_kuukausi << '.' << m_vuosi << '\n';
}

//Kysy paivays
void Paivays::asetaPaivays(){
    do {
        std::cout << "Anna päivä : ";
        std::cin >> m_paiva;
        if (syotteenTarkastus()) continue;

        std::cout << "Anna kuukausi : ";
        std::cin >> m_kuukausi;
        if (syotteenTarkastus()) continue;

        std::cout << "Anna vuosi : ";
        std::cin >> m_vuosi;
        if (syotteenTarkastus()) continue;

        if (!onkoValidiPaivays(m_paiva, m_kuukausi, m_vuosi)) {
            std::cout << "Virheellinen päivämäärä.\n";
        }
    } while (!onkoValidiPaivays(m_paiva, m_kuukausi, m_vuosi));
}

//Paivayksen tarkastus funktiot

bool Paivays::onkoKarkausvuosi(int vuosi) const {
    return (vuosi % 4 == 0 && vuosi % 100 != 0) || vuosi % 400 == 0;
}

bool Paivays::onkoValidiPaivays(int paiva, int kuukausi, int vuosi) const{
    if (vuosi < 1800 || vuosi > 2100) {
        return false;
    }
    if (kuukausi < 1 || kuukausi > 12) {
        return false;
    }
    int paivatKuukaudessa[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (Paivays::onkoKarkausvuosi(vuosi)) {
        paivatKuukaudessa[1] = 29;
    }

    if (paiva < 1 || paiva > paivatKuukaudessa[kuukausi - 1]) {
        return false;
    }

    return true;
}

//Syotteen tarkastus
bool Paivays::syotteenTarkastus() const{
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Virheellinen syötä, yritä uudelleen.\n";
        return true;
    }
    return false;
}

void Paivays::lisaaYksiPaiva(){
    m_paiva++;
    int paivatKuukaudessa[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (onkoKarkausvuosi(m_vuosi)) {
        paivatKuukaudessa[1] = 29;
    }

    if (m_paiva > paivatKuukaudessa[m_kuukausi - 1]) {
        m_paiva = 1;
        m_kuukausi++;
    }
}






