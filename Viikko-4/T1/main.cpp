

#include <iostream>

int main() {
    // Paikallinen char-taulukko, kilotavuina
    //1000000 onnistui
    //8000000 onnistui
    //8300000 onnistui
    //8500000 epäonnistu
    //9000000 epäonnistu

    try {
        [[maybe_unused]]char paikallinenTaulukko[8300000];
        std::cout << "Paikallinen char-taulukko varattu onnistuneesti.\n";
    } catch (const std::exception& e) {
        std::cerr << "Paikallisen char-taulukon varaaminen epäonnistui: " << e.what() << '\n';;
    }

    // Dynaaminen char-taulukko, kilotavuina
    bool onnistui {true};
    size_t size = 1000000;
    while (onnistui) {
        try {
            [[maybe_unused]]char* dynaaminenTaulukko = new char[size];
            std::cout << "Dynaaminen char-taulukko varattu onnistuneesti.\n";
            delete[] dynaaminenTaulukko;
            size *= 2;
        } catch (const std::bad_alloc& e) {
            onnistui = false;
            std::cout << "Yritetty varattu muistimäärä: " << size/ (1024*1024) << " megatavua\n";
            std::cout << "Gigatavuissa: " << size/ (1024*1024*1024) << " gigatavua\n";

            std::cerr << "Dynaamisen char-taulukon varaaminen epäonnistui: " << e.what() << '\n';
        }
    }


}