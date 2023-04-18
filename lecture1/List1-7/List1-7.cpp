#include <iostream>

int add(int a, int b) { // (1)
    return a + b;
}

int add(int a, int b, int c) { // (2)
    return a + b + c;
}

double add(double a, double b) {  // (3)
    return a + b;
}

int main() {
    int x = 3, y = 4, z = 5;
    double p = 3.14, q = 2.44;

    std::cout << add(x, y) << std::endl; // (1)が呼ばれる
    std::cout << add(x, y, z) << std::endl; // (2)が呼ばれる
    std::cout << add(p, q) << std::endl; // (3)が呼ばれる
}