#include <iostream>
#include <vector>
#include <math>
//prime_half
int isPrime(int x) {
    if (x == 0 || x == 1) {
        return false;
    }
    for (int i {2}; i <= x / 2; ++i) {
        if (x % i == 0) {
            return false;
       
  }
    }
    return true;
}

int primeSqrt(int x) {
    if (x == 0 || x == 1) {
        return false;
    }
    for (int i {2}; i <= std::sqrt(x); ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int primeAll(int x) {
    if (x == 0 || x == 1) {
        return false;
    }
    for (int i {2}; i <= x - 1; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    std::vector<int> alkuLuvut{};

    for (int i{0}; i <= 10000; ++i) {
        //Tuottaa saman tuloksen jokaisella aliohjelmalla
        //isPrime();
        //primeHalf();
        //primeAll();
        if (isPrime(i) == 1) {
            alkuLuvut.push_back(i);
        }
    }

    int riviVaihto{0};
    for (auto c : alkuLuvut) {
        std::cout << c << ' ';
        ++riviVaihto;
        if (riviVaihto == 10) {
            std::cout << "\n";

            riviVaihto = 0;
        }
    }
    if (riviVaihto != 0) {
        std::cout << '\n';
    }

    int lukujenMaara {static_cast<int>(alkuLuvut.size())};
    double prosenttiOsuus {static_cast<double>(lukujenMaara) / 10000 * 100};
    std::cout << "Tutkittuja luku oli 10000 ja alkulukuja löytyi " << lukujenMaara << " kappaletta, joka on "
    << prosenttiOsuus << " prosenttia kaikista luvuista." << '\n';
    return 0;
}
