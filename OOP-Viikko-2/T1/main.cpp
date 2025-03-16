#include "Henkilo.h"

int main() {
    Henkilo tuntematon;
    tuntematon.tulostaHenkilonTiedot();

    Henkilo pekka("Pekka", 20);
    pekka.tulostaHenkilonTiedot();

    //Tällöin kutsutaan pareaametritonta rakentajaa
    Henkilo henkilot[10];

    return 0;
}