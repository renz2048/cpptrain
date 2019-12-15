#include "Sales_data.hpp"

int main()
{
    Sales_data total;
    if (read(cin, total)) { //读取第一笔交易
        Sales_data trans;   //保存下一笔交易，从第二笔开始
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total);
                total = trans;
            }
        }
        print(cout, total);
        cout << endl;
    } else {
        cout << "No data ?!" << endl;
    }
}