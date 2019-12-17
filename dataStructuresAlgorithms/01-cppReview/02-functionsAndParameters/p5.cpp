#include "functionsAndParameters.hpp"

int main()
{
    vector<int> vi(10, 1);
    int num;
    cout << "输入value：" << endl;
    cin >> num;
    iota(vi, num);
    for (const auto &i : vi)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}