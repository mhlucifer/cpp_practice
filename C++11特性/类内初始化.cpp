# include<iostream>
using namespace std;
class Test
{
	public:
	int	x = 10;//���ڳ�ʼ����c++11������
	int y = 20;
	Test()
	{
		x = 100;
		y = 200;
	}
	Test(int x, int y) :x(x), y(y) {}//��ʼ���б�c++11������
	Test(int x, int y) :Test(1,1)//��ʼ���б�c++11������

	
};
int main()
{
		Test t;
	cout << t.x << endl;
	cout << t.y << endl;
}