#include <iostream>

using std::istream;
using std::ostream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

struct Sales_data {
    //成员函数
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    //返回售出书籍的平均价格
    double avg_price() const;
    //数据成员
    std::string bookNo;      //本书编号
    unsigned units_sold = 0; //本书销量
    double revenus = 0.0;    //本书总销售额
};

/**
 * 非成员接口函数，定义和声明都必须在类的外部
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