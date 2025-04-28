//
// Created by samit on 4/27/2025.
//
#include <string>;
#include <vector>
#include <iostream>
#include "Koulu.h"
#include "Opettaja.h"
#include "Opiskelija.h"
#include "Henkilo.h"


class Opettaja;
class Opiskelja;

//Rakentaja
Koulu::Koulu() = default;
Koulu::Koulu(std::string koulunNimi) : m_koulunNimi(koulunNimi) {}

void Koulu::lisaaOpiskelija(Opiskelija* opiskelija) {
    m_opiskelijat.push_back(opiskelija);
}
void Koulu::lisaaOpettaja(Opettaja* opettaja) {
    m_opettajat.push_back(opettaja);
}
void Koulu::tulostaKaikkiTiedot() const {
    std::cout << "Koulun nimi: " << m_koulunNimi << '\n';
    std::cout << "Opettajien määrä: " << m_opettajat.size() << '\n';
    std::cout << "Opettajat:\n";
    for (const auto& opettaja : m_opettajat) {
        opettaja->tulostaTiedot();
        std::cout << '\n';
    }
    std::cout << "Opiskelijoiden määrä: " << m_opiskelijat.size() << '\n';
    std::cout << "Opiskelijat:\n";
    for (const auto& opiskelija : m_opiskelijat) {
        opiskelija->tulostaTiedot();
        std::cout << '\n';
    }



}

void Koulu::tulostaKaikkiOpettajat() const {
    std::cout << "Opettajat:\n";
    for (const auto& opettaja : m_opettajat) {
        opettaja->tulostaTiedot();
        std::cout << '\n';
    }
}

void Koulu::tulostaKaikkiOpiskelijat() const {
    std::cout << "Opiskelijat:\n";
    for (const auto& opiskelija : m_opiskelijat) {
        opiskelija->tulostaTiedot();
        std::cout << '\n';

    }
}

//Setterit
void Koulu::setKoulunNimi(std::string koulunNimi) {
    m_koulunNimi = koulunNimi;
}
void Koulu::setOpettaja(std::vector<Opettaja*> opettajat) {
    m_opettajat = opettajat;
}
void Koulu::setOpiskelija(std::vector<Opiskelija*> opiskelijat) {
    m_opiskelijat = opiskelijat;
}
//Getterit
std::string Koulu::getKoulunNimi() const {
    return m_koulunNimi;
}
std::vector<Opettaja*> Koulu::getOpettajat() const {
    return m_opettajat;
}
std::vector<Opiskelija*> Koulu::getOpiskelijat() const {
    return m_opiskelijat;
}



