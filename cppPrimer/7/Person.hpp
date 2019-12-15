#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::ostream;

class Person {
/**
 * 友元
 */
friend istream &read(istream &, Person &);
friend ostream &print(ostream &, const Person &);

public:
    /**
     * 成员函数
     */
    //获取姓名
    string getName() const { return name; }
    //获取地址
    string getAddress() const { return address; }

private:
    /**
     * 数据成员
     */
    //姓名
    string name;
    //地址
    string address;
};

istream &read(istream &is, Person &person)
{
    is >> person.name >> person.address;
}

ostream &print(ostream &os, const Person &person)
{
    os << person.getName() << " " << person.getAddress();
}