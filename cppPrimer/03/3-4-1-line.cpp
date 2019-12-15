#include "myvector.h"

int main()
{
    vector<string> text;
    string s;
    int count = 0;
    while (getline(cin, s))
    {
        text.push_back(s);
        ++count;
        if (count >= 5)
            break;
    }
    for (auto it = text.begin();
         it != text.end() && !it->empty(); ++it)
        cout << *it << endl;
    return 0;
}