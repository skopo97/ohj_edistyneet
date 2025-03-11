//
// Created by samit on 3/11/2025.
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

    std::string getNimi() const;
    void setNimi(const std::string& nimi);

    int getIka() const;
    void setIka(int ika);

    void tulostaHenkilonTiedot();

};

#endif //HENKILO_H
