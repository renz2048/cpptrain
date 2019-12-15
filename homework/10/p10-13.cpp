#include "p10.hpp"

bool isBiggerThan5(string s)
{
    return s.size() >= 5;
}

int main()
{
    vector<string> vs;
    string words;
    while (cin >> words)
    {
        vs.push_back(words);
    }
    auto mid_iter = partition(vs.begin(), vs.end(), isBiggerThan5);
    for (auto i = vs.cbegin(); i != mid_iter; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    
    return 0;
}