// 利用例

int main() {
    stack s; // stack型変数の宣言

    s.push(5); // メンバ関数の呼び出
    s.push(8);
    s.push(9);
    std::cout << s.top() << std::endl;

    s.pop();
    std::cout << s.top() << std::endl;

    s.pop();
    s.push(3);
    std::cout << s.size() << std::endl;

    while(!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    return 0;
}