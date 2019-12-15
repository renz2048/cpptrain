#include "string-test.h"

int main()
{
    string str("some string");
    for (auto c : str) {
        cout << c << endl;
    }
    return 0;
}