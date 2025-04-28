//
// Created by samit on 4/27/2025.
//

#ifndef HENKILO_H
#define HENKILO_H

#include<string>
#include "Osoite.h"


class Opiskelija;
class Opettaja;

class Henkilo {
private:
    std::string m_nimi{};
    Osoite m_osoite{};
    int m_ika{};

protected:


public:
    //Rakentajat
    Henkilo();
    Henkilo(int ika, std::string nimi, Osoite osoite);

    //Tehtävän 1 rakentaja
    Henkilo(int ika);

    //funktiot

    //Setterit
    void setIka(int ika);
    void setNimi(std::string nimi);
    void setOsoite(const Osoite& osoite);

    //getterit
    int getIka() const;
    std::string getNimi() const;
    Osoite getOsoite() const;

    //tulosta henkilon tiedot
    void tulostaTiedot() const;



};



#endif //HENKILO_H