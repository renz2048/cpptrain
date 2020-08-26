#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
bool make2dArray(T ** &x, int numberOfRows, T rowSize[])
{
    try
    {
        //创建行指针
        x = new T * [numberOfRows];

        //为第 i 行分配 rowSize[i] 个空间
        for (size_t i = 0; i < numberOfRows; ++i)
        {
            x[i] = new T [rowSize[i]];
        }
        return true;
    }
    catch(bad_alloc)
    {
        return false;
    }
}

template<class T>
T* changeLength1D(T * &x, int oldLength, int newLength)
{
    //分配 newLength 的数组
    T *n = new T [newLength];
    //复制元素到新数组
    newLength = newLength <= oldLength ? newLength:oldLength;
    for (size_t i = 0; i < newLength; ++i)
    {
        n[i] = x[i];
    }
    //释放原数组占用空间
    delete [ ] x;
    return n;
}