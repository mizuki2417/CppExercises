#include <iostream>

int main () {
    std::cout << "hello" << std::endl; // 出力の構文. std::coutは標準出力

    int n;
    std::cout << "n = ";
    std::cin >> n; // 入力の構文. stdin::cinは標準入力

    int s = 0;
    for(int i = 1; i <= n; i++)
        s += i ;
    
    std::cout << "sum(1.." << n << ")=" << s << std::endl;

    return 0;
}