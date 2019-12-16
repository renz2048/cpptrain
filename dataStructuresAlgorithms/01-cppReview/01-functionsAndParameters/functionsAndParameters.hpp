#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::for_each;

template<typename T>
int count(const vector<T> &vt, const T &tem)
{
    int count = 0;
    for (const auto &str1 : vt)
    {
        if (str1 == tem)
        {
            ++count;
        }
    }
    
    return count;
}

template<typename T>
void fill(vector<T> &vt, const T &t)
{
    for (auto &v : vt)
    {
        v = t;
    }
}

template<typename T>
double inner_product(const vector<T> &vt1,const vector<T> &vt2)
{
    T sum = 0;
    for (int i = 0; i < vt1.size(); ++i)
    {
        sum += vt1[i] * vt2[i];
    }
    
    return sum;
}

template<typename T>
void iota(vector<T> &vt,const T &t)
{
    for (int i = 0; i < vt.size(); ++i)
    {
        vt[i] = t + i;
    }
}

template<typename T>
bool is_sorted(const vector<T> &vt)
{
    int sort = 1;
    bool flag;
    auto beg = vt.begin();
    auto next = beg - 1;
    *beg <= *next?flag = true:flag = false;

    for (; next != vt.end(); ++beg, ++next)
    {
        if (*beg <= *next && !flag)
            return false;
    }
    if (vt.end() == next)
    {
        return true;
    }
    else
    {
        return false;
    }
}