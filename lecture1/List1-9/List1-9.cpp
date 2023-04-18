#include <iostream>

int main() {
    int x, y, z;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    z = ((x+1 > y) ? x + 1: y) + 3;

    std::cout << "z = " << z << std::endl;

    return 0;
}