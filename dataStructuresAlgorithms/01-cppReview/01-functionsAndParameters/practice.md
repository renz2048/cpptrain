#### 1. 解析为什么以下程序的交换函数没有把形参 x 和 y 所对应的实参的值交换。如何修改代码，使实参的值得到交换？

```c++
void swap(int x, int y)
{//交换整数x和y
    int temp=x;
    x=y;
    y=temp;
}
```

x，y是函数swap的形参（formal parameter），当函数运行结束，形参类型的析构函数（destructor）负责释放形式参数，形式参数的值不会复制到对应的实参。

改为：

```c++
void swap(int &x, int &y)
{//交换整数x和y
    int temp=x;
    x=y;
    y=temp;
}
```

#### 2. 编写一个模板函数 count，返回值是数组 a[0:n-1] 中 value 出现的次数。测试你的代码。

一个效率低下的实现：参见 dataStructuresAlgorithms/01-cppReview/01-functionsAndParameters/functionsAndParameters.hpp 中的 count：

```c++
template<typename T>
int count(vector<T> &vt, T &tem)
{
    int count = 0;
    for (const auto &str1 : vt)
    {
        if (str1 == tem)
        {
            ++count;
        }
    }
    
    return count;
}
```

#### 3. 编写一个模板函数 fill，给数组 a[start:end-1] 赋值 value。测试你的代码。

````c++
template<typename T>
void fill(vector<T> &vt, T &t)
{
    for (auto &v : vt)
    {
        v = t;
    }
}
````

#### 4. 编写一个模板函数 inner_product，返回值是 ![](http://latex.codecogs.com/gif.latex?\sum_{i=0}^{n-1}a[i]*b[i])。测试你的代码。

```c++
template<typename T>
double inner_product(vector<T> &vt1, vector<T> &vt2)
{
    T sum = 0;
    for (int i = 0; i < vt1.size(); i++)
    {
        sum += vt1[i] * vt2[i];
    }
    
    return sum;
}
```

#### 5. 编写一个模板函数 iota，使 a[i]=value+i， ![](http://latex.codecogs.com/gif.latex?0\leq%20i%20%3Cn)。测试你的代码。

```c++
template<typename T>
void iota(vector<T> &vt,const T &t)
{
    for (int i = 0; i < vt.size(); i++)
    {
        vt[i] = t + i;
    }
}
```

#### 6. 编写一个模板函数 is_sorted，当且仅当 a[0:n-1] 有序时，返回值是 true。测试你的代码。

#### 7. 编写一个模板函数 mismatch，返回值是使不等式 ![](http://latex.codecogs.com/gif.latex?a[i\]%20\neq%20b[i])成立的最小索引 i，![](http://latex.codecogs.com/gif.latex?0%20\leq%20i%20%3C%20n)。测试你的代码。

#### 8. 下面的函数头是具有不同签名的函数吗？为什么？

- [ ] `int abc(int a, int b, int c)`
- [ ] `float abc(int a, int b, int c)`

是。具有相同数量的参数和相同类型的参数，是相同签名的函数

#### 9. 假设有一个程序包含了程序 1-1 和程序 1-2 的 abc 函数。下面的语句分别调用了哪一个 abc 函数？哪一条语句会出现编译错误？为什么？

- [ ] `cout << abc(1, 2, 3)<< endln;`
- [ ] `cout<<abc(1.0F, 2.0F, 3.0F)<<endln;`
- [ ] `cout<<abc(1, 2, 3.0F)<<endln;`
- [ ] `cout<<abc(1.0, 2.0, 3.0)<<endln;`
