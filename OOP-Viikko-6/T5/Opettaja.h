//
// Created by samit on 4/27/2025.
//

#ifndef OPETTAJA_H
#define OPETTAJA_H
#include "Henkilo.h"
#include <string>
#include <vector>


class Opettaja : public Henkilo {
private:
    std::string m_koulutusala{};
    std::vector<std::string> m_kurssit{};

public:
    //Rakentajat
    Opettaja();
    //Rakentaja, joka ottaa vain opettajan tiedot
    Opettaja(std::string koulutusala, std::vector<std::string> kurssit);
    //Rakentaja, jolla voi lisätä suoraan myös henkilön tiedot
    Opettaja(int ika, std::string nimi, Osoite osoite, std::string koulutusala,
        std::vector<std::string> kurssit);


    //setterit
    void setKoulutusala(std::string koulutusala);

    void setKurssit(std::vector<std::string> kurssit);
    //getterit
    std::string getKoulutusala() const;
    std::vector<std::string> getKurssit() const;

    void lisaaOpettajalleKurssi();

    //Tulostukset
    void tulostaTiedot() const;

    //Tehtävä 1 funktio
    void muokkaaIkaa(int ika);


};



#endif //OPETTAJA_H
