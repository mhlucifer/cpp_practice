# include<iostream>
# include<functional>
# include<algorithm>
# include<vector>
using namespace std;
void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	for (auto r = v.begin(); r != v.end(); r++)
	{
		cout << *r << " ";
	}
	cout << endl;
	//利用逻辑非， 将容器搬运到容器v2中，并执行取反
	vector<bool> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (auto r = v2.begin(); r != v2.end(); r++)
	{
		cout << *r << " ";
	}
}

int main()
{
	test01();
}