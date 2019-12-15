#include "myvector.h"

int main()
{
    string s("some string");
    /* s第一个单词的首字母大小
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    */
    /* s的第一个单词大写 */
    for (auto it = s.begin();it != s.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
    }
    cout << s << endl;
    return 0;
}