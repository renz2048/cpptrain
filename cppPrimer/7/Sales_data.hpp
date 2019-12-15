#include <iostream>

using std::istream;
using std::ostream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Sales_data {
public:
/**
 * 非成员函数友元声明
 */
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);

    /**
     * 构造函数
     */
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p) :
               bookNo(s), units_sold(n), revenus(n*p) {}
    Sales_data(istream &is);

    /**
     * 成员函数
     * 所有成员，声明必须在类的内部；
     * 定义可以在类内，如isbn，是隐式的inline函数；
     * 定义也可以在类外，如combine；
     * 
     * 成员函数通过一个额外的隐式参数this访问调用它的对象
     */
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
private:
    //返回售出书籍的平均价格
    double avg_price() const;

    //数据成员
    std::string bookNo;      //本书编号
    unsigned units_sold = 0; //本书销量
    double revenus = 0.0;    //本书总销售额
};

/**
 * 非成员接口函数，作为接口和组成部分
 * 定义和声明都必须在类的外部
 * add、read、print
 */
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const {
    if (units_sold)
        return revenus/units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenus += rhs.units_sold;
    return *this;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenus = item.units_sold * price;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenus << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

Sales_data::Sales_data(istream &is)
{
    read(is, *this);
}