#include <iostream>
int main(int argc, const char** argv) {
    int currval = 0, val = 0, cnt = 0;
    if (!(std::cin >> currval)) {
        return 0;
    } else {
        cnt++;
    }

    while (std::cin >> val)
    {
        if (val == currval) {
            cnt++;
        } else {
            std::cout << currval << " occurs "
                      << cnt << " times" << std::endl;
            currval = val;
            cnt = 1;
        }
    }
    std::cout << currval << " occurs " << cnt << " times " << std::endl;
    return 0;
}