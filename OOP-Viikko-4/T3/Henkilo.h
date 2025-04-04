//
// Created by samit on 3/16/2025.
//

#ifndef HENKILO_H
#define HENKILO_H
#include <string>
#include <iostream>


class Henkilo {
private:
    std::string m_nimi{};
    int m_ika{};

public:
    Henkilo() {
        std::cout << "Henkilo-luokan parametriton rakentaja luotu.\n";
    }

    Henkilo(std::string nimi, int ika) : m_nimi(nimi), m_ika(ika) {
        std::cout << "Henkilo-luokan 2 parametrinen rakentaja luotu.\n";
    }

    Henkilo(const Henkilo& other, const std::string& nimi) : m_nimi(nimi), m_ika(other.m_ika) {
        std::cout << "Henkilo-luokan kopiorakentaja luotu.\n";
    }

    std::string getNimi() const;
    void setNimi(const std::string& nimi);

    int getIka() const;
    void setIka(int ika);

    void tulostaHenkilonTiedot() const;


};

#endif //HENKILO_H
