#include "test.hpp"

int main()
{
    list<char *> articles;
    auto beg = articles.begin();
    auto end = articles.end();
    vector<string> s1(beg, end);
    return 0;
}