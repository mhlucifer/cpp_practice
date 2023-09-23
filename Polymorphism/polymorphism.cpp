# include<iostream>
using namespace std;
class car
{
public:
	virtual void start() = 0; // 纯虚函数
	

};
class swift :public car
{
public:
	void start()
	{
		cout << "swift started" << endl;
	}
};
class innova :public car
{
public:
	void start()
	{
		cout << "innova started" << endl;
	}
};

class Base {
public:
	void pubFunc() { cout << "Base::pubFunc" << endl; }
protected:
	void protFunc() { cout << "Base::protFunc" << endl; }
};

class Derived : private Base {
public:
	void accessBase() {
		pubFunc(); // 可以访问，因为在 Derived 中是 private 的
		protFunc(); // 可以访问，因为在 Derived 中是 private 的
	}
};

int main() {
	Base b;
	b.pubFunc(); // 可以访问
	// b.protFunc(); // 错误，不能访问 protected 成员

	Derived d;
	d.accessBase(); // 可以访问 Derived 的 public 成员
	// d.pubFunc(); // 错误，不能直接访问
	// d.protFunc(); // 错误，不能直接访问

	car* p = new swift();
	p->start();
	p = new innova();
	p->start();
	//car a;此时纯虚函数不允许创建超类的对象
}