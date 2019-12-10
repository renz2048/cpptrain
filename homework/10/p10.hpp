#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <algorithm>
#include <numeric>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;
using std::deque;
using std::forward_list;
using std::accumulate;
using std::fill_n;
using std::back_inserter;
using std::copy;
using std::unique;

template <typename T>
int print_container(T c)
{
    auto beg = c.cbegin();
    auto end = c.cend();
    while (beg != end)
    {
        cout << *beg << " ";
        ++beg;
    }
    cout << endl;
    return 0;
}

void elimDups(vector<string> &words)
{
    //sort，字典序
    sort(words.begin(), words.end());
    //unique，去除重复
    auto end_unique = unique(words.begin(), words.end());
    //erase，删除
    words.erase(end_unique, words.end());
    print_container(words);
}