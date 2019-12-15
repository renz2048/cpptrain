#include "myvector.h"

int main()
{
    vector<int> ivec;
    int num;
    int count = 0;
    while (cin >> num) {
        ivec.push_back(num);
        count++;
        if (count >= 10) {
            break;
        }
    }
    for (int i = 0; i < ivec.size() - 1; i++) {
        cout << ivec[i] + ivec[ivec.size() - i] << " ";
    }
    cout << endl;
}