#include <iostream>
#include "Paivays.h"

int main() {
    Paivays paivays;
    paivays.asetaPaivays();
    paivays.tulostaPaivays();
    std::cout << "Päivä eteenpäin: \n";
    paivays.lisaaYksiPaiva();
    paivays.tulostaPaivays();

    return 0;

}
