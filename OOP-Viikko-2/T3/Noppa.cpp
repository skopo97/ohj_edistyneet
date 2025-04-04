//
// Created by Sami on 16.3.2025.
//


#include "Noppa.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Noppa::Noppa(int aloitusarvo) {
    m_viimeisinLukema = aloitusarvo;
}

int Noppa::getViimeisinLukema() const{
    return m_viimeisinLukema;
}


void Noppa::heitaNoppaa() {
    std::cout << "Heitetään noppaa!\n";
    m_viimeisinLukema = rand() % 6 + 1;
}

void Noppa::kerroViimeisenHeitonLukema() const {
    std::cout << "Viimeisin heitto on " << getViimeisinLukema() << "!\n";
}



