# include<iostream>
using namespace std;
class rectangle
{
private:
	int a;
	int b;
public:
	rectangle(int a, int b)
	{
		this->a = a;
		this->b = b;//thisָ��
	}
};
int main()
{
	rectangle r(9, 5);
}