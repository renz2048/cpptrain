#include <iostream>
int main()
{
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;

    auto &g = ci;

    a = 24;
    b = 24;
    c = 24;
    //d = 24;
    //e = 24;
    g = 24;
    return 0;
}