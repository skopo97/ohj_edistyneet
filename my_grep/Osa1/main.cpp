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

  std::string command = "echo " + inputString + " | grep -bo " + searchString;

  FILE* file = popen(command.c_str(), "r");
  char start[32];
  int currentPos {-1};

  if (file != NULL) {
    if (fgets(start, sizeof(start), file) != NULL) {
      currentPos = atoi(start);
    }
    pclose(file);
  }


  if (currentPos != -1) {
    std::cout << "\"" << searchString << "\" found in \"" << inputString << "\" at position " << currentPos << "\n";
  } else {
    std::cout << "\"" << searchString << "\" NOT found in \"" << inputString
              << "\"\n";
  }
  return 0;
}
