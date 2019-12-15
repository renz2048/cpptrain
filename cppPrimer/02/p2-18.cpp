#include <iostream>
int main()
{
    int *ip1 = nullptr;
    int i = 4, j = 5;
    int *ip2 = &i;
    ip1 = &i;

    ip2 = &j;
    *ip1 = j;

    return 0;
}