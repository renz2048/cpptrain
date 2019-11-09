## 3.2

- string类输入运算符，忽略开头的空白，直到下一个空白，空白包括空格、换行、制表符等
- getline，遇到换行符为止，输入读取的数据，不包含结尾换行符

## 3.7

并未发现异同

## 3.8

我觉得使用范围for更好，原因在于使用auto和delctype声明类型使循环更加简洁

## 3.9

```
string s;
cout << s[0] << endl;
```

该程序想要打印字符串s的第一个字符；

不合法

s为空，此时通过下标访问将导致不可知错误

## 3.11

const char &

## 3.12

- `vector<vector<int>> ivec;`
  - 早期版本要求在外层vector对象右尖括号和其元素类型之间添加一个空格，形如`vector<vector<int> > ivec;`
- `vector<string> svec = ivec;`
  - 拷贝vector对象时，类型必须相同，svec是string类型，ivec是vector\<int>类型
  - `unknown type name 'string'; did you mean 'std::string'?`
- `vector<string> svec(10, "null");`
  - 正确，svec的初始值是10个"null"字符串

## 3.13

- `vector<int> v1;`
  - v1默认初始化，不含任何元素
- `vector<int> v2(10);`
  - v2含10个元素，均为0
- `vector<int> v3(10, 42);`
  - v3含10个元素，均为42
- `vector<int> v4{10};` 
  - v4含1个元素，为10
- `vector<int> v5{10, 42};`
  - v5含2个元素，为10和42
- `vector<string> v6{10};`
  - v6含10个元素，均为空字符串
- `vector<string> v7{10, "hi"};`
  - v7含10个元素，均为`"hi"`

## 3.16

参见p3-16.cpp

```
~ g++ -std=c++11 -o p3-16 p3-16.cpp
~ ./p3-16
v1 有 0 个元素：
v2 有 10 个元素：0 0 0 0 0 0 0 0 0 0
v3 有 10 个元素：42 42 42 42 42 42 42 42 42 42
v4 有 1 个元素：10
v5 有 2 个元素：10 42
v6 有 10 个元素：
v7 有 10 个元素：hi hi hi hi hi hi hi hi hi hi
```

## 3.17

参见p3-17.cpp

## 3.18

不合法，ivec是一个空vector对象，下标引用将带来不可知错误

通过ivec.push_back()将元素添加进vector

## 3.19

### 先创建空vector，再利用成员函数vector.push_back添加

```
vector<int> ivec;
for (int i = 0;i < 42; i++)
    ivec.push_back(42);
```

### 直接初始化

```
vector<int> vec(10, 42);
```

### 拷贝初始化

```
vector<int> vec2 = {42,42,42,42,42,42,42,42,42,42};
```

### 列表初始化

```
vector<int> vec{42,42,42,42,42,42,42,42,42,42};
```

当所有元素值相同，直接初始化更简洁，效率相当。

## 3.20

参见p3-20-1.cpp和p3-20-2.cpp