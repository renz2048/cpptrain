#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

vector<int>::const_iterator vector_find(vector<int>::const_iterator vbegin,
                 vector<int>::const_iterator vend,
                 const int value)
{
    while ((vbegin != vend) && (*vbegin != value)) {
        ++vbegin;
    }
    return vbegin;
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    auto cbegin = v1.cbegin();
    auto cend = v1.cend();
    int value;
    vector<int>::const_iterator result;
    cin >> value;
    result = vector_find(cbegin, cend, value);
    if (result != cend)
    {
        cout << *result << endl;
    }
    return 0;
}