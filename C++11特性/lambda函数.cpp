//[caputer_list][parament_list]->return type{function body},lambda函数的定义
//[]是lambda函数的前缀，用于捕获列表，用于指定lambda函数可以使用的外部变量
//()是lambda函数的前缀，用于参数列表，用于指定lambda函数的参数
//->return type是lambda函数的前缀，用于指定lambda函数的返回值类型
//{}是lambda函数的前缀，用于函数体，用于指定lambda函数的函数体
//lambda函数的定义可以省略任意一个前缀，但是必须保留捕获列表和函数体
# include<iostream>
using namespace std;
int main()
{
	[](int x, int y) {cout << "sum" << x + y; }(10, 5);//这是一个lambda函数的定义，但是没有捕获列表和返回值类型
	[](int x, int y) -> int {return x + y; }(10, 5);//这是一个lambda函数的定义，但是没有捕获列表
	//[](int x, int y) {return x + y; }(10, 5);//这是一个lambda函数的定义，但是没有返回值类型
	[](int x, int y) {cout << "sum" << x + y; };//这是一个lambda函数的定义，但是没有捕获列表和返回值类型
	auto x = [](auto x, auto y) {return x + y; } (10, 5);
	auto f = [] { return 1; }; // f 是一个 lambda 表达式，没有参数，返回值是 int 类型
	std::cout << f() << std::endl; // 输出 1
	auto s = [](int x, int y) -> int { return x + y; }(10, 5); // s 被赋值为 15，因为 lambda 函数被立即调用了
	std::cout << s << std::endl; // 输出 15
	return 0;
	int a = 10;
	int b = 20;
	[&a,&b]() {cout << a++ << ++b << endl; }();//这是一个lambda函数的定义，但是没有返回值类型
}