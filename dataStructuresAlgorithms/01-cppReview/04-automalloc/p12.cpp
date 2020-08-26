#include "automalloc.hpp"

int main()
{
    int **x;
    int r = 3;
    int *c = new int[r + 1];
    for (int i = 0; i < r + 1; ++i)
    {
        c[i] = i;
    }

    make2dArray(x, r, c);
    
    return 0;
}