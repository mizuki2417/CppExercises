// メンバ関数の実態

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