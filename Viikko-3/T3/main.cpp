#include <iostream>
#include <iomanip>
#include <string_view>

struct aika_ty {
    int tunti, minuutti, sekunti;
};

int tarkistaSyote(const std::string_view syote, int min, int max) {
    int arvo{};
    while (true) {
        std::cout << syote;
        std::cin >> arvo;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }else if (arvo < min || arvo > max) {
            std::cout << "Virheellinen arvo\n";
        } else {
            return arvo;
        }
    }
}
//Käytetään setfill ja setw funktioita, jotta saadaan aika muotoon hh:mm:ss
//setfill asettaa täytteeksi nollan ja setw asettaa leveyden 2 merkiksi.
//eli jos käyttäjä syöttää yksilukuisen arvon, niin siihen lisätään 0 eteen.
void tulostaAika(const aika_ty &aika) {
    std::cout << "Aika: " << std::setfill('0') << std::setw(2) << aika.tunti << ":"
                  << std::setfill('0') << std::setw(2) << aika.minuutti << ":"
                  << std::setfill('0') << std::setw(2) << aika.sekunti << '\n';
}

int main() {
    aika_ty aika;
    aika.tunti = tarkistaSyote("Anna tunnit: ", 0, 23);
    aika.minuutti = tarkistaSyote("Anna minuutit: ", 0, 59);
    aika.sekunti = tarkistaSyote("Anna sekunnit: ", 0, 59);


    tulostaAika(aika);

    aika_ty *aika2 = &aika;
    std::cout << "Tulostus osoittimella\n";
    tulostaAika(*aika2);

    aika_ty uusiAika;
    uusiAika.tunti = 02;
    uusiAika.minuutti = 45;
    uusiAika.sekunti = 25;

    aika_ty uusiAika1;
    uusiAika1 = uusiAika;

    if (uusiAika1.tunti == uusiAika.tunti && uusiAika1.minuutti == uusiAika.minuutti && uusiAika1.sekunti == uusiAika.sekunti) {
        std::cout << "Sisällöt ovat samat\n";
    }
    return 0;
}
