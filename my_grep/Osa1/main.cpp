#include <iostream>
#include <string>

int main() {
    // Pyydetään käyttäjältä merkkijono
    std::cout << "Anna merkkijono, josta etsitään : ";
    std::string inputString;
    std::getline(std::cin, inputString);

    // Pyydetään käyttäjältä etsittävä merkkijono
    std::cout << "Anna etsittävä merkkijono : ";
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
