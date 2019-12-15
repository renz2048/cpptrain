#include "test.hpp"

int main()
{
    list<string> ls;
    string word;
    while (cin >> word)
    {
        ls.push_back(word);
    }
    list<string>::const_iterator it1 = ls.cbegin(),
                                 it2 = ls.cend();
    while (it1 != it2)
    {
        cout << *it1;
        ++it1;
    }
    cout << endl;
    
    return 0;
}