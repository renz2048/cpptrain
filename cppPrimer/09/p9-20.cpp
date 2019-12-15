#include "test.hpp"

int main()
{
    deque<int> di1, di2;
    list<int> li;
    int num;
    while (cin >> num)
    {
        li.push_back(num);
    }
    list<int>::const_iterator lit_beg = li.cbegin(),
                              lit_end = li.cend();
    while (lit_beg != lit_end)
    {
        (*lit_beg)%2?di1.push_back(*lit_beg):di2.push_back(*lit_beg);
        ++lit_beg;
    }
    
    deque<int>::const_iterator di1_beg = di1.cbegin(),
                               di1_end = di1.cend(),
                               di2_beg = di2.cbegin(),
                               di2_end = di2.cend();
    cout << "奇数：";
    while (di1_beg != di1_end)
    {
        cout << *di1_beg << " ";
        ++di1_beg;
    }
    cout << endl;
    cout << "偶数：";
    while (di2_beg != di2_end)
    {
        cout << *di2_beg << " ";
        ++di2_beg;
    }
    cout << endl;
    
    return 0;
}