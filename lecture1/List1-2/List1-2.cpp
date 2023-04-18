#include <iostream>

int main() {
    int *a = 0; // ポインタの宣言
    a = new int; // int 1古文の領域を割り当て、そこへのポインタを返す

    *a = 100;
    std::cout << *a << std::endl;

    delete a; // 領域の解放
    return 0;
}