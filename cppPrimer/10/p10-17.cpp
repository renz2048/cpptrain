#include "p10.hpp"
#include "../1/Sales_item.h"

int main()
{
    vector<Sales_item> vsitem;
    Sales_item it1;
    while (cin >> it1)
    {
        vsitem.push_back(it1);
    }
    sort(vsitem.begin(), vsitem.end(), [](const Sales_item &si1, const Sales_item &si2){ return si1.isbn() < si2.isbn(); });
    for_each(vsitem.begin(), vsitem.end(), [](const Sales_item &s){ cout << s << endl; });
    return 0;
}