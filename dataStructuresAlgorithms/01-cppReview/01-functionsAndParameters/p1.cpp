#include "functionsAndParameters.hpp"

int main()
{
    vector<string> vs = {"a", "b", "c", "b", "d"};
    int count1 = 0;
    string str;
    cout << "请输入待查找字符串：" << endl;
    cin >> str;

    for (const auto &s : vs)
    {
        cout << s << " ";
    }
    cout << endl;
    
    count1 = count(vs, str);
    cout << "个数：" << count1 << endl;
    return 0;
}