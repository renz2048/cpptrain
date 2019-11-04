#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    //读取一对交易目录
    std::cin >> item1 >> item2;
    //打印和
    std::cout << item1 + item2 << std::endl;
    return 0;
}