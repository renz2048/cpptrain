#include <iostream>
#include <string>

using namespace std;

int abc(const int &a, const int &b, const int &c)
{
    if (a < 0 && b < 0 && c < 0)
    {
        throw 1;
    }
    else if (a == 0 && b == 0 && c == 0)
    {
        throw 2;
    }
    return a + b * c;
}