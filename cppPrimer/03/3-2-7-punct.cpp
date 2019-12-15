#include "string-test.h"

int main()
{
    string s("Hello World!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s) {
        if(ispunct(c)) {
            ++punct_cnt;
        }
    }
    cout << punct_cnt << endl;
    return 0;
}