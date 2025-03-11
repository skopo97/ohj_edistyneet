#include "Henkilo.h"

int main() {

    Henkilo henkilo1{};
    Henkilo henkilo2{};

    henkilo1.setNimi("Markku");
    henkilo1.setIka(62);
    henkilo1.tulostaHenkilonTiedot();

    henkilo2.setNimi("Paula");
    henkilo2.setIka(26);
    henkilo2.tulostaHenkilonTiedot();

    return 0;
}