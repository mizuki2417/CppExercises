#include <iostream>

void inc (int x) { // 整数値xを受け取って
    x++;
    std::cout << "x=" << x << std::endl;
}

int main() {
    int a = 5;
    inc(a); // aを引数にしてincを呼び出すと
    std::cout << "a=" << a << std::endl;

    return 0;
}