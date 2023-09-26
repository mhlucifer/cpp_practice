# include<set>
//所有元素都会在插入时自动被排序
//本质是关联式容器，底层结构是用二叉树实现
//set和multiset区别 set不允许容器中有重复，multset允许，唯一区别
//
# include<iostream>
using namespace std;
void printset(set<int>&s)
{
	for (set<int>::const_iterator r = s.begin(); r != s.end(); r++)
	{
		cout << *r << " ";
	}
	cout << endl;

}
void printmultset(multiset<int>& s)
{
	for (multiset<int>::const_iterator r = s.begin(); r != s.end(); r++)
	{
		cout << *r << " ";
	}
	cout << endl;

}
void test01()
{
	set<int> s1;
	//插入数据只有insert的方式
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);

	//set容器特点：1.所有元素插入被排序，2.不允许插入重复值
	s1.insert(10);
	s1.insert(20);
	printset(s1);

	//拷贝构造
	set<int>s2(s1);
	printset(s2);

	//赋值操作
	set<int>s3;
	s3 = s2;
	printset(s3);
}


void test02()
{
	//大小和交换
	set<int> s1;
	//插入数据只有insert的方式
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);

	//大小
	if(s1.empty())
	{
		cout << "为空" << endl;
	}
	else cout << "不为空" << endl;

	cout<<s1.size()<<endl;

	//交换
	set<int> s2;
	//插入数据只有insert的方式
	s2.insert(30);
	s2.insert(50);
	s2.insert(60);
	s2.insert(70);
	printset(s2);
	cout << "交换前" << endl;
	printset(s1);
	printset(s2);
	cout << "交换后" << endl;
	s1.swap(s2);
	printset(s1);
	printset(s2);


}

void test03()
{
	//插入还是insert
	set<int> s1;
	//插入数据只有insert的方式
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);
	//earse()有两个版本，可以删除
	s1.erase(s1.begin());//删掉10
	printset(s1);
	s1.erase(20);
	printset(s1);//直接删除数字

	//清空
	s1.erase(s1.begin(), s1.end());
	s1.clear();
}

void test04()
{
	//查找和统计
	set<int> s1;
	//插入数据只有insert的方式
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);

	//查找key存在，存在返回迭代器，不存在返回end()值,s1.find(10)返回的本质上就是set<int>::iterator pos的pos
	if (s1.find(10) != s1.end())
	{
		cout << "找到元素" << *(s1.find(10)) << endl;
	}
	else
	{
		cout << "没找到元素" << endl;
	}

	//统计,对于set的结果，count结果要么是0，要么是1
	int num = s1.count(10);
	cout << "10的数量" << num << endl;

}

void test05()
{
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}
	ret = s.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}
	multiset<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printmultset(s1);//所以multiset不会有bool值判断是否插入成功

}

class mycompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test06()
{
	//仿函数，可以改变排序规则
	set<int> s1;
	//插入数据只有insert的方式
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);

	//指定排序为从大到小，仿函数
	set<int, mycompare> s2;
	//插入数据只有insert的方式
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);
	for (set<int, mycompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << endl;
	}
}

class Person
{
	
public:
	string name;
	int age;
	Person(string name, int age) :name(name), age(age) {};
};

class compare
{
	bool operator ()(const Person& p1, const Person& p2)
	{
		return p1.age > p2.age;
	}
};
void test07()
{
	set<Person,compare> s;
	Person p1("232",232);
	Person p2("2322", 232);
	Person p3("23252", 232);
	Person p4("23342", 232);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);


}
int main()
{
	test05();
}