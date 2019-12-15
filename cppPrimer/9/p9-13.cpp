#include "test.hpp"

int main()
{
    list<int> lin1(5, 1);
    auto b1 = lin1.begin();
    auto e1 = lin1.end();
    while (b1 != e1)
    {
        cout << *b1;
        ++b1;
    }
    cout << endl;
    b1 = lin1.begin();
    
    list<double> ldo1(b1, e1);
    auto bd1 = ldo1.begin();
    auto ed1 = ldo1.end();
    while (bd1 != ed1) {
        cout << *bd1;
        ++bd1;
    }
    cout << endl;
    return 1;
}