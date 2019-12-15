#include "test.hpp"

int main()
{
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {1,2,3,7};
    if (v1 < v2) {
        cout << "v1 is small than v2" << endl;
    } else {
        cout << "v1 is not small than v2" << endl;
    }
    return 0;
}