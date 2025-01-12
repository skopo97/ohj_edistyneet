#include <iostream>

void swappausOsoitin(int *a, int *b) {
    int temp{*a};
    *a = *b;
    *b = temp;
}

void swappausViite(int &a, int &b) {
    int temp{a};
    a = b;
    b = temp;
}
int main() {
    int a{1};
    int b{2};
    int c{3};
    int d{4};

    std::cout << "a: " << a << " b: " << b << " ennen swappia\n";
    swappausOsoitin(&a, &b);
    std::cout << "a: " << a << " b: " << b << " swapin jälkeen\n";

    std::cout << '\n';

    std::cout << "c: " << c << " d: " << d << " ennen swappia\n";
    swappausViite(c, d);
    std::cout << "c: " << c << " d: " << d << " swapin jälkeen\n";
}