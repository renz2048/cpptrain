#include "p10.hpp"

void bigger_rz(vector<string> &words, vector<string>::size_type sz)
{
    //将words按照字典序排序，删除重复单词
    elimDups(words);
    //按长度排序，长度相同的单词按照字典序排序
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b){ return a.size() < b.size(); });
    //将words中长于等于sz的单词于小于sz的单词分开
    auto mid = partition(words.begin(), words.end(), [sz](const string &a){ return a.size() >= sz; });
    //打印长度大于等于sz的单词，每个单词后面接一个空格
    for_each(words.begin(), mid, [](const string &a){ cout << a << " "; });
    cout << endl;
}

int main()
{
    vector<string> vs;
    string words;
    while (cin >> words)
    {
        vs.push_back(words);
    }
    bigger_rz(vs, 3);
    return 0;
}