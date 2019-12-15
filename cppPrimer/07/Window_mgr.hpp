#include "Screen.hpp"

/**
 * 窗口管理类
 * 包含一个Screen类型的vector
 */
class Window_mgr
{
public:
    //窗口中每个屏幕的编号
    using ScreenIndex = vector<Screen>::size_type;
    //按照编号将指定的Screen重置为空白
    void clear(ScreenIndex);
private:
    vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.heights * s.width, ' ');
}