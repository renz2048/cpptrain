#include <iostream>

int main(int argc, const char** argv) {
    int i = 1, sum = 0;
    while (i <= 10)
    {
        sum += i++;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}