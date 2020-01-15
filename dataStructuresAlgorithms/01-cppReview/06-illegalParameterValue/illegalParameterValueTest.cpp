#include "illegalParameterValue.hpp"

int abc(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        throw illegalParameterValue("All parameters should be > 0");
    }
    return a + b * c;
}

int main()
{
    try
    {
        cout << abc(2, 0, 4) << endl;
    }
    catch(illegalParameterValue e)
    {
        e.outputMessage();
    }
    return 1;
}