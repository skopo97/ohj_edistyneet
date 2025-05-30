//
// Created by samit on 4/27/2025.
//

#ifndef OSOITE_H
#define OSOITE_H

#include <string>

class Osoite {
private:
    std::string m_katuosoite{};
    int m_postinumero{};
    std::string m_kunta{};

public:
    //Rakentajat
    Osoite();
    Osoite(std::string katuosoite, int postinumero, std::string kunta);


    //Setterit
    void setKatuosoite(std::string katuosoite);
    void setPostinumero(int postinumero);
    void setKunta(std::string kunta);

    //Getterit
    std::string getKatuosoite() const;
    int getPostinumero() const;
    std::string getKunta() const;

    //tulosta osoitetiedot
    void tulostaOsoitetiedot() const;

};



#endif //OSOITE_H
