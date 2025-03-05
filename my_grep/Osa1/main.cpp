#include <iostream>
#include <string>

int main() {
    // Pyydetään käyttäjältä merkkijono
    std::cout << "Give a string from which to search for : ";
    std::string inputString;
    std::getline(std::cin, inputString);

    // Pyydetään käyttäjältä etsittävä merkkijono
    std::cout << "Give a search string : ";
    std::string searchString;
    std::getline(std::cin, searchString);

    // Etsitään alimerkkijonon ensimmäinen esiintymiskohta
    size_t found = inputString.find(searchString);

    if (found != std::string::npos) { // Tarkistetaan löytyikö merkkijono
        std::cout << "\"" << searchString << "\" löytyi merkkijonosta \"" 
                  << inputString << "\" kohdasta " << found << "\n";
    } else {
        std::cout << "\"" << searchString << "\" EI löytynyt merkkijonosta \"" 
                  << inputString << "\"\n";
    }

    return 0;
}
