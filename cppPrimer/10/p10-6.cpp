#include "p10.hpp"

int main()
{
    vector<int> vi;
    fill_n(back_inserter(vi), 10, 0);
    print_container(vi);
    return 0;
}