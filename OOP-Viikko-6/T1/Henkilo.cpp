//
// Created by samit on 4/27/2025.
//


#include <iostream>
#include <string>
#include "Osoite.h"
#include "Opiskelija.h"
#include "Henkilo.h"
#include "Opettaja.h"

//Rakentajat
Henkilo::Henkilo() = default;

Henkilo::Henkilo(int ika, std::string nimi, Osoite osoite) {
    m_ika = ika;
    m_nimi = nimi;
    m_osoite = osoite;
}

//Tehtävän 1 rakentaja
Henkilo::Henkilo(int ika) : m_ika(ika) {}

//Setterit
void Henkilo::setIka(int ika) {
    m_ika = ika;
}
void Henkilo::setNimi(std::string nimi) {
    m_nimi = nimi;
}
void Henkilo::setOsoite(const Osoite& osoite) {
    m_osoite = osoite;
}
//Getterit
int Henkilo::getIka() const {
    return m_ika;
}
std::string Henkilo::getNimi() const {
    return m_nimi;
}
Osoite Henkilo::getOsoite() const {
    return m_osoite;
}
//Tulosta henkilon tiedot
void Henkilo::tulostaTiedot() const {
    std::cout << "Nimi: " << m_nimi << '\n';
    std::cout << "Ikä: " << m_ika << '\n';
    std::cout << "Osoite: " << '\n';
    m_osoite.tulostaOsoitetiedot();
}