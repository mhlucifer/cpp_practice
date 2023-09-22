# include<iostream>
using namespace std;
class traingle
{
private:
	int length;
	int width;
public:
	traingle(int length,int width)
	{
		this->length = length;
		this->width = width;
	}
	void setlength(int length)
	{
		this->length = length;
	}
	void setwidth(int width)
	{
		this->width = width;
	}
	int getlength()
	{
		return length;
	}
	int getwidth()
	{
		return width;
	}

};

class cubeic :public traingle
{
private:
	int height;
public:
	cubeic(int l,int w,int h):traingle(l,w)
	{
		setlength(l);
		setwidth(w);
		height = h;
	}
	void setheight(int height)
	{
		this->height = height;
	}
	int getheigth()
	{
		return height;
	}
	int volu()
	{
		int area;
		area = getlength() * getwidth() * getheigth();
		return area;
	}

};
int main() {
	int a;
	cubeic c(3,4,5);
	a = c.volu();
	cout<<c.getheigth()<<endl;
	cout << c.getwidth() << endl;
	cout << c.getlength() << endl;
	cout << a << endl;
}