## 1.1

- 系统：macOS Catalina 10.15
- g++：Apple clang version 11.0.0 (clang-1100.0.33.8)
- 编译指令：g++ -o main0 main.cpp

## 1.2

返回255

## 1.3

参见p1-3.cpp

```
~ g++ -o p1-3 p1-3.cpp 
~ ./p1-3   
Hello, World
```

## 1.4

参见p1-4.cpp

```
~ g++ -o p1-4 p1-4.cpp
~ ./p1-4 
Enter two numbers:
234345 2
234345乘以2的积是：468690
```

## 1.5

参见p1-5.cpp

```
~ g++ -o p1-5 p1-5.cpp
~ ./p1-5
Enter two numbers:
234 234
The sum of 234 and 234 is 468
```

## 1.6

`;`代表一个语句的结束，导致后面的语句`<<`操作符无左侧运算对象

## 1.7

```
p1-7-comment.cpp:5:27: warning: '/*' within block comment [-Wcomment]
```

## 1.8

```
std::cout << /* "*/" */;

~ g++ -o p1-8-comment  p1-8-comment.cpp
p1-8-comment.cpp:6:24: warning: missing terminating '"' character [-Winvalid-pp-token]
    std::cout << /* "*/" */;
                       ^
p1-8-comment.cpp:6:24: error: expected expression
1 warning and 1 error generated.
```

## 1.9

参见p1-9-accumulate.cpp

```
~ g++ -o p1-9-accumulate p1-9-accumulate.cpp 
~ ./p1-9-accumulate 
Sum of 50 to 100 inclusive is 3825
```

## 1.10

参见p1-10.cpp

```
~ g++ -o p1-10 p1-10.cpp                    
~ ./p1-10          
10 9 8 7 6 5 4 3 2 1 0
```

