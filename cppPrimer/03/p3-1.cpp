#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int sum = 0, val = 50;
    for (int i = 0; i < val; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}