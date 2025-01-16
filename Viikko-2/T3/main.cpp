#include <iostream>

constexpr int min(const int x, const int y) {
    return std::min(x, y);

}

constexpr int min(const int x, const int y, const int z) {
    int minimi = std::min(x, y);
    return std::min(minimi, z);

}

constexpr int min(const int x, const int y, const int z, const int w) {
    int minimi = min(x, y);
    int minimi1 = min(z, w);
    return std::min(minimi, minimi1);

}



int main(){
    std::cout << min(5, 10) << '\n';
    std::cout << min(25, 10, 15) << '\n';
    std::cout << min(50, 105, 200, 212 << '\n');
}