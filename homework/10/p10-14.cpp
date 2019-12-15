#include "p10.hpp"

int main()
{
    int i1, i2;
    cout << "请输入两个整型：" << endl;
    cin >> i1 >> i2;
    auto sum = [](const int &a1, const int &a2){ return a1 + a2; };
    cout << sum(i1, i2) << endl;
    return 0;
}