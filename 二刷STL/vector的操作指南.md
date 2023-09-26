`std::vector` 是一个模板类，它可以存储任意类型的动态数组。以下是 `vector` 的一些基本操作：

### 1. **初始化**
```cpp
vector<int> v1;
vector<int> v2(v1.begin(), v1.end());
vector<int> v3(10, 100);
vector<int> v4(v3);
```

### 2. **添加元素**
```cpp
v1.push_back(10);
```

### 3. **插入元素**
```cpp
v1.insert(v1.begin(), 100);
v1.insert(v1.begin(), 2, 100);
```

### 4. **删除元素**
```cpp
v1.pop_back(); // 删除最后一个元素
v1.erase(v1.begin()); // 删除指定位置的元素
v1.erase(v1.begin(), v1.end()); // 删除指定区间的元素
v1.clear(); // 清空vector
```

### 5. **访问元素**
```cpp
v1[0]; // 使用下标访问
v1.at(0); // 使用at方法访问
v1.front(); // 访问第一个元素
v1.back(); // 访问最后一个元素
```

### 6. **容器的大小和容量**
```cpp
v1.size(); // 返回容器中元素的数量
v1.capacity(); // 返回容器的容量
v1.empty(); // 判断容器是否为空
v1.resize(15); // 重新指定容器的大小
```

### 7. **遍历元素**
- 使用迭代器
```cpp
for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
```
- 使用范围-based循环
```cpp
for (const auto &elem : v1)
```
- 使用算法
```cpp
for_each(v1.begin(), v1.end(), [](int val) { cout << val << endl; });
```

### 8. **预留空间**
```cpp
v1.reserve(100000); // 预留空间
```

### 9. **交换容器**
```cpp
v1.swap(v2); // 交换两个vector的元素
```

### 10. **嵌套vector**
```cpp
vector<vector<int>> v;
```

### 11. **存放自定义数据类型或指针**
```cpp
vector<Person> v;
vector<Person*> vp;
```

### 12. **用STL算法处理vector**
例如，可以使用 `std::sort` 对vector排序，使用 `std::find` 来查找元素等。

### 13. **拷贝构造与赋值**
```cpp
vector<int> v2(v1); // 拷贝构造
v2 = v1; // 赋值
```

这些基本操作提供了强大的功能，使得 `vector` 在C++中成为非常流行和实用的容器类。在使用 `vector` 时，如果有性能考虑，比如经常需要在中间插入或删除元素，可以考虑其他的容器类型，如 `std::list` 或 `std::deque`。