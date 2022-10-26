#include <iostream>

int tryDaffodils(int daffodils);

int main(int argc, const char** argv) {
    for (size_t i = 100; i < 1000; i++) {
        if (tryDaffodils(i) == i)
            std::cout << i << std::endl;
    }
    return 0;
}

int tryDaffodils(int daffodils)
{
    int sum = 0, remainder = 0;
    if (daffodils < 100 || daffodils > 999) {
        std::cout << "wrong number: " << daffodils << std::endl;
        return -1;
    }

    do {
        remainder = daffodils % 10;
        sum += remainder * remainder * remainder;
        daffodils /= 10;
    } while (daffodils);

    return sum;
}