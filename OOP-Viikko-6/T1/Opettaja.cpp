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
        std::cout << kurssi << ' ';
    }
    std::cout << '\n';
}


void Opettaja::poistaKurssi(const std::string& kurssi) {
    auto it = std::find(m_kurssit.begin(), m_kurssit.end(), kurssi);  // Etsi kurssi vektorista
    if (it != m_kurssit.end()) {
        m_kurssit.erase(it);  // Poista kurssi
        std::cout << "Kurssi " << kurssi << " poistettu." << '\n';
    } else {
        std::cout << "Kurssia " << kurssi << " ei löytynyt." << '\n';
    }
}

void Opettaja::muokkaaIkaa(int ika) {
    setIka(ika);
}