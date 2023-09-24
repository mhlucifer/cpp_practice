# include<iostream>
using namespace std;
class test
{
public:
	test() { cout << "test constructor" << endl; }
	virtual ~test() = 0;//析构函数不能重载，但是可以声明为虚函数
};
class test1 :public test
{
public:
	test1() { cout << "test1 constructor" << endl; }
	~test1() { cout << "test1 destructor" << endl; }
};
int main()
{
		test * p = new test1();
		delete p;
		//析构函数设置成纯虚函数的原因是可以让基类对象的指针指向派生类对象，这样就可以通过基类对象的指针来调用派生类的析构函数，从而实现多态
}