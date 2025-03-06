#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {

    //jos komentoriviargumentteja ei ole, niin pysytään ensimmäisessä osassa, eli käyttäjän syötteessä
    if (argc == 1) {

        std::cout << "Anna merkkijono, josta etsitään: ";
        std::string inputString;
        std::getline(std::cin, inputString);

        std::cout << "Anna etsittävä merkkijono: ";
        std::string searchString;
        std::getline(std::cin, searchString);

        size_t found = inputString.find(searchString);
        if (found != std::string::npos) {
            std::cout << "\"" << searchString << "\" löytyi merkkijonosta \""
                << inputString << "\" kohdasta " << found << "\n";
        }
        else {
            std::cout << "\"" << searchString << "\" EI löytynyt merkkijonosta \""
                << inputString << "\"\n";
        }
    }
    //Jos parametrejä on 3
    else if (argc == 3) {
        //Komentoriviltä saadut parametrit
        //haettu teksti
        std::string searchString = argv[1];
        //tiedosto joka avataan
        std::string fileName = argv[2];

        //Avataan tiedosto.
        std::ifstream file(fileName);
        if (!file) {
            std::cerr << "Virhe: Tiedostoa \"" << fileName << "\" ei voitu avata.\n";
            return 1;
        }

        std::string line;
        std::size_t lineNumber{ 1 };
        int occurance{ 0 };
        bool found{ false };

        // Luetaan tiedostoa rivi riviltä
        while (std::getline(file, line)) {
            //Jos riviltä löytyy etsittävä teksti, niin tulostetaan se.
            //find palauttaa npos arvon, jos se ei löydä mitään. Eli voidaan verrata onko tulos eri. Jos on
            //niin se tarkoittaa, että se löysi jotain.
            
             //Kasvatatetaan lineNumber muuttuujaa joka rivillä
            ++lineNumber;

            if (line.find(searchString) != std::string::npos) {
                //jos vastaavaisuus löytyi, kasvatetaan occurance muuttujaa yhdellä.
                ++occurance;
                std::cout << lineNumber << ":\t" << line << "\n";
                found = true;
            }

        }

        std::cout << "Occurrences of lines containing \"" << searchString << "\": " << occurance;
        //Jos ei löytynyt.
        if (!found) {
            std::cout << "Merkkijonoa \"" << searchString << "\" ei löytynyt tiedostosta \"" << fileName << "\".\n";

        }
    }

    else if (argc == 2 || argc > 3) {
        std::cout << "Väärä määrä argumentteja\n";
    }
}