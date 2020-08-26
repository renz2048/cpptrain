#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class illegalParameterValue
{
private:
    string message;
public:
    illegalParameterValue() : message("Illegal parameter value") {}
    illegalParameterValue(char* theMessage) {
        message = theMessage;
    }
    void outputMessage() {
        cout << message << endl;
    }
};
