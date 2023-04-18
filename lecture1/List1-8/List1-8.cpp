#include <iostream>

int max(int a, int b) {
    return a > b ? a: b;
}

int main() {
    int x, y, z;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    z = max(x+1, y) + 3;

    std::cout << "z = " << z << std::endl;

    return 0;
}