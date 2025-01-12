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

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.