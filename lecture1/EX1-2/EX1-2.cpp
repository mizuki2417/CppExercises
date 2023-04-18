#include <iostream>

void swap(int& a, int& b) {
    int x;
    x = a;
    a = b;
    b = x;
}

int main() {
    int a = 5;
    int b = 6;
    swap(a, b);

    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    return 0;
}