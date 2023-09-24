# include<iostream>
//# define PI 10 //宏定义,在编译时替换
# define max(a,b) ((a)>(b)?(a):(b))//宏定义,在编译时替换,优点是不用考虑类型
# ifndef a	//如果没有定义a,则定义a为12
	#define a 12;	
# endif

using namespace std;
int main()
{
	max(3,4);
}
