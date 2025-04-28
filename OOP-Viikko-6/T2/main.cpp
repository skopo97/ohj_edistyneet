#include "Koulu.h"

#include <iostream>
#include <limits>
#include <vector>

#include "Opettaja.h"
#include "Opiskelija.h"


void lisaaOpettajaKouluun(Koulu& koulu) {
    std::cout << "Anna lisättävän opettajan nimi: ";
    std::string nimi{};
    std::getline(std::cin, nimi);

    std::cout << "Anna lisättävän opettajan ikä: ";
    int ika{};
    while (!(std::cin >> ika)) {
        std::cout << "Virheellinen syöte. Anna ikä numerona: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Anna lisättävän opettajan katuosoite: ";
    std::string katuosoite{};
    std::getline(std::cin, katuosoite);

    std::cout << "Anna lisättävän opettajan postinumero: ";
    int postinumero{};
    while (!(std::cin >> postinumero)) {
        std::cout << "Virheellinen syöte. Anna postinumero numerona: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::cout << "Anna lisättävän opettajan kunta: ";
    std::string kunta{};
    std::getline(std::cin, kunta);

    std::cout << "Anna lisättävän opettajan koulutusala: ";
    std::string koulutusala{};
    std::getline(std::cin, koulutusala);

    std::cout << "Anna lisättävän opettajan kurssit (tyhjä rivi lopettaa): ";
    std::vector<std::string> kurssit{};
    std::string kurssi{};
    while (true) {
        std::getline(std::cin, kurssi);
        if (kurssi.empty()) {
            break;  // Lopettaa
        }
        kurssit.push_back(kurssi);
    }
    std::cout << '\n';

    Opettaja* opettaja = new Opettaja(ika, nimi, Osoite(katuosoite, postinumero, kunta), koulutusala, kurssit);

    koulu.lisaaOpettaja(opettaja);
}


void lisaaKurssiOpettajalle(Koulu& koulu) {

    std::cout << "Opettajat:\n";
    for (const auto& opettaja : koulu.getOpettajat()) {
        std::cout << opettaja->getNimi() << '\n';
    }

    std::cout << "Anna opettajan nimi, jolle haluat lisätä kurssin: ";
    std::string nimi;
    std::getline(std::cin, nimi);  // Luetaan opettajan nimi


    bool loydetty = false;
    for (auto& opettaja : koulu.getOpettajat()) {
        if (opettaja->getNimi() == nimi) {
            opettaja->lisaaOpettajalleKurssi();
            loydetty = true;
            break;
        }

    }
    if (!loydetty) {
        std::cout << "Opettajaa ei löytynyt.\n";
    }

}
void lisaaOpiskelijaKouluun(Koulu& koulu) {
    std::cout << "Anna lisättävän opiskelijan nimi: ";
    std::string nimi{};
    std::getline(std::cin, nimi);

    std::cout << "Anna lisättävän opiskelijan ikä: ";
    int ika{};
    while (!(std::cin >> ika)) {
        std::cout << "Virheellinen syöte. Anna ikä numerona: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::cout << "Anna lisättävän opiskelijan katuosoite: ";
    std::string katuosoite{};
    std::getline(std::cin, katuosoite);

    std::cout << "Anna lisättävän opiskelijan postinumero: ";
    int postinumero{};
    while (!(std::cin >> postinumero)) {
        std::cout << "Virheellinen syöte. Anna postinumero numerona: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::cout << "Anna lisättävän opiskelijan kunta: ";
    std::string kunta{};
    std::getline(std::cin, kunta);

    std::cout << "anna lisättävän opiskelijan opiskelijanumero: ";
    std::string opiskelijaNro{};
    std::getline(std::cin, opiskelijaNro);


    std::cout << "Anna lisättävän opiskelijan opintopisteet: ";
    int opintoPisteet{};
    while (!(std::cin >> opintoPisteet)) {
        std::cout << "Virheellinen syöte. Anna postinumero numerona: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::cout << "Anna lisättävän opiskelijan suoritetut kurssit (tyhjä rivi lopettaa): ";
    std::vector<std::string> kurssit{};
    std::string kurssi{};
    while (true) {
        std::getline(std::cin, kurssi);
        if (kurssi.empty()) {
            break;  // Lopettaa
        }
        kurssit.push_back(kurssi);
    }
    std::cout << '\n';

    Opiskelija* opiskelija = new Opiskelija(ika, nimi, Osoite(katuosoite, postinumero, kunta), opiskelijaNro, kurssit, opintoPisteet);

    koulu.lisaaOpiskelija(opiskelija);
}

void lisaaKurssiOpiskelijalle(Koulu& koulu) {

    std::cout << "Opiskelijat:\n";
    for (const auto& opiskelija : koulu.getOpettajat()) {
        std::cout << opiskelija->getNimi() << '\n';
    }

    std::cout << "Anna opiskelijan nimi, jolle haluat lisätä kurssin: ";
    std::string nimi;
    std::getline(std::cin, nimi);

    bool loydetty = false;
    for (auto& opiskelija : koulu.getOpiskelijat()) {
        if (opiskelija->getNimi() == nimi) {
            opiskelija->lisaaOpiskelijalleKurssi();
            loydetty = true;
            break;
        }
    }

}

void tulostaOpettajat(const Koulu& koulu) {
    koulu.tulostaKaikkiOpettajat();
}

void tulostaOpiskelijat(const Koulu& koulu) {
    koulu.tulostaKaikkiOpiskelijat();
}

void tulostaKaikki(const Koulu& koulu) {
    koulu.tulostaKaikkiTiedot();
}

int main() {
    std::cout << "Anna koulun nimi: ";
    std::string koulunNimi;
    std::getline(std::cin, koulunNimi);

    Koulu koulu(koulunNimi);
    int valinta{};

    do {
        std::cout << "Valitse toiminto: \n";
        std::cout << "0. Lopeta\n";
        std::cout << "1. Lisää opettaja\n";
        std::cout << "2. Lisää opettajalle kurssi\n";
        std::cout << "3. Lisää opiskelija kouluun\n";
        std::cout << "4. Lisää opiskelijalle kurssi\n";
        std::cout << "5. Tulosta opettajat\n";
        std::cout << "6. Tulosta opiskelijat\n";
        std::cout << "7. Tulosta kaikki tiedot\n";
        std::cout << "Valintasi: ";

        while (!(std::cin >> valinta)) {
            std::cout << "Virheellinen syöte. Anna luku 0-7: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Tyhjentää puskurin valintanumeron jälkeen

        switch (valinta) {
            case 0:
                std::cout << "Ohjelma lopetetaan.\n";
            std::cout << "-------------------------------------------\n";
                break;
            case 1:
                std::cout << "Lisätään opettaja kouluun.\n";
                std::cout << "-------------------------------------------\n";
                lisaaOpettajaKouluun(koulu);
                break;
            case 2:
                std::cout << "Lisätään kurssi opettajalle.\n";
                std::cout << "-------------------------------------------\n";
                lisaaKurssiOpettajalle(koulu);
                break;
            case 3:
                std::cout << "Lisätään opiskelija kouluun.\n";
                std::cout << "-------------------------------------------\n";
                lisaaOpiskelijaKouluun(koulu);
                break;
            case 4:
                std::cout << "Lisätään kurssi opiskelijalle.\n";
                std::cout << "-------------------------------------------\n";
                lisaaKurssiOpiskelijalle(koulu);
                break;
            case 5:
                std::cout << "Tulostetaan opettajat.\n";
                std::cout << "-------------------------------------------\n";
                tulostaOpettajat(koulu);
                break;
            case 6:
                std::cout << "Tulostetaan opiskelijat.\n";
                std::cout << "-------------------------------------------\n";
                tulostaOpiskelijat(koulu);
                break;
            case 7:
                std::cout << "Tulostetaan kaikki tiedot.\n";
                std::cout << "-------------------------------------------\n";
                tulostaKaikki(koulu);
                break;
            default:
                std::cout << "Virheellinen valinta. Yritä uudelleen.\n";
        }
    } while (valinta != 0);

    return 0;
}
