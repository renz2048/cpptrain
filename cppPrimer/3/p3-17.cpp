#include "myvector.h"

int main()
{
    vector<string> svec;
    string s;
    int count = 0;
    while (cin >> s) {
        svec.push_back(s);
        count++;
        if (count > 5)
            break;
    }
    for (auto &sInVec : svec) {
        for (auto &c : sInVec) {
            c = toupper(c);
        }
    }
    for (auto sInVec : svec) {
        for (auto c : sInVec) {
            cout << c << endl;
        }
    }
    return 0;
}