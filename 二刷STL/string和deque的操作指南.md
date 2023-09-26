### 1. string类

#### 构造与赋值
- **构造**: `string s1;` 默认构造，`string s2(a);` 用字符数组构造，`string s3("hello world");` 拷贝构造。
- **赋值**: 使用 `=` 运算符，`assign()` 方法。

```cpp
string s1;
s1 = "hell world";  // 赋值
string s2;
s2 = s1;  // 拷贝赋值
s4.assign("hello world");  // assign赋值
```

#### 字符串操作
- **拼接**: 使用 `+=` 运算符和 `append()` 方法。
- **查找**: `find()` 返回第一次出现的位置，`rfind()` 从右往左查找。
- **替换**: `replace()` 方法。
- **比较**: `compare()` 方法，返回0表示相等，负数表示小于，正数表示大于。
- **插入和删除**: `insert()`, `erase()` 方法。
- **子串提取**: `substr()` 方法。

#### 访问与修改
- **访问字符**: 通过 `[]` 运算符或 `at()` 方法访问。
- **修改字符**: 通过 `[]` 运算符或 `at()` 方法修改。

```cpp
str[0] = 'x';
str.at(1) = 'x';
```

### 2. deque类

#### 构造与赋值
- **构造**: `deque<int> r;` 默认构造。
- **赋值**: 使用 `=` 运算符，`assign()` 方法。

```cpp
deque<int> r1;
r1 = r;  // 赋值
r2.assign(r.begin(), r.end());  // assign赋值
```

#### 插入与删除
- **插入**: `push_back()`, `push_front()`, `insert()` 方法。
- **删除**: `pop_back()`, `pop_front()`, `erase()` 方法。
- **清空**: `clear()` 方法。

```cpp
r1.push_back(100);
r1.push_front(200);
r1.pop_back();
r1.pop_front();
r1.erase(r1.begin());
r1.clear();
```

#### 数据存取
- 使用 `[]` 运算符，`at()` 方法，`front()`, `back()` 方法来存取数据。

```cpp
r1[0]; // 使用 [] 运算符访问数据
r1.at(0); // 使用 at() 方法访问数据
r1.front(); // 访问第一个元素
r1.back(); // 访问最后一个元素
```

#### 排序操作
- 使用 `sort()` 方法进行排序。

```cpp
sort(r1.begin(), r1.end());
```

#### 大小操作
- **大小**: `size()` 方法。
- **是否为空**: `empty()` 方法。
- **调整大小**: `resize()` 方法。

```cpp
r.size();
r.empty();
r.resize(15);
```

### 总结
- `string` 主要用于字符串操作，如查找、替换、比较、插入、删除等，而 `deque` 是一个双端队列，主要用于头尾的插入和删除操作。
- `string` 用于字符类型的存储和操作，而 `deque` 可以存储任何类型的数据，用于各种类型数据的存储和操作。
- 两者都提供了丰富的方法来进行数据的操作，如构造、赋值、插入、删除、访问等。