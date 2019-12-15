## 9.1

(a) 字典序可能会有大量的任意位置插入，可使用list或forward_list

(b)末尾插入，头删除，使用deque

(c)使用vector，再对vector使用sort排序

## 9.2

`list<deque<int>> list1;`

## 9.3

- 指向同一个容器中的元素，或容器最后一个元素后面的位置
- end不在begin之前

## 9.4

参见p9-4.cpp

## 9.5

参见p9-5.cpp

## 9.6

改为`while (iter1 != iter2)`

## 9.7

如果索引指的是通过什么指向的话，应该使用迭代器

`vector<int>::const_iterator`

## 9.8

读取：`list<string>::const_iterator`

写入：`list<string>::iterator`

## 9.9

begin，仅当容器类型为const时才返回const_iterator类型的迭代器

cbegin，不管容器类型，均返回const_iterator类的迭代器

## 9.10

```
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it2 = v1.cbegin(), it4 = v2.cbegin();
```

v1是一个int类型的vector

v2是常量vector

it1是`vector<int>::iterator`

it2`vector<int>::const_iterator`

it3`vector<int>::const_iterator`

it4`vector<int>::const_iterator`

## 9.11

```
vector<int> v1;
vector<int> v2(v1);
b1 = v1.begin();
e1 = v1.end();
vector<int> v3(b1, e1);
vector<int> v4 = {1,2,3,4,5};
vector<int> v5(5);
vector<int> v6(5,1);
```

## 9.12

接受一个容器创建其拷贝的构造函数要求两个容器的类型及其元素的类型必须一致

接受两个迭代器创建拷贝的构造函数，不要求两个容器的类型相同，元素也可以不同（需要能够转换)

## 9.17

c1和c2两个容器需要都实现了<运算符

## 9.21

通过++iter使迭代器遍历list

## 9.22

若iv的第一个元素与some_val值不同，将导致无限循环

改为将insert的返回值赋给iter。

## 9.25

如果想等，不删除元素

如果elem2是尾后迭代器，删除elem1之后的所有元素

皆为尾后迭代器，则不删除元素

## 9.31

不能用于forward_list，因为forward_list有自己版本的insert和erase

## 9.32

函数参数列表初始化顺序未定义，将导致iter和iter++由于初始化顺序造成结果不同

## 9.33

有可能导致begin迭代器失效

## 9.34

将导致在第一个奇数前一直添加该奇数