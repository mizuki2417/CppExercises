#include <iostream>
#include <assert.h>

class stack {
    private:
        static int max;
        int *data = new int[max];
        int sp;
    public:
        bool empty() {return sp == 0;}
        void push(int d) {assert(sp <= max); data[sp++] = d;}
        int top() {return data[sp-1];}
        void pop() {assert(0 < sp); --sp;}
        int size() {return sp;}
        stack(int sz = 100) {
            sp = 0;
            max = sz;
            data = new int[max];
            std::cout << max << std::endl;
        }
        ~stack() {delete [] data;}
};

int stack::max;

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