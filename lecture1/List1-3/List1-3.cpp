#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int *a =new int[n]; // 整数n個分の領域を割り当て、その先頭へポインタを返す
    for(int i = 0; i < n; i++) a[i] = i;

    delete [] a;
    return 0;
}