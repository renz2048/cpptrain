#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ostream;
using std::istream;

/**
 * 表示显示器中的一个窗口
 * contents：保存Screen内容
 * cursor：光标位置
 * height、width：屏幕高、宽
 */
class Screen
{
friend class Window_mgr;
friend void Window_mgr::clear(ScreenIndex);
public:
    typedef string::size_type pos;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd) {}
    Screen(pos ht, pos wd, char c) :
           height(ht), width(wd),
           contents(ht * wd, c) {}
    //读取光标处的字符
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos v);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(ostream &os) {
        do_display(os); return *this;
    }
    const Screen &display(ostream &os) const {
        do_display(os); return *this;
    }
    pos size() const;
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
    void do_display(ostream &os) const { os << contents; }
};

inline Screen &Screen::move(pos r, pos v)
{
    pos row = r * width;
    cursor = row + v;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    //cout << contents << cursor;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char c)
{
    contents[r * width + col] = c;
    return *this;
}

inline Screen::pos Screen::size() const
{
    return height * width;
}