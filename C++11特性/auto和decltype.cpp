# include<iostream>
using namespace std;
float fun()
{
	return 1.3f;
}
int main()
{
	auto a = 1.3;
	cout << a << endl;
	cout << fun() << endl;
	auto b = 7 * 7.4 + 'h';
	cout << b;
	decltype(b) c = 1.3; 
	//声明类型与B相同，但是不会赋值，只是声明，不会初始化，所以不会输出，但是会报错，因为c没有初始化
}