#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

bool vector_find(vector<int>::const_iterator vbegin,
                 vector<int>::const_iterator vend,
                 const int value)
{
    while ((vbegin != vend) && (*vbegin != value)) {
        ++vbegin;
    }
    if (vbegin == vend) {
        return false;
    } else {
        return true;
    } 
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    auto cbegin = v1.cbegin();
    auto cend = v1.cend();
    bool test;
    int value;
    cin >> value;
    test = vector_find(cbegin, cend, value);
    cout << test << endl;
    return 0;
}