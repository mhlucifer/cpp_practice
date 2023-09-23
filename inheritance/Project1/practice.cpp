# include<iostream>
using namespace std;
class emp
{
private:
	int ID;
	string name;
public:
	emp(int n, string m) :ID(n), name(m) {};
	void setid(int n)
	{
		ID = n;
	}
	void setid(string n)
	{
		name = n;
	}
	int getid()
	{
		return this->ID;
	}
	string getname()
	{
		return this->name;
	}
};


class fullstudent:public emp
{
private:
	double salary;
public:
	fullstudent(int n, string s, double d) :emp(n, s), salary(d) {}
	double getsalary()
	{
		return salary;
	}

};

class partstudent :public emp
{
private:
	double wage;
public:
	partstudent(int n,string m,double d):emp(n,m)
	{
		this->wage = d;
	}
	double getwage()
	{
		return wage;
	}

};

int main()
{
	fullstudent p1(10, "ws", 12312);
	partstudent p2(10, "ws", 12321.2);
	cout << p1.getid() << " " << p1.getname() << " " << p1.getsalary() << endl;
	cout << p2.getid() << " " << p2.getname() << " " << p2.getwage() << endl;
	return 0;
}