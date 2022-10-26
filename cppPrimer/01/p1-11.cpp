#include <iostream>
int main()
{
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0;
    int sum = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    v1 < v2 ? (v3 = v1,v4 = v2) : (v3 = v2,v4 = v1);
    while(v3 <= v4) {
        std::cout << v3++ << std::endl;
    }
    return 0;
}