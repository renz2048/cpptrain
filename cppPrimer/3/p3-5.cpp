//#include "string-test.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, ss;
    while (cin >> s)
    {
        ss += s;
        cout << ss << endl;
    }
    cout << ss << endl;
    return 0;
}