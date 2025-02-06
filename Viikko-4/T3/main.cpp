#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::cout << "Enter your name : ";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    std::cout << "Describe yourself : ";
    std::string description;
    std::getline(std::cin >> std::ws, description);

    std::ofstream output("/home/Sami/Kurssit/ohj_edistyneet/Viikko-4/T3/index.html");

    if (!output) {
        std::cout << "Virhe avattaessa tiedostoa!\n";
        return 1;
    }

    output << "<html>\n";
    output << "<head>\n";
    output << "    <title>" << name << "</title>\n";
    output << "</head>\n";
    output << "<body>\n";
    output << "    <center>\n";
    output << "        <h1>" << name << "</h1>\n";
    output << "    </center>\n";
    output << "    <hr>\n";
    output << "    <p>" << description << "</p>\n";
    output << "</body>\n";
    output << "</html>\n";

    return 0;
}
