#include "string-test.h"

int main()
{
    string s;
    while (getline(cin, s)) {
        for (auto c : s) {
            if (!ispunct(c)) {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}