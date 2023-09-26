# include<iostream>
# include<map>
using namespace std;
//map中所有元素都是pair
//pair中第一个元素为key，起到索引作用，第二个元素为value
//所有元素都根据元素键排序
//关联式容器，二叉树实现
void printmap(const map<int,int>& a)
{
	for (map<int, int>::const_iterator r = a.begin(); r != a.end(); r++)
	{
		cout << "key = " << r->first << "value = " << r->second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int> p1;
	p1.insert(pair<int,int>(2, 2));
	p1.insert(pair<int,int>(4, 5));
	p1.insert(pair<int,int>(3, 6));
	p1.insert(pair<int,int>(5, 7));
	printmap(p1);

	//拷贝构造
	map<int, int> p2(p1);
	printmap(p2);

	//赋值
	map<int, int> p3 = p1;
	printmap(p3);
}
void test02()
{
	//大小和交换
	map<int, int> p1;
	p1.insert(pair<int, int>(2, 2));
	p1.insert(pair<int, int>(4, 5));
	p1.insert(pair<int, int>(3, 6));
	p1.insert(pair<int, int>(5, 7));
	printmap(p1);

	p1.size();

	p1.empty();
	map<int, int> p2;
	p2.insert(pair<int, int>(2, 2));
	p2.insert(pair<int, int>(4, 5));
	p2.insert(pair<int, int>(3, 6));
	p2.insert(pair<int, int>(5, 7));
	p1.swap(p2);
}

void test03()
{
	//插入和删除
	map<int, int> p1;
	p1.insert(pair<int, int>(2, 2));
	p1.insert(pair<int, int>(4, 5));
	p1.insert(pair<int, int>(3, 6));
	p1.insert(pair<int, int>(5, 7));
	printmap(p1);

	p1.insert(pair<int, int>(2, 2));
	p1.insert(make_pair<int, int>(5, 2));
	p1[5] = 50;//不建议插入，用途可以利用key访问value
	cout << p1[4] << endl;
	printmap(p1);
	//删除
	p1.erase(p1.begin());
	printmap(p1);
	p1.erase(3); //删除key为3的
	printmap(p1);


	p1.clear();
	printmap(p1);

}
void test04()
{
	//查找和统计
	map<int, int> p1;
	p1.insert(pair<int, int>(2, 2));
	p1.insert(pair<int, int>(4, 5));
	p1.insert(pair<int, int>(3, 6));
	p1.insert(pair<int, int>(5, 7));
	map<int, int>::iterator r = p1.find(3);
	if (r != p1.end())
		cout << "查到" << r->first << " " << r->second << endl;
	else
		cout << "no" << endl;

	//统计,要么是1要么是0
	int m = p1.count(3);
	cout << m << endl;
}
class Compare
{
public:
	bool operator()(const int& v1, const int& v2) const
	{
		return v1 < v2;
	}
};

void test05()
{
	map<int, int, Compare> p1;
	p1.insert(pair<int, int>(2, 2));
	p1.insert(pair<int, int>(4, 5));
	p1.insert(pair<int, int>(3, 6));
	p1.insert(pair<int, int>(5, 7));
	for (map<int, int, Compare>::iterator r = p1.begin(); r != p1.end(); r++)
	{
		cout << r->first << " " << r->second << endl;
	}
}
int main()
{
	test05();
}