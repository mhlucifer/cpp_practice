# include<iostream>
using namespace std;
class complex
{
private:
	int real;
	int img;
public:
	complex(int l, int w)
	{
		real = l;
		img = w;
	}
	friend ostream& operator<<(ostream& o, complex& c1);
	
};
int main()
{
	complex c1(3, 7);
	cout << c1 << endl;
}

ostream& operator<<(ostream& o, complex& c1)
{
	o << c1.real << "i" << c1.img;
	return o;
}