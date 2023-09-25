//stl包含了algorithm、iterator、container三种类型
//serarch,sort(),copy()等等
//iterator:迭代器，用于遍历容器中的元素
//container:容器，用于存放数据
//algorithm:算法，用于处理数据
//容器的分类：
//1.顺序容器：vector,deque,list,forward_list,array,
//2.关联容器：set,multiset,map,multimap
//3.容器适配器：stack,queue,priority_queue
//4.算法：sort(),find(),copy(),for_each()
//5.迭代器：vector<int>::iterator it;


//vector是一个动态数组，包括push_back: 此方法用于在容器的末尾插入一个元素。
// pop_back: 此方法用于删除容器末尾的元素。
//insert: 此方法用于在容器的指定位置插入一个或多个元素。
//remove: remove 不是 std::vector 的成员函数，
// 但 std::list 有一个 remove 方法，用于删除容器中所有等于给定值的元素。
//size: 此方法返回容器中元素的个数。
//empty: 此方法检查容器是否为空，如果为空则返回 true，否则返回 false。


//list是一个双向链表，包括上面的方法，还有：push_front: 此方法用于在容器的开头插入一个元素。
//pop_front: 此方法用于删除容器开头的元素。front: 此方法返回容器开头的元素。 back: 此方法返回容器末尾的元素。

//forward_list是一个单向链表，包括上面的方法，还有：before_begin: 此方法返回一个指向容器中第一个元素之前的元素的迭代器。

//deque是一个双向队列，包括上面的方法，还有：push_front: 此方法用于在容器的开头插入一个元素。

//priority_queue是一个优先队列，包括上面的方法，还有：push: 此方法用于在容器的末尾插入一个元素。pop	: 此方法用于删除容器开头的元素。top: 此方法返回容器开头的元素。


//stack是一个栈，包括上面的方法，还有：push: 此方法用于在容器的末尾插入一个元素。pop	: 此方法用于删除容器末尾的元素。top: 此方法返回容器末尾的元素。

//set是一个集合，包括上面的方法，还有：insert: 此方法用于在容器中插入一个元素。erase: 此方法用于删除容器中的一个元素。find: 此方法返回一个指向容器中元素的迭代器，该元素与给定值相等。count: 此方法返回容器中与给定值相等的元素的个数。

//multiset是一个集合，包括上面的方法，还有：insert: 此方法用于在容器中插入一个元素。erase: 此方法用于删除容器中的一个元素。find: 此方法返回一个指向容器中元素的迭代器，该元素与给定值相等。count: 此方法返回容器中与给定值相等的元素的个数。