#include "string-test.h"

int main()
{
    string s;
    s = "Hello World!!!";
    for (char &c : s) {
        if (!isspace(c))
            c = 'X';
    }
    cout << s << endl;
    return 0;
}