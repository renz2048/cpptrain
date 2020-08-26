#include "irregular.hpp"

int main()
{
    int a,b,c;
    cout << "请输入三个整形：" << endl;
    cin >> a >> b >> c;
    try
    {
        abc(a, b, c);
    }
    catch(int e)
    {
        cout << e << endl;
    }
    
    return 0;
}