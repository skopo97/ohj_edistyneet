#include <iostream>
#include <chrono>
#include <ctime>

void sekunnit_ajaksi(int sekunit, int &minuutit, int &tunnit) {
    minuutit = sekunit / 60;
    tunnit = minuutit / 60;
    minuutit = minuutit % 60;
    sekunit = sekunit % 60;
    std::cout << tunnit << " tuntia " << minuutit << " minuuttia " << sekunit << " sekuntia" << '\n';
}

int main() {
    int minuutit{};
    int tunnit{};
    int sekunit{10000};
    std::cout << sekunit << " sekuntia on: ";
    sekunnit_ajaksi(sekunit, minuutit, tunnit);
}
