#include "Henkilo.h"

void funktioHenkilo() {
    Henkilo funktioHenkilo = Henkilo("funktioHenkilo", 27);
    std::cout << "FunktioHenkilo funktiosta poistuttu\n";
}

int main() {

    Henkilo* ossi = new Henkilo("Ossi", 30);
    ossi->tulostaHenkilonTiedot();
    //Tarvitsee manuaalisesti tuhota dynaamisesti varattu muisti.
    delete ossi;


    Henkilo tuntematon;
    tuntematon.tulostaHenkilonTiedot();

    Henkilo pekka("Pekka", 20);
    pekka.tulostaHenkilonTiedot();

    //Tällöin kutsutaan pareaametritonta rakentajaa
    //Henkilo henkilot[10];

    int x{0};
    int y{5};
    if (x < y) {
        Henkilo ifHenkilo = Henkilo("ifHenkilo", 25);
        std::cout << "If lausekkeen sisällä\n";
    }
    std::cout << "If lausekkeesta poistuttu\n";

    for (int x{0}; x < 2; ++x) {
        std::cout << "for lausekkeen sisällä\n";
        Henkilo forHenkilo = Henkilo("forHenkilo", 19);
    }
    std::cout << "For lausekkeesta poistuttu\n";

    std::cout << "Siirrytään funktioHenkilo funktioon\n";
    funktioHenkilo();

    //Purkaja kutsutaan silloin kun oliot menevät "pois näkyvistä", eli out of scope.
    //Mikä lie onkaan oikea suomenkielinen nimitys
    return 0;
}