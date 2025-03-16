//
// Created by Sami on 16.3.2025.
//


#include "Noppa.h"
#include <iostream>


int Noppa::getViimeisinLukema() const{
    return m_viimeisinLukema;
}

int Noppa::getNoppienLukumaara() const {
    return m_noppienLukumaara;
}

int Noppa::setNoppienLukumaara(int noppienLukumaara){
    m_noppienLukumaara = std::clamp(noppienLukumaara, 1, 5);
    std::cout << "Noppia on nyt " << m_noppienLukumaara << " kappaletta!\n";
    return m_noppienLukumaara;
}



void Noppa::heitaNoppaa() {
    std::cout << "Heitetään " << m_noppienLukumaara << " kappaletta noppaa!\n";
    m_noppienLukemat.clear();
    for (int i{0}; i < m_noppienLukumaara; ++i) {
        m_noppienLukemat.push_back(rand() % 6 + 1);
    }
}

void Noppa::kerroViimeisenHeitonLukema() const {
    int summa{};
    for (std::size_t i {0}; i < m_noppienLukemat.size(); ++i) {
        std::cout << "Noppa " << i + 1 << ": " << m_noppienLukemat[i] << "!\n";
        summa+=m_noppienLukemat[i];
    }
    std::cout << "Yhteensä: " << summa << "!\n";
}




