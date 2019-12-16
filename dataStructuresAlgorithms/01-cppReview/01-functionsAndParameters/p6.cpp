#include "functionsAndParameters.hpp"

int main()
{
    vector<int> vi1 = {1, 3, 5, 7, 8, 23};
    vector<int> vi2 = {2, 5, 2, 6, 3};
    if (is_sorted(vi1))
    {
        cout << "vi1: ";
        for (const auto i : vi1)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    if (is_sorted(vi2))
    {
        cout << "vi2: ";
        for (const auto i : vi2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}