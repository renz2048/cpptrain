#include "p10.hpp"

int main()
{
    int i1, i2;
    cout << "请输入两个整型变量：" << endl;
    cin >> i1 >> i2;
    auto sum = [i1](const int &a){ return i1 + a; };
    cout << sum(i2) << endl;
    return 0;
}