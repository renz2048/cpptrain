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