// 利用例2

#include <iostream>
#include <assert.h>

class stack {
    private:
        static const int max = 100;
        int data[max];
        int sp;

    public:
        bool empty();
        void push(int);
        int top();
        void pop();
        int size();
        stack(); // コンストラクタ
        ~stack(); // デストラクタ
};

bool stack::empty() {
    return sp == 0;
}

void stack::push(int d) {
    assert(sp <= max);
    data[sp++] = d;
}

int stack::top() {
    return data[sp-1];
}

void stack::pop() {
    assert(0 < sp);
    --sp;
}

int stack::size() {
    return sp;
}

stack::stack() {sp = 0;}

stack::~stack(){}

int main() {
    stack* s = new stack; // スタックの動的割当て

    s ->push(5); // メンバ関数の呼び出し（ポインタバージョン）
    s ->push(8);
    s ->push(9);
    std::cout << s ->top() <<std::endl;

    s ->pop();
    std::cout << s->size() << std::endl;

    s ->pop();
    s ->push(3);
    std::cout << s->size() << std::endl;
    
    while(!s -> empty()) {
        std::cout << s ->top() << std::endl;
        s ->pop();
    }

    delete s; // スタックの解放
    return 0;
}