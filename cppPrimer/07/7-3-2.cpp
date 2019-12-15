#include "Screen.hpp"

int main()
{
    Screen myScreen(5, 3);
    myScreen.set('#').display(cout);
    const Screen blank(5, 3);
    blank.display(cout);

    return 0;
}