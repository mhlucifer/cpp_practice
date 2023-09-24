# include<iostream>
namespace first
{
	void func()
	{
		int a = 10;
		std::cout<<a<<std::endl;
	}
	
}
namespace second
{
	int a = 20;
	void func()
	{
		std::cout<<a<<std::endl;
	}
}
int main() {
	first::func();
	second::func();
}
