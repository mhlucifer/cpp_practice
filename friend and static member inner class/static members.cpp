# include<iostream>
using namespace std;
class test {
public:
	int a;
	int b;
	static int c;
public:
	test()
	{
		a = 10;
		b = 20;
		c++;
	}
	static int getcount()//静态成员函数只能访问静态成员变量
	{
		return c;
	}
};
int test::c = 10;
int main()
{
	test t;
	cout<<t.c<<endl;
	cout << t.c << endl;
	cout << t.c << endl;
	cout << t.c << endl;
	cout << t.c << endl;
	test t2;
	cout << test::c << endl; // 输出 12
	test t3;
	cout << test::c << endl; // 输出 13
}