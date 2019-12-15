#include "test.hpp"

int main()
{
    forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr % 2)
        {
            curr = flst.erase_after(prev);
        }
        else
        {
            prev = curr;
            ++curr;
        }
        
    }
    auto beg = flst.begin();
    auto end = flst.end();
    while (beg != end)
    {
        cout << *beg;
        ++beg;
    }
    cout << endl;
    
    return 0;
}