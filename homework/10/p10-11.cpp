#include "p10.hpp"

int main()
{
    vector<string> vs;
    string words;
    while (cin >> words)
    {
        vs.push_back(words);
    }
    elimDups(vs);
    stable_sort(vs.begin(), vs.end(), isShorter);
    for (const auto &s : vs)
    {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}