//
// Created by samit on 4/27/2025.
//

#ifndef KOULU_H
#define KOULU_H

#include "Henkilo.h"
#include <iostream>
#include <string>
#include <vector>


class Henkilo;


class Koulu {
private:
    std::string m_koulunNimi{};
    std::vector<Opettaja*> m_opettajat{};
    std::vector<Opiskelija*> m_opiskelijat{};

public:
    //Rakentaja
    Koulu();
    Koulu(std::string koulunNimi);

    void lisaaOpiskelija(Opiskelija* opiskelija);
    void lisaaOpettaja(Opettaja* opettaja);

    void tulostaKaikkiTiedot();
    void tulostaKaikkiOpiskelijat();
    void tulostaKaikkiOpettajat();

    //Setterit
    void setKoulunNimi(std::string koulunNimi);
    void setOpettaja(std::vector<Opettaja*> opettajat);
    void setOpiskelija(std::vector<Opiskelija*> opiskelijat);
    //Getterit
    std::string getKoulunNimi() const;
    std::vector<Opettaja*> getOpettajat() const;
    std::vector<Opiskelija*> getOpiskelijat() const;


};



#endif //KOULU_H
