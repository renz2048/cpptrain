#include "functionsAndParameters.hpp"

int main()
{
    vector<int> vi1 = {1,2,3,4,5,6,7};
    vector<int> vi2 = {1,2,3,5,6,7};
    vector<int> vi3 = {1,2,3};
    vector<int> vi4;
    cout << mismatch(vi1,vi2) << endl;
    cout << mismatch(vi1, vi3) << endl;
    cout << mismatch(vi1, vi4) << endl;
    return 0;
}