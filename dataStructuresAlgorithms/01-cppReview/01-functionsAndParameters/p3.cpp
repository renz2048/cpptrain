#include "functionsAndParameters.hpp"

int main()
{
    vector<int> vi1(10, 3), vi2(10, 7);
    int sum = 0;
    sum = inner_product(vi1, vi2);
    cout << sum << endl;
    return 0;
}