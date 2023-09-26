# include<iostream>
# include<functional>
//算术仿函数，可以直接用

//取反仿函数
//加法仿函数

//negate 一元仿函数  取反仿函数

//plus 二元仿函数

using namespace std;
void  test01()
{
	negate<int>n;
	cout << n(50) << endl;
}

void test02()
{
	plus<int>p;
	cout << p(20, 20) << endl;
}
int main()
{
	test01();
	test02();
}