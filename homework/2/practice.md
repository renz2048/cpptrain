## 2.1

int、long、long long和short的区别：

- 所占比特数，int 占 16bit，long 占32bit，long long 占64bit，short 占16bit
- 如何解释比特代表的意义

无符号类型和有符号类型的区别：

- 表示范围不同
- 无符号类型所有bit用于存储值

float于double的区别：

- float 有 7 个有效位
- double 有16 个有效位

## 2.2

利率应选择double，本金和付款应选择unsigned long long

利率是比例数，有可能为小数，因此使用浮点类，为了更加精确，使用double；

本金和付款，由于不为负，因此选择无符号类；为了不溢出，选择long long

## 2.3

参见p2-3.cpp

## 2.5

### a

- `'a'`：char型，8bit
- `L'a'`：宽字符型，wchar_t 类型
- `"a"`：字符串型，结尾处添加空字符`'\0'`
- `L"a"`：宽字符串型

### b

- `10`：十进制整型，类型是int
- `10u`：无符号十进制整型，类型是unsigned
- `10L`：长整型，类型是long
- `10uL`：无符号整型，类型是 unsigned long
- `012`：八进制整型，类型int
- `0xC`：十六进制整型，类型int

### c

- `3.14`：浮点型
- `3.14f`：单精度浮点型，类型是float
- `3.14L`：扩展精度浮点型，类型是long float

### d

- `10`：十进制整型
- `10u`：无符号整型，类型是unsigned
- `10.`：浮点型
- `10e-2`：单精度浮点型

## 2.6

```
int month = 9, day = 7; //取int、long、long long中尺寸最小
int month = 09, day = 07; //取int、unsigned int、long、unsigned long、 long long、unsigned long long中尺寸最小
```

## 2.7

### a

`"Who goes with F\145rgus?\012"`，表示`Who goes with Fergus?`，数据类型是字符串型

### b

3.14e1L，表示浮点型数31.4，数据类型是long double

### c

1024f，表示浮点数1024.0，数据类型是float

### d

3.14L，表示浮点数3.14，数据类型是long double

## 2.8

参见p2-8.cpp

## 2.9

### a

`std::cin >> int input_value;`

不知为何不行，推测变量的定义不能在 `>>` 右侧

### b

`int i = { 3.14 }`

此为 `列表初始化` 的方式，将一个 `float` 类型初始化为一个 `int` 类型存在丢失信息的风险，编译器将报错

### c

`double salary = wage = 9999.99`

此操作导致 `wage` 未声明

### d

`int i = 3.14;`

合法，将丢失小数部分

## 2.10

```
std::string global_str; //'\0'
int global_int; //0
int main()
{
    int local_int;  //未定义
    std::string local_str; //未定义
}
```

## 2.11

- extern int ix = 1024; 定义
- int iy; 定义
- extern int iz; 声明

## 2.12

- `int double = 3.14;` 关键字
- `int _;` 不符合规范-无实际含义
- `int catch-22;`只能以字母、数字、下划线组成
- `int 1_or_2 = 1;` 必须以字母或下划线开头
- `double Double = 3.14;`不符合规范-一般用小写字母

## 2.13

100

## 2.14

p2.14.cpp

```
~ g++ -o p2.14 p2.14.cpp
~ ./p2.14
100 45
```

## 2.15

- `int ival = 1.01;`  合法，将丢失小数部分
- `int &rval1 = 1.01;`  引用必须绑定到对象上
- `int &rval2 = ival;`合法
- `int &rval3;`引用必须初始化

## 2.16

```
int i = 0, &r1 = i;
double d = 0, &r2 = d;
r2 = 3.14159;
r2 = r1;
i = r2;
r1 = d; //不合法，对引用重新绑定
```

## 2.17

p2-17.cpp

```
g++ -o p2-17 p2-17.cpp
~ ./p2-17
10 1
```

## 2.18

p2-18.cpp

## 2.19

指针是一个对象，指针初始化后分配空间，指针的值和指向可以改变

引用不是一个对象，引用初始化后不分配空间，引用的值不能改变，无法绑定到其它对象

## 2.20

计算42的平方

## 2.21

```
int i = 0;
double* dp = &i;  //类型不匹配，double类型指针不匹配int类型指针
int *ip = i; //不能把int变量赋值给指针
int *p = &i;
```

## 2.22

`if (p) // ...`

如果p为空指针，条件为false，否则为true

`if (*p) // ...`

如果p指向的值为空或0，条件为false，否则为true

## 2.23

不能，指针所在内存空间可能恰好有值，而这些值又被当作某个地址

## 2.24

```
int i = 42;
void *p = &i;
long *lp = &i;
```

void指针可以存放任意对象的地址，lp为long型指针不匹配int型指针

