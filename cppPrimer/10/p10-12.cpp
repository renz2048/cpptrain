#include "p10.hpp"
#include "../1/Sales_item.h"

bool isIsbnShorter(const Sales_item &si1, const Sales_item &si2)
{
    return si1.isbn() < si2.isbn();
}

void compareIsbn(vector<Sales_item> &vsi)
{
    sort(vsi.begin(), vsi.end(), isIsbnShorter);
}

int main()
{
    vector<Sales_item> vsitem;
    Sales_item it1;
    while (cin >> it1)
    {
        vsitem.push_back(it1);
    }
    compareIsbn(vsitem);
    for (const auto &i : vsitem)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}