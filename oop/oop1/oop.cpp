//types of fundation in a class
# include<iostream>
using namespace std;
class rectangle
{
private:
	int length;
	int width;
public:
	rectangle();
	rectangle(int l, int w);
	rectangle(rectangle& r);
	void setlength(int l);//mutator // 写在里面自动为inline，
	void setwidth(int w);
	int getlength();//accessior
	int getwidth();
	int area();
	int permeter();
	bool issquare();
	~rectangle() {};
};
int main()
{
	rectangle r(19,5);
	cout<<r.area()<<endl;
}

rectangle::rectangle()
{
	setlength(0);
	setwidth(0);
}
rectangle::rectangle(int l, int w)
{
	setlength(l);
	setwidth(w);
}
rectangle::rectangle(rectangle& r)
{
	length = r.length;
	width = r.width;
}
inline void rectangle::setwidth(int w) //写在外面自动为inline，所以需要声明
{
	width = w;
}
inline void rectangle::setlength(int l)
{
	length = l;
}
int rectangle::getlength()
{
	return length;
}
int rectangle::getwidth()
{
	return width;
}
int rectangle::area()
{
	return length * width;
}
int rectangle::permeter()
{
	return 2 * (length + width);
}
bool rectangle::issquare()
{
	return length == width;
}
