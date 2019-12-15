#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1(10, 'c'), s2;
    cout << s1 << endl;
    cout << s2 << endl;
    s1 = s2;
    cout << s1 << endl;
    return 0;
}