#include "Sales_data.hpp"

int main()
{
    Sales_data s1,s2,s3;
    print(cout, s1);
    cout << endl;
    s1 = Sales_data("0111");
    print(cout, s1);
    cout << endl;
    s2 = Sales_data("0112", 3, 35.0);
    print(cout, s2);
    cout << endl;
    s3 = Sales_data(cin);
    print(cout, s3);
    cout << endl;
    return 0;
}