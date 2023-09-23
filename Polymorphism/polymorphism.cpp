# include<iostream>
using namespace std;
class car
{
public:
	virtual void start() = 0; // ���麯��
	

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
		pubFunc(); // ���Է��ʣ���Ϊ�� Derived ���� private ��
		protFunc(); // ���Է��ʣ���Ϊ�� Derived ���� private ��
	}
};

int main() {
	Base b;
	b.pubFunc(); // ���Է���
	// b.protFunc(); // ���󣬲��ܷ��� protected ��Ա

	Derived d;
	d.accessBase(); // ���Է��� Derived �� public ��Ա
	// d.pubFunc(); // ���󣬲���ֱ�ӷ���
	// d.protFunc(); // ���󣬲���ֱ�ӷ���

	car* p = new swift();
	p->start();
	p = new innova();
	p->start();
	//car a;��ʱ���麯��������������Ķ���
}