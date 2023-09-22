//access specifiers public protected private

class Base
{
private:
	int a;
protected:
	int b;
public:
	int c;
	void funcbase()
	{
		a = 10;
		b = 20;
		c = 30;
	}
};

class derived :Base
{
public:
	void funder()
	{
		//a = 1;
		c = 1;
		b = 2;//可以访问受保护的变量
	}
};

int main()
{
	Base x;
	x.c;
}