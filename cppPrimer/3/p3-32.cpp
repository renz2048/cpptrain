#include "myvector.h"

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size], ib[array_size];
    for (auto beg = begin(ia); beg != end(ia); ++beg)
        *beg = array_size - (end(ia) - beg);

    auto beg = begin(ib);
    for ( auto i : ia)
        *beg++ = i;

    for ( auto i : ib)
        cout << i << " ";
    cout << endl;
    return 0;
}