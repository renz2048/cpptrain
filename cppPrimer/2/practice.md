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

## 2.25

### a

```
int* ip, i, &r = i;
```

- ip是一个int型指针
- i是一个int型变量
- r是一个int型变量的引用

### b

```
int i, *ip = 0;
```

- i是一个int型变量
- ip是一个int型空指针

### c

```
int* ip, ip2;
```

- ip是一个int型指针
- ip2是一个int型变量

## 2.26

```
const int buf; //为对const对象初始化
int cnt = 0;
const int sz = cnt;
++cnt; ++sz; //sz是const对象，初始化后不能再改变其值
```

## 2.27

### a

```
int i = -1, &r = 0;
```

合法，r是一个常量引用

### b

```
int *const p2 = &i1;
```

合法，p2是一个常量指针，指向int型变量

### c

```
const int i = -1, &r = 0;
```

合法，r是一个const int型常量的引用

### d

```
const int *const p3 = &i2;
```

p3是一个常量指针，指向一个const int型对象，i2若不是const int型对象，则不合法

### e

```
const int *p1 = &i2;
```

p1指向一个const int型对象，i2若不是const int型对象，则不合法

### f

```
const int &const r2;
```

不合法，第二个const多余

### g

```
const int i2 = i, &r = i;
```

若i不是const int型对象，不合法

## 2.28

- `int i, *const cp;`
  - i是int型对象
  - cp是常量指针，指向int型对象
- `int *p1, *const p2;`
  - p1是指向int型对象的指针
  - p2是指向int型对象的常量指针
- `const int ic, &r = ic;`
  - ic是const int型对象
  - r是const int型对象的引用
- `const int *const p3;`
  - p3是指向const int型对象的常量指针
- `const int *p;`
  - p是指向const int型对象的指针

## 2.29

- `i = ic;`
  - 非法，ic是const int型对象，不能赋值给int型对象
- `p1 = p3;`
  - 不合法，p3是一个指向const int型对象的常量指针
- `p1 = &ic;`
  - 不合法，p1只能指向int型对象
- `p3 = &ic;`
  - 合法
- `p2 = p1;`
  - 合法
- `ic = *p3;`
  - 合法

## 2.30

```
const int v2 = 0; int v1 = v2;
//不能改变v2的值，这是一个顶层const
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
//允许改p2的值，第一个是底层const；不能改变p3的值，第二个是顶层const
```

## 2.31

```
r1 = v2;
//普通的int &不能绑定到int常量上
p1 = p2; p2 = p1;
//p2包含底层const
p1 = p3;
//p3包含底层const
p2 = p3;
```

## 2.32

`int null = 0, *p = null;`

不合法，null是一个int对象，p是一个int *指针，可改为`int null = 0, *p = nullptr;`

## 2.33

- `a = 42;`
- `b = 42;`
- `c = 42;`
- `d = 42;`
  - d是一个整型指针，我觉得不能赋字面值
- `e = 42;`
  - e是一个指向整型常量的指针，不能赋字面值
- `g = 42;`
  - g是一个整型常量引用，不能重新赋值

## 2.34

参见p2-34.cpp

- d = 24;
  - 不能将`int`类型的值分配到`int *`类型
  - assigning to 'int *' from incompatible type 'int'
- e = 24;
  - 不能将`int`类型的值分配到`const int *`类型
  - Assigning to 'int *' from incompatible type 'int'
- g = 24;
  - 表达式必须是可修改的左值
  - cannot assign to variable 'g' with const-qualified type 'const int &'

## 2.35

```
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;
```

- j是整型变量
- k是一个常量引用，绑定到i
- p是一个指向整型常量的指针
- j2是一个整箱常量
- k2是一个常量引用，绑定到k

## 2.36

```
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```

a是整型变量，b是整型变量，c是整型变量，d是整型引用，绑定到a

a = 3, b = 4, c = 4, d = 3,

## 2.37

```
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```

c是整型变量，d是整型引用，绑定到a

c = 3, d = 3

## 2.38

decltype的结果类型与表达式密切相关。如果decltype使用的表达式是一个变量，则decltype返回该变量的类型，包括顶层const和引用

相同：

```
int a = 0;
decltype(a) b = a;
```

```
int a = 0;
auto b = a;
```

不同：

```
const int a = 0;
decltype(a) b = 0;
```

```
const int a = 0;
auto b = a;
```

## 2.39

`error: expected ';' after struct`

