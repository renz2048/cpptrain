#include <iostream>
#include "Sales_item.h"

/**
 * 将两个对象相加之前，先检查两个对象是否有相同的ISBN
 */
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "Data must refer to same ISBN"
                  << std::endl;
        return 1;
    }
}