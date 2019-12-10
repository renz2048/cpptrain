#include "p10.hpp"

int main()
{
    vector<double> v = {0,1,2,3,4,5,6,7,8,9};
    double sum = accumulate(v.cbegin(), v.cend(), 0);
    cout << sum << endl;
    return 0;
}