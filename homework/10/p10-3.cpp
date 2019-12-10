#include "p10.hpp"

int main()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,0};

    int sum = accumulate(vi.cbegin(), vi.cend(), 0);
    cout << sum << endl;
    return 0;
}