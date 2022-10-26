#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    cout << "输入年份：" << endl;
    int year = 0;
    cin >> year;
    if ( ((year % 4 == 0) && (year % 100 != 0)) ||
        (year % 400 == 0) ) {
        cout << year << "是闰年。" << endl;
    } else {
        cout << year << "不是闰年。" << endl;
    }
    return 0;
}