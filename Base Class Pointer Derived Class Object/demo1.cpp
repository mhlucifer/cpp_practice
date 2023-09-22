# include<iostream>
using namespace std;
class Base
{
public:
	virtual void func1()
	{
		cout << "fun1 of Base" << endl;
	}	
};
class derived :public Base
{
public:
	void func1() override
	{
		cout << "fun2 of derived" << endl;
	}
};
int main()
{
	derived d;
	Base* b = &d;
	b->func1();
	//b->func2(); # 无法调用

	return 0;
}