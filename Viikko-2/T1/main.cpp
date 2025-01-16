#include <iostream>
enum class Kolmiotyyppi { tasakylkinen, tasasivuinen, suorakulmainen };

template <typename T, typename U, typename C>
bool onKolmiollinen(T x, U x2, C x3, Kolmiotyyppi type) {
  // case suorakulmainen. Pythagoran lause tulee täyttyä
  if (type == Kolmiotyyppi::suorakulmainen) {
    if (x * x + x2 * x2 == x3 * x3 || x * x + x3 * x3 == x2 * x2 ||
        x2 * x2 + x3 * x3 == x * x) {
      return 1;
    } else {
      return 0;
    }
  }
  // case tasakylkinen. Kaksi sivua tulee olla yhtä pitkiä
  if (type == Kolmiotyyppi::tasakylkinen) {
    if ((x == x2 && x != x3) || (x == x3 && x != x2) || (x2 == x3 && x2 != x)) {
      return 1;
    } else {
      return 0;
    }
  }
  // case tasasivuinen. Kaikki sivut tulee olla yhtä pitkät
  if (type == Kolmiotyyppi::tasasivuinen) {
    if (x == x2 && x == x3 && x2 == x3) {
      return 1;
    } else {
      return 0;
    }
  }

  return false;
}

int main() {
  // Testit
  std::cout << onKolmiollinen(3, 5, 4, Kolmiotyyppi::suorakulmainen) << '\n';
  std::cout << onKolmiollinen(3, 3, 3, Kolmiotyyppi::suorakulmainen) << '\n';

  std::cout << onKolmiollinen(1, 3, 3, Kolmiotyyppi::tasakylkinen) << '\n';
  std::cout << onKolmiollinen(3, 3, 3, Kolmiotyyppi::tasakylkinen) << '\n';

  std::cout << onKolmiollinen(3, 3, 3, Kolmiotyyppi::tasasivuinen) << '\n';
  std::cout << onKolmiollinen(3, 4, 5, Kolmiotyyppi::tasasivuinen) << '\n';

  std::cout << "Anna 1. sivun pituus : ";
  double x{};
  std::cin >> x;
  std::cout << "Anna 2. sivun pituus : ";
  double x2{};
  std::cin >> x2;
  std::cout << "Anna 3. sivun pituus : ";
  double x3{};
  std::cin >> x3;

  if (onKolmiollinen(x, x2, x3, Kolmiotyyppi::suorakulmainen)) {
    std::cout
        << "Annetuista sivuista voidaan muodostaa suorakulmainen kolmio\n";
  } else if (onKolmiollinen(x, x2, x3, Kolmiotyyppi::tasakylkinen)) {
    std::cout << "Annetuista sivuista voidaan muodostaa tasakylkinen kolmio\n";
  } else if (onKolmiollinen(x, x2, x3, Kolmiotyyppi::tasasivuinen)) {
    std::cout << "Annetuista sivuista voidaan muodostaa tasasivuinen kolmio\n";
  } else {
    std::cout << "Sivuista ei voida muodostaa määriteltyä kolmiota\n";
  }
  return 0;
}
