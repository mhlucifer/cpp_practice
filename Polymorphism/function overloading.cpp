# include<iostream>
using namespace std;
class parent
{
public:
	void log()
	{
		cout << "from parent" << endl;
	}

};

class child:public parent
{
public:
	void log()//КЏЪ§жиди
	{
		cout << "from child" << endl;
	}
};

int main()
{
	parent p;
	child c;
	p.log();
	c.log();
}