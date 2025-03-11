//
// Created by samit on 3/11/2025.
//
#include <iostream>
#include "Paivays.h"


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



