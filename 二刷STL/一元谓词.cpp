//���ز������͵ķº�����ν��
//һԪν��
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
	//������������û�д���5������
	auto it =find_if(v.begin(), v.end(), Greater());
	for (; it != v.end(); it++)
	{
		if (it == v.end())
		{
			cout << "δ�ҵ�" << endl;
		}
		else
			cout << "�ҵ��˴���5������Ϊ " << *it << endl;
	}
	
}

int main()
{
	test01();
}