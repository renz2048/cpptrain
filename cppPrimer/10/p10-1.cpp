#include "p10.hpp"

int main()
{
    int num;
    vector<int> vi;
    cout << "请输入一串int序列：" << endl;
    while (cin >> num)
    {
        vi.push_back(num);
    }
    cout << "请输入待查找的数字：" << endl;
    cin >> num;
    auto result = count(vi.cbegin(), vi.cend(), num);
    cout << "出现了" << result << "次" << endl;
    
    return 0;
}