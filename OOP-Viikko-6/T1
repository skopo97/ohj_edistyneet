#include <iostream>
#include "Henkilo.h"
#include "Opiskelija.h"
#include "Opettaja.h"


int main() {

Opettaja tehtava1 (20, "Matti Meikäläinen", Osoite("Katu 1", "12345", "Helsinki"),
    "Matematiikka", {"Matikka 1", "Matikka 2"});
    std::cout << "Muutetaan ikää, kun tietue on vielä private\n";
    tehtava1.muokkaaIkaa(30);
    std::cout << "Opettajan ikä on nyt: " << tehtava1.getIka() << '\n';
    //Tästä tulee virhe, koska m_ika on private, ja tällöin opettaja luokka ei pääse niihin käsiksi suoraan.
    //Protected sallii sen, että aliluokat pääsevät käsiksi suoraan ilman setteriä.


}
