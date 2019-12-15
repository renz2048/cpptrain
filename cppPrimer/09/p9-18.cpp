#include "test.hpp"

int main()
{
    deque<string> ds;
    string word;
    while (cin >> word) {
        ds.push_back(word);
    }
    deque<string>::const_iterator it1 = ds.cbegin(), it2 = ds.cend();
    while (it1 != it2)
    {
        cout << *it1;
        ++it1;
    }
    cout << endl;
    
    return 0;
}