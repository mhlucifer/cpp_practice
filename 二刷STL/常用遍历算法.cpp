# include<iostream>
//algorithm������stl�е�ͷ�ļ����ģ��漰��Χ��㣬�Ƚϣ����������ң��������������ƣ��޸ĵ�
//numberic�����С��ֻ����������������м���ѧ����
# include<vector>
# include<algorithm>
using namespace std;
//��ͨ����
void print01(int val)
{
	cout << val << " ";
}
//�º���
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
	//for_each	//��������
	//transform��һ���������˵���һ����
	vector<int> v;
	vector<int> v1;//��Ҫ���ٿռ����ʹ��
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