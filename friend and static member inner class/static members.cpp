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
	static int getcount()//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
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
	cout << test::c << endl; // ��� 12
	test t3;
	cout << test::c << endl; // ��� 13
}