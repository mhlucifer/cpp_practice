# include<iostream>
using namespace std;
class A
{
private:
	int x;
public:
	A()
	{
		cout << "default A" << endl;
	}
	A(int x)
	{
		cout << "not default A" << x << endl;
	}
};

class B:public A
{
private:
	int c;
public:
	B()
	{
		cout << "default B" << endl;
	}
	B(int c)
	{
		cout << "not default B" << c << endl;
	}
	B(int x, int c) :A(x)
	{
		cout << "not defalut B" << x << c << endl;
	}

};

int main()
{
	B c;//����Ĭ��A������Ĭ��B
	B c1(3);//����Ĭ��A�����÷�Ĭ��B
	B c2(3, 3);//���÷�Ĭ��A�����÷�Ĭ��B
}