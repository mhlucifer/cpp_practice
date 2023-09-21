# include<iostream>
using namespace std;

class minus_a
{
private:
	int a;
	int b;
public:
	minus_a(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}
	minus_a operator-(minus_a x)
	{
		minus_a temp(2, 3);
		temp.a = this->a - x.a;
		temp.b = this->b - x.b;
		return temp;
	}
};


int main()
{
	minus_a a(2, 3);
	minus_a b(3, 5);
	minus_a c(3,5);
	c = a - b;
	cout << c.geta() << "   " << c.getb() << endl;

}