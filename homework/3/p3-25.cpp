#include "myvector.h"

template<typename T>
void printVector(vector<T> vec)
{
    cout << " 有 "
         << vec.size() << " 个元素：";
    if (vec.size() != 0) {
        for (auto it = vec.begin();
             it != vec.end(); ++it) {
            cout << *it << " ";
        }
    }
    cout << endl;
}

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    int count = 0;
    auto beg = scores.begin();
    while (cin >> grade) {
        if (grade <= 100) {
            (*(beg + grade/10))++;
        }
        ++count;
        if (count >= 10)
            break;
    }

    printVector(scores);
    return 0;
}