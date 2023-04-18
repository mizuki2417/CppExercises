#include <iostream>

void inc(int &x) { // 参照渡しを宣言
    x++; // xに*などを付ける必要は無い
    std::cout << "x=" << x << std::endl;
}

int main() {
    int a = 5;
    inc(a); // 呼び出し時にも&は不要
    std::cout << "a=" << a << std::endl;

    return 0;
}