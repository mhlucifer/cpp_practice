# include<iostream>
# include<deque>
# include<algorithm>
using namespace std;
//deque是双端数组，可以对头端进行插入删除操作,支持随机访问
//vector头部插入效率比较低，尾部插入效率比较高，deque头部和尾部插入删除效率都比较高
//vector访问元素时，可以利用随机访问迭代器，效率比较高，deque访问元素时，不可以利用随机访问迭代器，效率比较低
//deque工作原理，deque有个中控器，控制每段缓冲区，缓冲区是连续的，中控器是连续的，中控器中存放的是每段缓冲区的地址，
void printdeque(deque<int>& q)
{
	for (deque<int>::const_iterator r = q.begin(); r != q.end(); r++)
	{

		cout << *r << " ";
	}
}

void test01()//deque的构造
{
	deque<int> r;//默认构造
	for(int i = 0; i < 10; i++)
	{
		r.push_back(i);
	}
	printdeque(r);
	cout << endl;
	deque<int>r1(r.begin(),r.end());
	printdeque(r1);
	cout << endl;
	deque<int>r2(10, 100);
	printdeque(r2);
	cout << endl;
	deque<int>r3(r2);
	printdeque(r3);
}

void test02()//deque的赋值
{
	deque<int> r;//默认构造
	for (int i = 0; i < 10; i++)
	{
		r.push_back(i);
	}
	printdeque(r);
	//=赋值
	deque<int> r1;
	r1 = r;
	printdeque(r1);
	//assign赋值
	deque<int> r2;
	r2.assign(r.begin(), r.end());
	printdeque(r2);
	deque<int> r3;
	r3.assign(10, 100);
	printdeque(r3);
}

void test03()//大小
{
	deque<int> r;//默认构造
	for (int i = 0; i < 10; i++)
	{
		r.push_back(i);
	}
	cout << r.size() << endl;
	cout << r.empty() << endl;
	//没有容量的概念
	r.resize(15);
	printdeque(r);
	cout << endl;
}

void test04()//插入和删除操作
{
	deque<int> r1;
	for (int i = 0; i < 10; i++)
	{
		r1.push_back(i);
	}
	printdeque(r1);
	//尾插
	r1.push_back(100);
	printdeque(r1);
	cout << endl;
	//头插
	r1.push_front(200);
	printdeque(r1);
	cout << endl;
	//尾删
	r1.pop_back();
	printdeque(r1);
	cout << endl;
	//头删
	r1.pop_front();
	printdeque(r1);
	cout << endl;
	//insert插入
	r1.insert(r1.begin(), 1000);
	r1.insert(r1.begin(), 2,1000);
	printdeque(r1);
	cout << endl;
	//删除
	r1.erase(r1.begin());
	printdeque(r1);
	cout << endl;
	//清空
	r1.clear();
	printdeque(r1);
	cout << endl;
	//按照区间插入
	deque<int > r2;
	r2.push_back(1);
	r2.push_back(2);
	r2.push_back(3);
	r1.insert(r1.begin(),r2.begin(),r2.end());//将r2插入到r1的头部
	printdeque(r1);
	}
void test05()//数据存取
{
	deque<int> r1;
	for (int i = 0; i < 10; i++)
	{
		r1.push_back(i);
	}
	printdeque(r1);
	cout << endl;
	cout << r1[0] << endl;
	cout << r1.at(0) << endl;
	cout << r1.front() << endl;
	cout << r1.back() << endl;
}

void test06()//排序操作
{
	deque<int> r1;
	for (int i = 0; i < 10; i++)
	{
		r1.push_back(i);
	}
	r1.push_front(20);
	r1.push_front(30);
	r1.push_front(40);
	cout << "排序前" << endl;
	printdeque(r1);
	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
	sort(r1.begin(), r1.end());//默认从小到大排序
	cout << "排序后" << endl;
	printdeque(r1);
}


int main()
{
	test06();
}