# include<vector>
# include<algorithm>
# include<iostream>
//vector容器存放内置数据类型
using namespace std;
void test01()
{
	vector<int> v1;//创建一个vector容器，容器中存放的是int类型的数据
	//向容器中插入数据
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v1.begin();//起始迭代器，指向容器中第一个元素
	vector<int>::iterator itend = v1.end();//结束迭代器，指向容器中最后一个元素的下一个位置
	//第一种遍历方式
	while (itBegin != v1.end())
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	//第二种遍历方式
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	//第三种遍历方式
	for (auto &a : v1)
	{
		cout << a << endl;
	}
	//第四种遍历方式,利用STL提供的遍历算法
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << endl; });



}
//vector容器存放自定义数据类型
class Person
{
public:
	Person(string name, int age) :m_Name(name), m_Age(age) {};
	int m_Age;
	string m_Name;
};

void test02()
{
	vector<Person> v1;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	//向容器中插入数据
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);
	//遍历容器种的数据
	for (vector<Person>::iterator r = v1.begin(); r != v1.end(); r++)
	{
		cout<<"姓名：" << r->m_Name << "年龄：" << r->m_Age << endl;
	}
	//存放自定义数据类型的指针
	vector<Person*> v2;
	Person* p5 = new Person("eee", 50);
	Person* p6 = new Person("fff", 60);
	Person* p7 = new Person("ggg", 70);
	Person* p8 = new Person("hhh", 80);
	v2.push_back(p5);
	v2.push_back(p6);
	v2.push_back(p7);
	v2.push_back(p8);
	for (vector<Person*>::iterator r = v2.begin(); r != v2.end(); r++)
	{
		cout << "姓名"<<(*r)->m_Age << "年龄：" << (*r)->m_Name << endl;
	}

	for_each(v2.begin(), v2.end(), [](Person* val)
		{
			cout << "姓名：" << val->m_Name << " 年龄：" << val->m_Age << endl;
		});
}

void test03()
{
	//vector嵌套vector
	vector<vector<int> > r;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	//向小容器中添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);//1 2 3 4
		v2.push_back(i + 2);//2 3 4 5
		v3.push_back(i + 3);//3 4 5 6
		v4.push_back(i + 4);//4 5 6 7
	}
	//将小容器插入到大容器中
	r.push_back(v1);
	r.push_back(v2);
	r.push_back(v3);
	r.push_back(v4);
	//遍历大容器
	for (vector<vector <int>>::iterator it = r.begin(); it != r.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit !=(*it).end(); vit++)
		{
			cout<<*vit<<" ";
		}
	}
}
int main()
{
	test01();
	test02();
	test03();
}