//
// Created by samit on 4/27/2025.
//

#include "Opettaja.h"
#include "Henkilo.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//Rakentajat
Opettaja::Opettaja() = default;
//Rakentaja joka lisää vain opettajan tiedot
Opettaja::Opettaja(std::string koulutusala, std::vector<std::string> kurssit) {
    setKoulutusala(koulutusala);
    setKurssit(kurssit);
}
//Rakentaja, jolla voi lisätä suoraan myös henkilön tiedot
Opettaja::Opettaja(int ika, std::string nimi, Osoite osoite, std::string koulutusala,
                   std::vector<std::string> kurssit)
        : Henkilo(ika, nimi, osoite), m_koulutusala(koulutusala), m_kurssit(kurssit) {}


//setterit
void Opettaja::setKoulutusala(std::string koulutusala) {
    m_koulutusala = koulutusala;
}
void Opettaja::setKurssit(std::vector<std::string> kurssit) {
    m_kurssit = kurssit;
}
//getterit
std::string Opettaja::getKoulutusala() const {
    return m_koulutusala;
}
std::vector<std::string> Opettaja::getKurssit() const {
    return m_kurssit;
}

//Tulostukset
void Opettaja::tulostaTiedot() const {
    Henkilo::tulostaTiedot();
    std::cout << "Koulutusala: " << m_koulutusala << '\n';
    std::cout << "Kurssit: ";
    for (const auto& kurssi : m_kurssit) {
        std::cout << kurssi << ", ";
    }
    std::cout << '\n';
}

void Opettaja::lisaaOpettajalleKurssi() {
    std::string uusiKurssi;
    std::cout << "Anna lisättävän kurssin nimi: ";
    std::getline(std::cin, uusiKurssi);

    if (!uusiKurssi.empty()) {
        m_kurssit.push_back(uusiKurssi);
        std::cout << "Kurssi '" << uusiKurssi << "' lisätty opettajalle " << getNimi() << ".\n";
    } else {
        std::cout << "Kurssin nimi ei voi olla tyhjä." << '\n';
    }
}

void Opettaja::muokkaaIkaa(int ika) {
    setIka(ika);
}