#include "p10.hpp"

int main()
{
    vector<string> vs;
    string words;
    while(cin >> words) {
        vs.push_back(words);
    }
    elimDups(vs);
    return 0;
}