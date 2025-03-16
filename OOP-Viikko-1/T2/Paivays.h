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

void tulostaPaivays() const;
};



#endif //PAIVAYS_H
