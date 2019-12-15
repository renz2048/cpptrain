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
    vector<int> ivec(10,2);
    for(auto b = ivec.begin(); b != ivec.end(); ++b) {
        *b *= 2;
    }

    printVector(ivec);
    return 0;
}