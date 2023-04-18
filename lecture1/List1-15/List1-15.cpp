// メンバ関数のインライン化

class stack {
    private:
        static const int max = 100;
        int data[max];
        int sp;
    public:
        bool empty() {return sp == 0;}
        void push(int d) {assert(sp <= max); data[sp++] = d;}
        int top() {return data[sp-1];}
        void pop() {assert(0 < sp); --sp;}
        int size() {return sp;}
        stack() {sp = 0;}
        ~stack() {sp = 0;}
};