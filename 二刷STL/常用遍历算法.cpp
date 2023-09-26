# include<iostream>
//algorithm是所有stl中的头文件最大的，涉及范围最广，比较，交换，查找，遍历操作，复制，修改等
//numberic体积很小，只包括在序列上面进行简单数学运算
# include<vector>
# include<algorithm>
using namespace std;
//普通函数
void print01(int val)
{
	cout << val << " ";
}
//仿函数
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	//for_each	//遍历容器
	//transform把一个容器搬运到另一个里
	vector<int> v;
	vector<int> v1;//需要开辟空间才能使用
	v1.resize(10);
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	transform(v.begin(), v.end(), v1.begin(), [](int v) {return v; });
	for_each(v.begin(), v.end(), print02());
}


int main()
{
	test01();
}