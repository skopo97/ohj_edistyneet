//
// Created by samit on 4/27/2025.
//

#ifndef OPISKELIJA_H
#define OPISKELIJA_H

#include "Henkilo.h"
#include <vector>
#include <string>


class Opiskelija : public Henkilo {
private:
    std::string m_opNro{};
    std::vector<std::string> m_suoritetutKurssit{};
    int m_opintoPisteet{};

public:
    //Rakentetajat
    Opiskelija();
    //Rakentaja, joka ottaa vain opiskelijan tiedot
    Opiskelija(std::string opNro, std::vector<std::string> suoritetutKurssit, int opintoPisteet);
    //Rakentaja, jolla voi lisätä suoraan myös henkilön tiedot
    Opiskelija(int ika, std::string nimi, Osoite osoite, std::string opNro,
        std::vector<std::string> suoritetutKurssit, int opintoPisteet);

    //setterit
    void setOpNro(std::string opNro);
    void setSuoritetutKurssit(std::vector<std::string> suoritetutKurssit);
    void setOpintoPisteet(int opintoPisteet);
    //getterit
    std::string getOpNro() const;
    std::vector<std::string> getSuoritetutKurssit() const;
    int getOpintoPisteet() const;



    void tulostaTiedot() const;

    void lisaaOpiskelijalleKurssi();

};



#endif //OPISKELIJA_H
