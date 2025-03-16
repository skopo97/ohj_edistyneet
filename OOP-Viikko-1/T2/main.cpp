#include <iostream>
#include "Paivays.h"
int main() {

    Paivays tanaan;
    tanaan.setPaiva(16);
    tanaan.setKuukausi(3);
    tanaan.setVuosi(2025);

    Paivays huomenna;
    huomenna.setPaiva(17);
    huomenna.setKuukausi(3);
    huomenna.setVuosi(2025);

    std::cout << "Tänään : ";
    tanaan.tulostaPaivays();
    std::cout << "Huomenna : ";
    huomenna.tulostaPaivays();


    return 0;
}
