#include "test.hpp"

template <typename T>
T print_container(T con)
{
    auto beg = con.cbegin();
    auto end = con.cend();
    while (beg != end)
    {
        cout << *beg;
        ++beg;
    }
    cout << endl;
    return con;
}