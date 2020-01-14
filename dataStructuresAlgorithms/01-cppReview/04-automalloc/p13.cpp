#include "automalloc.hpp"

int main()
{
    int *array1 = new int [50];
    for (size_t i = 0; i < 50; i++)
    {
        array1[i] = i;
    }
    
    int *array2 = changeLength1D(array1, 50, 40);
    return 0;
}