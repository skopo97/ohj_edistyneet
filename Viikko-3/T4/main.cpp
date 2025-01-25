#include <iostream>
#include <cmath>

struct aika_ty {
    int sekunti{};
    int minuutti{};
    int tunti{};
};

int asetaAika(const std::string_view syote, int min, int max) {
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

int aikaSekuneiksi(const aika_ty& aika) {
    int sekunitAika {aika.minuutti * 60 + aika.tunti * 3600 + aika.sekunti};
    return sekunitAika;
}

aika_ty sekunnitAikaan(int sekunnit) {
    aika_ty aika{};
    aika.tunti = sekunnit / 3600;
    sekunnit = sekunnit % 3600;
    aika.minuutti = sekunnit / 60;
    aika.sekunti = sekunnit % 60;

    return aika;
}

aika_ty aikojen_erotus(const aika_ty& aika1, const aika_ty& aika2) {
    aika_ty erotus{};
    int sekunitAika1 {aikaSekuneiksi(aika1)};
    int sekunitAika2 {aikaSekuneiksi(aika2)};
    int erotusSekunteina {std::abs(sekunitAika1 - sekunitAika2)};

    erotus = sekunnitAikaan(erotusSekunteina);

    return erotus;
}

int main() {
    std::cout << "Ohjelma kysyy kaksi aikaa ja laskee niiden erotuksen\n";

    aika_ty aika1{};
    std::cout << "Ensimmäinen aika\n";
    aika1.tunti = asetaAika("Anna tunti: ", 0, 23);
    aika1.minuutti = asetaAika("Anna minuutti: ", 0, 59);
    aika1.sekunti = asetaAika("Anna sekunti: ", 0, 59);
    std::cout << '\n';
    aika_ty aika2{};
    std::cout << "Toinen aika\n";
    int sekunitAika1{aikaSekuneiksi(aika1)};
    int sekunitAika2{};
    do {

        aika2.tunti = asetaAika("Anna tunti: ", 0, 23);
        aika2.minuutti = asetaAika("Anna minuutti: ", 0, 59);
        aika2.sekunti = asetaAika("Anna sekunti: ", 0, 59);
        sekunitAika2 = aikaSekuneiksi(aika2);
        if (sekunitAika2 < sekunitAika1) {
            std::cout << "Jälkimmäisen ajan tulee olla suurempi kuin ensimmäisen ajan\n";
        }
    } while (sekunitAika2 < sekunitAika1);


    aika_ty erotus = aikojen_erotus(aika1, aika2);

    std::cout << "Aikojen erotus on: " << erotus.tunti << " tuntia " << erotus.minuutti << " minuuttia "
        << erotus.sekunti << " sekuntia\n";



}
