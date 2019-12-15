#include "myvector.h"

int main()
{
    vector<string> text;
    string s;
    int count = 0;
    while (cin >> s)
    {
        text.push_back(s);
        ++count;
        if (count >= 6)
            break;
    }
    for (auto it = text.begin();it != text.end() && !it->empty(); ++it) {
        auto sp = it->begin();
        while (sp != it->end())
            *sp = toupper(*sp);
        cout << *it << endl;
    }
    return 0;
}