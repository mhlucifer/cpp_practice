# include<iostream>
using namespace std;
int main()
{
	const int a = 10;//不能被修改
	const int * p = &a;//指针指向的值不能被修改
	int const * p1 = &a;//指针指向的值不能被修改
	//int * const p2 = &a;//指针不能被修改
	const int * const p3 = &a;//指针和指针指向的值都不能被修改
	//函数const，表示函数不能修改类的成员变量
	//函数参数const，表示函数不能修改参数的值
}