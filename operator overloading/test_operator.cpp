# include<iostream>
using namespace std;
class ration_num
{
private:
	int a;
	int b;
public:
	ration_num()
	{
		a = 0;
		b = 0;
	}
	ration_num(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	void seta(int a)
	{
		this->a = a;
	}
	void setb(int b)
	{
		this->b = b;
	}
	ration_num operator+(ration_num x)
	{
		ration_num temp;
		temp.a = this->a * x.b + this->b*x.a;
		temp.b = this->b * x.b;
		return temp;
	}

	friend ostream& operator<<(ostream& o, ration_num& x);
};

ostream& operator<<(ostream& o, ration_num& x) {
	o << x.a << "/" << x.b; // 参数x现在是const的。
	return o;
}
int main()
{
	ration_num a(3,4);
	ration_num b(5,6);
	ration_num c;
	c = a + b;
	cout << "sum of " << a << " and " << b << " = " << c << endl; // 修正输出格式，加入空格。

}