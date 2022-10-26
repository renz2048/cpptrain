#include <iostream>

int main(int argc, const char** argv) {
    std::cout << "Input number: " << std::endl;
    int daffodils = 0, a = 0, b = 0, c = 0;
    std::cin >> daffodils;
    a = daffodils % 10;
    b = daffodils / 10 % 10;
    c = daffodils / 100;
    if (daffodils == a*a*a + b*b*b + c*c*c)
        std::cout << daffodils << " is daffodils!" << std::endl;
    else
        std::cout << daffodils << " is not daffodils!" << std::endl;
    return 0;
}