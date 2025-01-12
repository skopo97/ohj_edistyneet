#include <iostream>
#include <vector>

void swappausOsoitin(int *a, int *b) {
    int temp{*a};
    *a = *b;
    *b = temp;
}

int main() {

    std::vector<int> taulukko = {1,2,3,4,5,6,7,8,9,10};

    int *alku = &taulukko.at(0);
    int *loppu = &taulukko.at(taulukko.size() - 1);

    while (alku < loppu) {
        swappausOsoitin(alku, loppu);
        ++alku;
        --loppu;
    }

    std::cout << "Taulukko käännettynä : ";

    for (std::size_t i{0}; i < taulukko.size(); ++i) {
        std::cout << taulukko.at(i) << " ";
    }
}