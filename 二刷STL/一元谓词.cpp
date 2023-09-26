//返回布尔类型的仿函数是谓词
//一元谓词
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
class Greater
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中有没有大于5的数字
	auto it =find_if(v.begin(), v.end(), Greater());
	for (; it != v.end(); it++)
	{
		if (it == v.end())
		{
			cout << "未找到" << endl;
		}
		else
			cout << "找到了大于5的数字为 " << *it << endl;
	}
	
}

int main()
{
	test01();
}