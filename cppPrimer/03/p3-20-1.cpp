#include "myvector.h"

int main()
{
    vector<int> ivec;
    int i;
    int count = 0;
    while (cin >> i) {
        ivec.push_back(i);
        count++;
        if (count >= 10) {
            break;
        }
    }
    for (int j = 0; j < ivec.size() - 1; j++) {
        cout << ivec[j] + ivec[j+1] << " ";
    }
    cout << endl;
}