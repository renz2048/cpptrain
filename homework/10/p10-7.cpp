#include "p10.hpp"

int main()
{
    /*
    vector<int> vi;
    list<int> li;
    int i;
    while (cin >> i)
    {
        li.push_back(i);
    }
    print_container(li);
    vi.reserve(li.size() + 1);

    copy(li.begin(), li.end(), vi.begin());
    print_container(vi);
    return 0;
    */
    vector<int> vec;
    vec.reserve(10);
    fill_n(vec.begin(), 10, 0);
    print_container(vec);
    return 0;
}