#include <iostream>

void hanoi(int n, const char p1, const char p2, const char p3);

int main(int argc, const char** argv) {
    int n = 0;
    const char p1 = 'a';
    const char p2 = 'b';
    const char p3 = 'c';
    std::cin >> n;
    hanoi(n, p1, p2, p3);
    return 0;
}

void hanoi(int n, const char p1, const char p2, const char p3)
{
    if (n == 1)
        std::cout << p1 << " to " << p3 << std::endl;
    else
    {
        hanoi(n-1, p1, p3, p2);
        std::cout << p1 << " to " << p3 << std::endl;
        hanoi(n-1, p2, p1, p3);
    }
}