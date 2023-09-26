# include<iostream>
# include<map>
# include<ctime>
# include<vector>
using namespace std;
class worker
{
public:
	string name;
	int salary;

};
void createworker(vector<worker>& v)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		worker worker;
		worker.name = " 员工";
		worker.name+=nameseed[i];
		worker.salary = rand() % 10000 + 10000;//10000-19999
		v.push_back(worker);
	}
}
//分组
void setgroup(vector<worker>& v, multimap<int, worker>& n)
{
	for (vector<worker>::iterator r = v.begin(); r != v.end(); r++)
	{
		int depid = rand() % 3;//0 1 2
		n.insert(make_pair(depid,*r));
	}
}
void showworker(multimap<int, worker>& n)
{
	cout << "策划部分" <<endl;
	multimap<int, worker>::iterator r = n.find(0);
	int m = n.count(0);
	int index = 0;
	for (;r != n.end()&& index < m;r++,index++)
	{
		cout << "姓名 " << r->second.name << "工资" << r->second.salary << endl;
	}
	cout << "----------------------" << endl;
	cout << "研发部分" << endl;
	multimap<int, worker>::iterator r1 = n.find(1);
	int m1 = n.count(1);
	int index1 = 0;
	for (; r1 != n.end() && index1 < m1; r1++, index1++)
	{
		cout << "姓名 " << r1->second.name << "工资" << r1->second.salary << endl;
	}
	cout << "----------------------" << endl;
	multimap<int, worker>::iterator r2 = n.find(2);
	int m2 = n.count(2);
	int index2 = 0;
	for (; r2 != n.end() && index2 < m2; r2++, index2++)
	{
		cout << "姓名 " << r2->second.name << "工资" << r2->second.salary << endl;
	}
}
int main()
{
	vector<worker> v;
	createworker(v);
	for (vector<worker>::iterator r = v.begin(); r != v.end(); r++)
	{
		cout << r->name << "  " << r->salary << endl;
	}
	multimap<int, worker>mworker;
	//员工分组
	setgroup(v, mworker);

	//分组显示
	showworker(mworker);
}