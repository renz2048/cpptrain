#include "myvector.h"

int main()
{
    vector<int> ivec;
    int i;
    int count = 0;
    while (cin >> i) {
        ivec.push_back(i);
        count++;
        if (count >= 10) {
            break;
        }
    }
    auto beg = ivec.begin();
    auto end = ivec.end();
    for (;beg != end - 1; ++beg) {
        cout << *beg + *(beg + 1) << " ";
    }
    cout << endl;
}