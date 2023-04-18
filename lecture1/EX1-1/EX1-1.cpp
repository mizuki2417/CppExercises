#include <iostream>

int main() {
    std::cout << "hello" << std::endl;

    double h, w;       // 身長, 体重の入力
    std::cout << "height = ";
    std::cin >> h;
    std::cout << "weight = ";
    std::cin >> w;

    double b = 0;
    b = w / h / h;        // BMIの計算
    std::cout << "BMIは" << b << "です。" << std::endl;

    return 0;
}