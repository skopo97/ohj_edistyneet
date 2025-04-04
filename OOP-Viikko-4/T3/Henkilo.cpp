//
// Created by samit on 3/16/2025.
//

#include "Henkilo.h"


std::string Henkilo::getNimi() const {
    return m_nimi;
}
void Henkilo::setNimi(const std::string& nimi) {
    m_nimi = nimi;
}

int Henkilo::getIka() const {
    return m_ika;
}

void Henkilo::setIka(int ika) {
    m_ika = ika;
}


void Henkilo::tulostaHenkilonTiedot() const {
    std::cout << "Nimi: " << m_nimi << '\n';
    std::cout << "Ika: " << m_ika << '\n';
}
