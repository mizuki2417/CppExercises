// クラスの仕様定義

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