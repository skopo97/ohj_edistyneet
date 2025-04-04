//
// Created by Sami on 16.3.2025.
//

#ifndef NOPPA_H
#define NOPPA_H

#include <algorithm>
#include <iostream>
#include <vector>


class Noppa {
private:
    int m_viimeisinLukema{};
    int m_noppienLukumaara{};

    std::vector<int> m_noppienLukemat{};

public:
    Noppa() : m_noppienLukumaara(1){};
    //Voisi myös käyttää if lausekkeita, mutta huomasin std::clampin uutena
    //c++ 20:ssä. Rajottaa arvon annettuun väliin automaattisesti.
    Noppa(int noppienLukumaara)
    : m_noppienLukumaara(std::clamp(noppienLukumaara, 1, 5)) {
        std::cout << "Luotu " << m_noppienLukumaara << " noppaa!\n";
    };






    int getViimeisinLukema() const;
    int getNoppienLukumaara()const;
    int setNoppienLukumaara(int noppienLukumaara);

    void heitaNoppaa();
    void kerroViimeisenHeitonLukema() const;
};

#endif //NOPPA_H
