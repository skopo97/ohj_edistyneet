#include <cstdlib>
#include <iostream>
#include <unistd.h>

int main() {
  std::cout << "Give a string from which to search for : ";
  std::string inputString;
  std::getline(std::cin >> std::ws, inputString);

  std::cout << "Give a search string: ";
  std::string searchString;
  std::getline(std::cin >> std::ws, searchString);

  // Rakennetaan shell komento joka käyttää grep komentoa merkkijonon etsimiseen. -bo palauttaa indeksin ja etsityn merkkijonon
  std::string command = "echo " + inputString + " | grep -bo " + searchString;

  //Avataan uusi prosessi ja luetaan sen tulos.
  FILE* file = popen(command.c_str(), "r");

  //Tähän tallennetaan grepin antama tulos
  char start[32];
  //aloitus positio -1, eli tulosta ei ole.
  int currentPos {-1};

  //Jos proesssin avaaminen onnistui
  if (file != NULL) {
    //Tämä lukee grepin antaman tuloksen, jos se onnistui. eli ei ole null.
    if (fgets(start, sizeof(start), file) != NULL) {
      //tällä saadaan indeksi, josta se löytyi, koska atoi lukee rivin alusta siihen asti kunnes se ei löydä enää numeroa. Eli, jos
      //tulos on esim 7:kissa, niin se lukee merkin 7 ja lopettaa. Tallennetaan se muuttuujaan currentPos
      currentPos = atoi(start);
    }
    //Suljetaan prosessi
    pclose(file);
  }

  //jos currentPois ei ole -1, eli tulosta ei ole niin kerrotaan, että löytyi ja mistä löytyi
  if (currentPos != -1) {
    std::cout << "\"" << searchString << "\" found in \"" << inputString << "\" at position " << currentPos << "\n";
    //Muuten kerrotaan, että ei grep ei löytänyt mitään.
  } else {
    std::cout << "\"" << searchString << "\" NOT found in \"" << inputString
              << "\"\n";
  }
  return 0;
}
