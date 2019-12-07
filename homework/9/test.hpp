#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;
using std::deque;
using std::forward_list;


int print_forward_list(forward_list<string>);
forward_list<string> insert_string(forward_list<string>, string, string);

template <typename T>
int print_forward_list(forward_list<T> flst)
{
    auto beg = flst.cbegin();
    auto end = flst.cend();
    while (beg != end)
    {
        cout << *beg;
        ++beg;
    }
    cout << endl;
    return 0;
}