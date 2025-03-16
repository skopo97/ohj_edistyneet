//
// Created by samit on 3/11/2025.
//

#ifndef PAIVAYS_H
#define PAIVAYS_H



class Paivays{
private:
    int m_paiva{};
    int m_kuukausi{};
    int m_vuosi{};

public:
    //setterit
    void setPaiva(const int& paiva);
    void setKuukausi(const int& kuukausi);
    void setVuosi(const int& vuosi);

    //getterit
    int getPaiva() const;
    int getKuukausi() const;
    int getVuosi() const;

    //tulostusfunktio
    void tulostaPaivays() const;

    //kysy paivays funktio
    void asetaPaivays();

    //Paivayksen tarkastus funktiot
    bool onkoKarkausvuosi(int vuosi) const;
    bool onkoValidiPaivays(int paiva, int kuukausi, int vuosi) const;

    bool syotteenTarkastus() const;

    void lisaaYksiPaiva();

};



#endif //PAIVAYS_H
