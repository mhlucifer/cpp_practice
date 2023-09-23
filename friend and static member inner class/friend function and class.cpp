# include<iostream>
using namespace std;
class your;
class my 
{
private:
	int n;
protected:
	int j;
public:
	int m;
	friend void func();
	friend class your;
};
class your
{
private:
	my y;
public:
	void func()
	{
		y.j;
		y.m;
		y.n;
	}
};
void func()
{
	my n;
	n.m;
	n.n;
	n.j;
}

