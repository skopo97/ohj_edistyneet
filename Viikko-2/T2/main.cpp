#include <cmath>
#include <iostream>

int main() {
  std::cout << "Anna luku: ";
  double x{};
  std::cin >> x;
  // Otetaan pilkun jälkeen oleva luku talteen
  int pilkunJalkeen{static_cast<int>((x - static_cast<int>(x)) * 10)};
  // Pyöristetään luku lähimpään kokonaislukuun
  int n = static_cast<int>(round(x));

  if (pilkunJalkeen < 5) {
    std::cout << x << " siältyy välille [ " << n << ", " << n + 1 << " ]\n";
    // J
  } else if (pilkunJalkeen >= 5) {
    std::cout << x << " sisältyy välille [ " << n - 1 << ", " << n << " ]\n";
  }

  return 0;
}
