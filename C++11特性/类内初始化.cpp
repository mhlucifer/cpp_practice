# include<iostream>
using namespace std;
class Test
{
	public:
	int	x = 10;//类内初始化，c++11新特性
	int y = 20;
	Test()
	{
		x = 100;
		y = 200;
	}
	Test(int x, int y) :x(x), y(y) {}//初始化列表，c++11新特性
	Test(int x, int y) :Test(1,1)//初始化列表，c++11新特性

	
};
int main()
{
		Test t;
	cout << t.x << endl;
	cout << t.y << endl;
}