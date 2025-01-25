#include <iostream>

int aika_sekunneiksi(const int tunti, const int minuutti, const int sekunti) {
    int sekunit{tunti * 3600 + minuutti * 60 + sekunti};
    return sekunit;
}

void sekunnit_ajaksi(int sekunit, int &minuutit, int &tunnit) {
    minuutit = sekunit / 60;
    tunnit = minuutit / 60;
    minuutit = minuutit % 60;
    sekunit = sekunit % 60;
    std::cout << tunnit << " tuntia " << minuutit << " minuuttia " << sekunit << " sekuntia" << '\n';
}


int main() {
    int sekunit {aika_sekunneiksi(2, 46, 40)};
    int minuutit{};
    int tunnit{};

    std::cout << "2 tuntia 46 minuuttia 40 sekuntia on " << sekunit <<" sekuntia. Joka on puolestaan ";
    sekunnit_ajaksi(sekunit, minuutit, tunnit);
    return 0;
}
