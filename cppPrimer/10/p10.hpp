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
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void bigges(vector<string> &words,
             vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(),
                 [] (const string &s1, const string &s2)
                 { return s1.size() < s2.size(); });
    //获取一个迭代器，指向第一个满足size()>=sz的元素
    auto big_iter = find_if(words.begin(), words.end(),
             [sz] (const string &s)
             { return s.size() >= sz; });
    //计算满足size >= sz的元素的数目
    auto count = words.end() - big_iter;
    cout << count << " length" << endl;
    //打印长度大于等于给定值的单词，每个单词后面接一个空格
    for_each(big_iter, words.end(),
              [](const string &s)
              { cout << s << " ";});
    cout << endl;
}