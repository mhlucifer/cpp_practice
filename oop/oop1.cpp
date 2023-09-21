//types of fundation in a class
class rectangle
{
private:
	int length;
	int width;
public:
	rectangle();
	rectangle(int l, int w);
	rectangle(rectangle& r);
	void setlength(int l);//mutator
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
	rectangle r;
	r.area;
}

rectangle::rectangle()
{
	setlength(0);
	setwidth(0);
}
rectangle::rectangle(int l,int w)
{
	setlength(l);
	setwidth(w);
}
void rectangle::setwidth(int w)
{
	width = w;
}
void rectangle::setlength(int l)
{
	length = l;
}
rectangle::rectangle(rectangle& r)
{
	 length = r.length;
	 width = r.width;
}
int rectangle::permeter()
{
	return 2 * (length * width);
}
bool rectangle::issquare()
{
	return length == width;
}
