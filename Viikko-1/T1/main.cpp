#include <iostream>

int main() {
    //A)
    int muuttuja{};
    int* muuttuja_p {&muuttuja};

    //B)
    *muuttuja_p = 7;

    //C)
    std::cout << "muuttuja_p = " << muuttuja_p << '\n';
    std::cout << "muututja = " << muuttuja << '\n';

    //D)
    std::cout << "&muuttuja_p = " << &muuttuja_p << '\n';
    std::cout << "&muuttuja = " << &muuttuja << '\n';

    std::cout << "*&muuttuja = " << *&muuttuja << '\n';
    std::cout << "&*muuttuja_p = " << &*muuttuja_p << '\n';



    //E)
    std::cout << "sizeof(muuttuja) = " <<  sizeof(muuttuja) << '\n';
    std::cout << "sizeof(muuttuja_p) = " << sizeof(muuttuja_p) << '\n';

    //G)
    int muuttuja2{50};
    int* muuttuja2_p{};
    std::cout << "muuttuja2_p = " << *muuttuja2_p << '\n';

    muuttuja2_p = nullptr;
    std::cout << "muuttuja2_p = " << *muuttuja2_p << '\n';











    return 0;
}