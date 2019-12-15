#include "myvector.h"

int main()
{
    vector<vector<int> > ivec;
    //vector<string> svec = ivec;
    vector<string> svec(10, "null");
    cout << svec.size() << endl;
    return 0;
}