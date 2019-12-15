#include "test.hpp"

int main()
{
    forward_list<string> flst;
    string word1, word2;
    while (cin >> word1)
    {
        cin >> word2;
        flst = insert_string(flst, word1, word2);
        print_forward_list(flst);
    }
    
    return 0;
}

forward_list<string> insert_string(forward_list<string> flst, string word1, string word2)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr == word1)
        {
            flst.insert_after(curr, word2);
            break;
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }
    if (curr == flst.end())
    {
        flst.insert_after(prev, word2);
    }
    
    return flst;
}