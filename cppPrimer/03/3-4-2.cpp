#include "myvector.h"

int main()
{
    vector<int> text{1,2,3,4,5,6,7,8,9,10};
    int sought;
    cout << "please input the number you want to find: " << endl;
    cin >> sought;
    auto beg = text.begin();
    auto end = text.end();
    auto mid = beg + (end - beg)/2;
    while (mid != end && *mid != sought) {
        if (sought < *mid) {
            end = mid;
        } else {
            beg = mid + 1;
        }
        mid = beg + (end -beg)/2;
    }
    if (mid != end) {
        cout << "local at " << mid - beg << endl;
    }

    return 0;
}