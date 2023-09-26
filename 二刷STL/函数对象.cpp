# include<iostream>
using namespace std;
class myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

class myprint
{
public:
	myprint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		count++;
		cout << test << endl;
	}
	int count;//记录状态
};
void doprint(myprint & p, string i)
{

	p(i);
}

void test03()
{
	myprint myprint;
	doprint(myprint, "hello c++");
}
void test01()
{
	myadd myadd;
	cout<<myadd(10, 10)<<endl;

	myprint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");

	cout << "myprint调用次数" << myprint.count << endl;
}
int main()
{
	//函数对象在使用时，可以像普通函数调用可以有参数和返回值
	//函数对象超出普通函数，可以有自己的状态，并且可以作为参数传递
	test01();
	test03();
}