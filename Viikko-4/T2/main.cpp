#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

int main() {

  std::ifstream numeroLista(
      "/home/Sami/Kurssit/ohj_edistyneet/Viikko-4/T2/random.txt");

  std::string rivi{};
  int lukujenMaara{};
  int lukujenSumma{};
  if (numeroLista.is_open()) {
    while (std::getline(numeroLista, rivi)) {
      ++lukujenMaara;
      lukujenSumma += std::stoi(rivi);
    }
    numeroLista.close();

  } else {
    std::cout << "Tiedostoa ei voitu avata." << '\n';
  }

  std::cout << "Tiedostossa on " << lukujenMaara << " lukua.\n";
  std::cout << "Lukujen summa on " << lukujenSumma << '\n';
  std::cout << "Lukujen keskiarvo on " << lukujenSumma / lukujenMaara << '\n';

  return 0;
}
