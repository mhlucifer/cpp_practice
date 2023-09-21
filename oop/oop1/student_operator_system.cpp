# include<iostream>
# include<cstring>
using namespace std;
class student
{
private:
	string name;
	int roll;
	int mathmarks;
	int csmarks;
	int ecomarks;
public:
	student(string name,int roll,int c,int e,int m)
	{
		setname(name);
		setroll(roll);
		setcsmarks(c);
		setecomarks(e);
		setmathmarks(m);
	}

	void setname(string name)
	{
		this->name = name;
	}

	void setroll(int roll)
	{
		this->roll = roll;
	}
	void setmathmarks(int mathmarks)
	{
		this->mathmarks = mathmarks;
	}
	void setcsmarks(int csmarks)
	{
		this->csmarks = csmarks;
	}
	void setecomarks(int ecomarks)
	{
		this->ecomarks = ecomarks;
	}
	int getmathmarks()
	{
		return mathmarks;
	}
	int getcsmarks()
	{
		return csmarks;
	}
	int getecomarks()
	{
		return ecomarks;
	}
	int total()
	{
		return getcsmarks() + getecomarks() + getmathmarks();
	}
	char grade()
	{
		float avg = total() / 3;
		if (avg > 60)
		{
			return 'A';
		}
		else if (avg >= 30 && avg <= 60)
		{
			return 'B';
		}
		else return 'c';
	}


};
int main()
{
	cout << "what is your name:" << endl;
	string a;
	cin >> a;
	cout << "enter roll" << endl;
	int roll;
	cin >> roll;
	cout << "enter the math,cs,eco marks" << endl;
	int m,c,e;
	cin >> m >> c >> e;
	student t(a,roll,m,c,e);
	cout << "total score: " << t.total() << endl;
	cout << "grade: " << t.grade() << endl;
	

}