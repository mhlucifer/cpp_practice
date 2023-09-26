# include<iostream>
//algorithm是所有stl中的头文件最大的，涉及范围最广，比较，交换，查找，遍历操作，复制，修改等
//numberic体积很小，只包括在序列上面进行简单数学运算
# include<vector>
# include<algorithm>
using namespace std;
//查找内置
void test01()
{
	//查找
	//find find_if adjacent_find binary_serarch count count_if
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找元素中是否有5这个元素
	auto a= find(v.begin(), v.end(), 5);
	if (a == v.end())
	{
		cout << "not found" << endl;
	}
	else
		cout << "find " << *a << endl;
}
//查找自定义
class Person
{
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	//重载==，让底层find知道如何对比数据
	bool operator==(const Person& p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		else return false;
	}
	string name;
	int age;
};

void test02()
{
	vector<Person> v;
	Person p1("a", 1);
	Person p2("b", 2);
	Person p3("c", 3);
	Person p4("d", 4);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	auto r = find(v.begin(), v.end(), p2);
	if (r == v.end())
	{
		cout << "not found" << endl;
	}
	else
		cout << "find " << r->name <<" "<<r->age<< endl;
}

//find_if
//查找内置数据类型
void test03()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	auto r = find_if(v.begin(), v.end(), [](int val) {return val > 5; });
	if (r == v.end())
	{
		cout << "not found" << endl;
	}
	else cout << "找到大于5的数: "<< * r << endl;
}

//查找自定义数据类型
void test04()
{
	vector<Person> v;
	Person p1("a", 10);
	Person p2("b", 22);
	Person p3("c", 34);
	Person p4("d", 45);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	auto r = find_if(v.begin(), v.end(), [](Person p) {return p.age>20; });
	for (; r != v.end(); r++)
	{
		cout << r->age << endl;
	}
	if (r == v.end())
	{
		cout << "not found" << endl;
	}
	else cout << "找到大于5的数: " << r->age << endl;
}

void test05()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(0);
	v.push_back(0);
	auto r= adjacent_find(v.begin(), v.end());
	if (r == v.end())
	{
		cout << "not found" << endl;
	}
	else cout << "找到 " << *r << endl;
}

void test06()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//二分查找，在无序序列中不可用,如果无序结果未知
	auto r = binary_search(v.begin(), v.end(), 5);
	auto r1 = count(v.begin(), v.end(), 5);//count_if
	cout << r1 << endl;
	if (r)
	{
		cout << "找到了" << endl;
	}
	else cout << "没找到 " << endl;
}

void test07()
{

}

int main()
{
	//test01();
	//test02();
	/*test03();
	test04();*/
	test06();
}