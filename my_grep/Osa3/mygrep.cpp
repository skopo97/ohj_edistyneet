#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {

    //jos komentoriviargumentteja ei ole, niin pysyt��n ensimm�isess� osassa, eli k�ytt�j�n sy�tteess�
    if (argc == 1) {

        std::cout << "Anna merkkijono, josta etsit��n: ";
        std::string inputString;
        std::getline(std::cin, inputString);

        std::cout << "Anna etsitt�v� merkkijono: ";
        std::string searchString;
        std::getline(std::cin, searchString);

        size_t found = inputString.find(searchString);
        if (found != std::string::npos) {
            std::cout << "\"" << searchString << "\" l�ytyi merkkijonosta \""
                << inputString << "\" kohdasta " << found << "\n";
        }
        else {
            std::cout << "\"" << searchString << "\" EI l�ytynyt merkkijonosta \""
                << inputString << "\"\n";
        }
    }
    //Jos parametrej� on 3
    else if (argc == 3) {
        //Komentorivilt� saadut parametrit
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

        // Luetaan tiedostoa rivi rivilt�
        while (std::getline(file, line)) {
            //Jos rivilt� l�ytyy etsitt�v� teksti, niin tulostetaan se.
            //find palauttaa npos arvon, jos se ei l�yd� mit��n. Eli voidaan verrata onko tulos eri. Jos on
            //niin se tarkoittaa, ett� se l�ysi jotain.
            
             //Kasvatatetaan lineNumber muuttuujaa joka rivill�
            ++lineNumber;

            if (line.find(searchString) != std::string::npos) {
                //jos vastaavaisuus l�ytyi, kasvatetaan occurance muuttujaa yhdell�.
                ++occurance;
                std::cout << lineNumber << ":\t" << line << "\n";
                found = true;
            }

        }

        std::cout << "Occurrences of lines containing \"" << searchString << "\": " << occurance;
        //Jos ei l�ytynyt.
        if (!found) {
            std::cout << "Merkkijonoa \"" << searchString << "\" ei l�ytynyt tiedostosta \"" << fileName << "\".\n";

        }
    }

    else if (argc == 2 || argc > 3) {
        std::cout << "V��r� m��r� argumentteja\n";
    }
}