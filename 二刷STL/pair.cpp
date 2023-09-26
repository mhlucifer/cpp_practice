# include<iostream>
# include<set>
using namespace std;
void test01()
{
	pair<string, int>p("Tom", 25);
	cout << p.first << endl;
	cout << p.second << endl;

	pair<string, int>p2 = make_pair("To1m",251);
	cout << p2.first << endl;
	cout << p2.second << endl;
}
int main()
{
	test01();
}