#include "test.hpp"

int main()
{
    list<int> l1 = {1,2,3,4};
    vector<int> v1 = {1,2,3,4};
    auto lbeg = l1.begin();
    auto vbeg = v1.begin();
    if (*lbeg < *vbeg)
    {
        cout << "haha" << endl;
    } else
    {
        cout << "emmm" << endl;
    }
    
    
    return 0;
}