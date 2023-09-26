//链表，将数据进行链式存储
//结点有数据域和指针域两部分，链表的优势可以对任意的位置进行快速插入和删除元素
//缺点：容器的遍历速度没有数组快，占用空间比数组大
//双向循环链表 即记录了上一个也记录下一个，循环是指，最头最尾分别记着对方的指针
//push_front  
//链表的迭代器只支持前移和后移，双向迭代器
// 优点
//采用动态存储分配，不会造成内存浪费和溢出
//链表的执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素
//缺点
//链表灵活，但是空间（指针域）和时间（遍历）额外耗费较大
//list和vector是两个最常被使用的容器。各有优缺点
# include<iostream>
# include<list>
using namespace std;
//list构造函数，创建list容器
void printlist(const list<int>& l)
{
	for (list<int>::const_iterator ir = l.begin(); ir != l.end(); ir++)
	{
		cout << *ir << " ";
	}
	cout << endl;
}
void test01()
{
	list<int> l1;
	//添加数据
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//遍历数据
	printlist(l1);

	//区间方式构造
	list<int>l2(l1.begin(), l1.end());
	printlist(l2);
	//拷贝构造
	list<int>l3(l2);
	printlist(l3);
	//n个elem
	list<int>l4(10, 100);
	printlist(l4);
}


void test02()//list赋值和交换
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printlist(l1);
	//赋值操作
	list<int> l2;
	l2 = l1;
	printlist(l2);
	
	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printlist(l3);

	list<int> l4;
	l4.assign(10, 100);
	printlist(l4);
	//交换
	cout << " 交换前" << endl;
	printlist(l1);
	printlist(l4);
	l1.swap(l4);
	cout << " 交换后" << endl;
	printlist(l1);
	printlist(l4);
}

void test03()//对容器的大小进行操作
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//判断是否为空
	if (l1.empty())
	{
		cout << "为空";
	}
	else
	{
		cout << "不为空" << endl;
	}
	cout << l1.size() << endl;
	//重新指定大小
	l1.resize(10,10);
	printlist(l1);
	
}


void test04()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	//尾插
	l1.push_back(40);
	//头插
	l1.push_front(40);
	//尾删
	l1.pop_back();
	//头删
	l1.pop_front();
	//insert
	l1.insert(l1.begin(), 1000);
	printlist(l1);
	list<int>::iterator r = l1.begin();
	l1.insert(++r, 1000);
	printlist(l1);
	//删除
	r = l1.begin();
	l1.erase(r);
	printlist(l1);
	l1.erase(++r);
	printlist(l1);

	//按照值来删除
	l1.push_back(1000);
	l1.remove(1000);//删除所有值为10000的
	printlist(l1);

	l1.clear();

}

void test05()
{
	//list数据存取
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//不可以用这个方式访问l1[]中的元素
	//l1.at(0)也不可以,原因是list本质是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问

	cout << "第一个元素 " << l1.front() << endl;
	cout << "最后一个元素 " << l1.back() << endl;


	//验证迭代器不支持随机访问
	list<int>::iterator it = l1.begin();
	it++;
	//it = it + 1; 这里不行，也就是说明不支持随机访问，只能++或者--，原因是一个节点只保存了下一个位置或者上一个位置的地址


}
bool compare(int v1,int v2)
{
	//降序 就让第一个数大于第二个数
	return v1 > v2;
}
void test06()
{
	//list中的反转和排序
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	cout << "反转前:" << endl;
	printlist(l1);

	cout << "反转后:" << endl;
	l1.reverse();
	printlist(l1);

	//排序
	list<int> l2;
	l2.push_back(20);
	l2.push_back(10);
	l2.push_back(50);
	l2.push_back(40);
	cout << "排序前" << endl;
	printlist(l2);
	//所有不支持随机访问迭代器的容器，不可以用标准算法 sort(l2.begin(),l2.end())无法使用
	//不支持随机访问迭代器的容器，内部会提供对应的一些算法
	l2.sort();//默认从小到大
	cout << "排序后" << endl;
	printlist(l2);
	l2.sort(compare);//排序后，倒序排序
	printlist(l2);
}

int main()
{
	test06();
}