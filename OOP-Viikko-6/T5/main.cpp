#include "Koulu.h"

#include <iostream>
#include <limits>
#include <vector>

#include "Opettaja.h"
#include "Opiskelija.h"




int main() {

    std::vector<Henkilo* > henkilot;

    Osoite osoite1("Uimalankatu 5 F 544", 33540, "Tampere");
    Osoite osoite2("Hämeenkatu 21", 33500, "Tampere");
    Osoite osoite3("Hallituskatu 21", 33500, "Tampere");

    henkilot.push_back(new Henkilo(25, "Sami", osoite1));
    henkilot.push_back(new Opettaja(30, "Ismo", osoite2, "Matematiikka",
        {"Ohjelmointi V1", "Ohjelmointi V2"}));
    henkilot.push_back(new Opiskelija(23, "Jukka", osoite3, "965234",
        {"Ohjelmointi V1"}, 60));

    for (const auto& henkilo : henkilot) {
        henkilo->tulostaTiedot();
        std::cout << "-------------------" << '\n';
    }

    //Käsittääkseni kun funktiota ei ole määritelty virtuaaliseksi, niin tämä kutsuu aina
    //Henkilö luokan tulostaTiedot funktiota, eikä esim opettajan kohdalla omaa.
    //eli ilman virtual avainsanaa kutsuu aina Henkilo luokan tulostaTiedot funktiota, joka
    //näyttää vain iän, nimen ja osoitteen. Eikä opettajan/opiskelijan tietoja
    //Jos taas on virtuaalinen niin silloin
    //se kutsuu omaa. Tässä riittää, että Henkilo luokan tulostaTiedot määritellään virtuaaliseksi
    //tällöin kaikkien aliluokkien tulostaTiedot funktiot kutsuvat omaa tulostaTiedot funktiota

    //eli määritellään Henkilo luokan tulostaTiedot funktio virtuaaliseksi
    //Virtual void tulostaTiedot() const;
    //jonka jälkeen kaikki aliluokat kutsuvat omaa tulostaTiedot funktiota ja tulostus näyttää oikealta



    return 0;
}
