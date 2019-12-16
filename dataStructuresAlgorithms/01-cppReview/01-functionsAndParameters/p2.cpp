#include "functionsAndParameters.hpp"

int main()
{
    string str1 = "a";
    vector<string> vs(10, str1);
    cout << "请输入待赋值：" << endl;
    cin >> str1;
    fill(vs, str1);
    for (const auto &str2 : vs)
    {
        cout << str2 << " ";
    }
    cout << endl;
    return 0;
}