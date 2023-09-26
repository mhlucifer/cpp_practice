# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
class Mycompare
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};
void test01()
{
	vector<int> r1;
	r1.push_back(10);
	r1.push_back(40);
	r1.push_back(50);
	r1.push_back(60);
	r1.push_back(70);
	r1.push_back(80);
	sort(r1.begin(), r1.end());
	for (auto r = r1.begin(); r != r1.end(); r++)
	{
		cout << *r << " ";
	}
	cout << endl;
	//使用函数对象，改变算法策略，变为排序规则为从大到小
	/*sort(r1.begin(), r1.end(), Mycompare());*/
	sort(r1.begin(), r1.end(), [](int a, int b) {return a > b; });
	for (auto r = r1.begin(); r != r1.end(); r++)
	{
		cout << *r << " ";
	}
}

int main()
{
	test01();
}