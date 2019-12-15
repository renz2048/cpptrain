#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, currBook;
    if (std::cin >> currBook) {
        while (std::cin >> book) {
            if (book.isbn() == currBook.isbn()) {
                currBook += book;
            } else {
                std::cout << currBook << std::endl;
                currBook = book;
            }
        }
        std::cout << currBook << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}