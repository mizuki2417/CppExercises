// equal関数のアルゴリズム

bool equal(const stack& s1, const stack& s2) {
    bool eq = true; // 等しければeq = true, そうでなければeq = false
    if(s1.sp! = s2.sp) eq = false; // データ数が違えば等しくない
    else {
        for (int j = 0;j < s1.sp && eq; j++) {
            if(s1.data[j]! = s2.data[j]) eq = false; // データが一致しなければ等しくない
        }
    }

    return eq;
}