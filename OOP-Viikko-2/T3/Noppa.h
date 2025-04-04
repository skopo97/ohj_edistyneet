//
// Created by Sami on 16.3.2025.
//

#ifndef NOPPA_H
#define NOPPA_H



class Noppa {
private:
    int m_viimeisinLukema{};

public:
    Noppa(int aloitusarvo = 3);


    int getViimeisinLukema() const;
    void heitaNoppaa();
    void kerroViimeisenHeitonLukema() const;
};

#endif //NOPPA_H
