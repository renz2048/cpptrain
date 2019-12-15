#include "myvector.h"

template<typename T>
void printVector(vector<T> vec, int i)
{
    cout << "v" << i << " 有 "
         << vec.size() << " 个元素：";
    if (vec.size() != 0) {
        for (auto c : vec) {
           cout << c << " ";
        }
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};

    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    printVector(v1, 1);
    printVector(v2, 2);
    printVector(v3, 3);
    printVector(v4, 4);
    printVector(v5, 5);
    printVector(v6, 6);
    printVector(v7, 7);
}