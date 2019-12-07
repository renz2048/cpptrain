#include "test.hpp"

int main()
{
    list<int> lst = {0,1,2,3,4,5,6};
    list<int>::const_iterator lst_beg = lst.cbegin(),
                              lst_end = lst.cend();
    lst_end = lst_beg;
    lst.erase(lst_beg,lst_end);
    return 0;
}