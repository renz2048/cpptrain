# 1 开始

## 1.2 初始输入输出

```
~ g++ -o 1-2-sum 1-2-sum.cpp
~ ./1-2-sum
Enter two numbers:
123 43
The sum of 123 and 43 is 166
```

## 1.4 控制流

### 1.4.1 while

参见1-4-while.cpp

```
~ g++ -o 1-4-while 1-4-while.cpp       
~ ./1-4-while   
Sum of 1 to 10 inclusive is 55
```

### 1.4.2 for

参见1-4-for.cpp

```
~ g++ -o 1-4-for 1-4-for.cpp 
~ ./1-4-for  
Sum of 1 to 10 inclusive is 55
```

### 1.4.3

参见1-4-3.cpp

```
~ g++ -o 1-4-3 1-4-3.cpp    
~ ./1-4-3  
4 5 6 45
Sum is 60
```

### 1.4.4

参见1-4-4.cpp

```
~ g++ -o 1-4-4 1-4-4.cpp
~ ./1-4-4               
23 23 23 23 45 56 56 56 56 34 34
23 occurs 4 times 
45 occurs 1 times 
56 occurs 4 times 
34 occurs 2 times
```

## 1.5

参见1-5-add-oob.cpp

```
~ g++ -o 1-5-add-oob 1-5-add-oob.cpp
In file included from 1-5-add-oob.cpp:2:
./Sales_item.h:56:20: warning: defaulted function definitions are a C++11 extension [-Wc++11-extensions]
    Sales_item() = default;
                   ^
./Sales_item.h:70:25: warning: in-class initialization of non-static data member is a C++11 extension [-Wc++11-extensions]
    unsigned units_sold = 0; // explicitly initialized
                        ^
./Sales_item.h:71:20: warning: in-class initialization of non-static data member is a C++11 extension [-Wc++11-extensions]
    double revenue = 0.0;
                   ^
3 warnings generated.
~ ./1-5-add-oob
0-210-70353-x 4 24.99
0-210-70353-x 4 99.96 24.99
```

参见1-5-oob.cpp

```
~ g++ -o 1-5-oob 1-5-oob.cpp
In file included from 1-5-oob.cpp:2:
./Sales_item.h:56:20: warning: defaulted function definitions are a C++11 extension [-Wc++11-extensions]
    Sales_item() = default;
                   ^
./Sales_item.h:70:25: warning: in-class initialization of non-static data member is a C++11 extension
      [-Wc++11-extensions]
    unsigned units_sold = 0; // explicitly initialized
                        ^
./Sales_item.h:71:20: warning: in-class initialization of non-static data member is a C++11 extension
      [-Wc++11-extensions]
    double revenue = 0.0;
                   ^
3 warnings generated.
~ ./1-5-oob <BookSalesRecord >SalesStatistics
```

