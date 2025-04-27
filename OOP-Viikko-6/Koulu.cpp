//
// Created by samit on 4/27/2025.
//

#include "Koulu.h"
#include "Opettaja.h"
#include "Opiskelija.h"
#include "Henkilo.h"
#include <string>;
#include <vector>
#include <iostream>

//Rakentaja
Koulu::Koulu() = default;
Koulu::Koulu(std::string koulunNimi) : m_koulunNimi(koulunNimi) {}

void Koulu::lisaaOpiskelija(Opiskelija* opiskelija) {
    m_opiskelijat.push_back(opiskelija);
}
void Koulu::lisaaOpettaja(Opettaja* opettaja) {
    m_opettajat.push_back(opettaja);
}
void Koulu::tulostaKaikkiTiedot() {
    std::cout << "Koulun nimi: " << m_koulunNimi << '\n';
    std::cout << "Opettajat:\n";
    for (const auto& opettaja : m_opettajat) {
        opettaja->tulostaTiedot();
    }
    std::cout << "Opiskelijat:\n";
    for (const auto& opiskelija : m_opiskelijat) {
        opiskelija->tulostaTiedot();
    }
}

void Koulu::tulostaKaikkiOpettajat() {
    std::cout << "Opettajat:\n";
    for (const auto& opettaja : m_opettajat) {
        opettaja->tulostaTiedot();
    }
}

void Koulu::tulostaKaikkiOpiskelijat() {
    std::cout << "Opiskelijat:\n";
    for (const auto& opiskelija : m_opiskelijat) {
        opiskelija->tulostaTiedot();
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



