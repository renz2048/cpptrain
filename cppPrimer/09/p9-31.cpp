#include "test.hpp"

int main()
{
    forward_list<int> fli = {0,1,2,3,4,5,6,7,8,9};
    auto curr = fli.begin();
    auto prev = fli.before_begin();
    while (curr != fli.end())
    {
        if (*curr % 2)
        {
            fli.insert_after(prev, *curr);
            prev = curr;
            ++curr;
        } else
        {
            curr = fli.erase_after(prev);
        }
    }
    print_forward_list(fli);
    
    return 0;
}