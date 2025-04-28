//
// Created by samit on 4/27/2025.
//

#include "Opiskelija.h"
#include <iostream>
#include <string>
#include <vector>
#include "Henkilo.h"

//Rakentajat
Opiskelija::Opiskelija() = default;

//Rakentaja, joka ottaa vain opiskelijan tiedot
Opiskelija::Opiskelija(std::string opNro, std::vector<std::string> suoritetutKurssit, int opintoPisteet) {
    setOpNro(opNro);
    setSuoritetutKurssit(suoritetutKurssit);
    setOpintoPisteet(opintoPisteet);
}

//Rakentaja, jolla voi lisätä suoraan myös henkilön tiedot
Opiskelija::Opiskelija(int ika, std::string nimi, Osoite osoite, std::string opNro,
                       std::vector<std::string> suoritetutKurssit, int opintoPisteet)
        : Henkilo(ika, nimi, osoite), m_opNro(opNro), m_suoritetutKurssit(suoritetutKurssit),
          m_opintoPisteet(opintoPisteet) {}



//setterit
void Opiskelija::setOpNro(std::string opNro) {
    m_opNro = opNro;
}
void Opiskelija::setSuoritetutKurssit(std::vector<std::string> suoritetutKurssit) {
    m_suoritetutKurssit = suoritetutKurssit;
}
void Opiskelija::setOpintoPisteet(int opintoPisteet) {
    m_opintoPisteet = opintoPisteet;
}
//getterit
std::string Opiskelija::getOpNro() const {
    return m_opNro;
}
std::vector<std::string> Opiskelija::getSuoritetutKurssit() const {
    return m_suoritetutKurssit;
}
int Opiskelija::getOpintoPisteet() const {
    return m_opintoPisteet;
}
//Tulosta opiskelijan tiedot
void Opiskelija::tulostaTiedot() const {
    std::cout << "Opiskelija: " << getNimi() << '\n';
    std::cout << "Opiskelijanumero: " << m_opNro << '\n';
    std::cout << "Suoritetut kurssit: ";
    for (const auto& kurssi : m_suoritetutKurssit) {
        std::cout << kurssi << ", ";
    }
    std::cout << '\n';
    std::cout << "Opintopisteet: " << m_opintoPisteet << '\n';
}

void Opiskelija::lisaaOpiskelijalleKurssi() {
    std::string uusiKurssi;
    std::cout << "Anna lisättävän kurssin nimi: ";
    std::getline(std::cin, uusiKurssi);

    if (!uusiKurssi.empty()) {
        m_suoritetutKurssit.push_back(uusiKurssi);
        std::cout << "Kurssi '" << uusiKurssi << "' lisätty opiskelijalle " << getNimi() <<
            " suoritettuihin kursseihin.\n";
    } else {
        std::cout << "Kurssin nimi ei voi olla tyhjä." << '\n';
    }
}
