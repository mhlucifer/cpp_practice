# include<iostream>
# include<functional>
# include<algorithm>
# include<vector>
//关系仿函数
//大于 greater

using namespace std;
void  test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	for (auto r = v.begin(); r != v.end(); r++)
	{
		cout << *r << " ";
	}
	cout << endl;
	sort(v.begin(), v.end(), [](int v1, int v2) {return v1 > v2; });
	cout << "----------------------------------" << endl;
	for (auto r = v.begin(); r != v.end(); r++)
	{
		cout << *r << " ";
	}
	cout << endl;
	cout << "----------------------------------" << endl;
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	greater<int> p;
	cout << p(10, 29) << endl; //输出0
}

void test02()
{
	plus<int>p;
	cout << p(20, 20) << endl;
}
int main()
{
	test01();
	test02();
}