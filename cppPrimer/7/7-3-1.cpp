#include "Window_mgr.hpp"

int main()
{
    Screen myscreen;
    char c = myscreen.get();
    cout << c << endl;
    c = myscreen.get(0,0);
    cout << c << endl;

    Screen myscreen1(24, 80);
    c = myscreen1.get();
    cout << c << endl;
    c = myscreen1.get(0,0);
    cout << c << endl;

    Screen myscreen2(24, 80, 'c');
    c = myscreen2.get();
    cout << c << endl;
    c = myscreen2.get(0,0);
    cout << c << endl;

    return 0;
}