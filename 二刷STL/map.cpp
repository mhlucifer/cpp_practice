# include<iostream>
# include<map>
using namespace std;
//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey�����������ã��ڶ���Ԫ��Ϊvalue
//����Ԫ�ض�����Ԫ�ؼ�����
//����ʽ������������ʵ��
void printmap(const map<int,int>& a)
{
	for (map<int, int>::const_iterator r = a.begin(); r != a.end(); r++)
	{
		cout << "key = " << r->first << "value = " << r->second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int> p1;
	p1.insert(pair<int,int>(2, 2));
	p1.insert(pair<int,int>(4, 5));
	p1.insert(pair<int,int>(3, 6));
	p1.insert(pair<int,int>(5, 7));
	printmap(p1);

	//��������
	map<int, int> p2(p1);
	printmap(p2);

	//��ֵ
	map<int, int> p3 = p1;
	printmap(p3);
}
void test02()
{
	//��С�ͽ���
	map<int, int> p1;
	p1.insert(pair<int, int>(2, 2));
	p1.insert(pair<int, int>(4, 5));
	p1.insert(pair<int, int>(3, 6));
	p1.insert(pair<int, int>(5, 7));
	printmap(p1);

	p1.size();

	p1.empty();
	map<int, int> p2;
	p2.insert(pair<int, int>(2, 2));
	p2.insert(pair<int, int>(4, 5));
	p2.insert(pair<int, int>(3, 6));
	p2.insert(pair<int, int>(5, 7));
	p1.swap(p2);
}

void test03()
{
	//�����ɾ��
	map<int, int> p1;
	p1.insert(pair<int, int>(2, 2));
	p1.insert(pair<int, int>(4, 5));
	p1.insert(pair<int, int>(3, 6));
	p1.insert(pair<int, int>(5, 7));
	printmap(p1);

	p1.insert(pair<int, int>(2, 2));
	p1.insert(make_pair<int, int>(5, 2));
	p1[5] = 50;//��������룬��;��������key����value
	cout << p1[4] << endl;
	printmap(p1);
	//ɾ��
	p1.erase(p1.begin());
	printmap(p1);
	p1.erase(3); //ɾ��keyΪ3��
	printmap(p1);


	p1.clear();
	printmap(p1);

}
void test04()
{
	//���Һ�ͳ��
	map<int, int> p1;
	p1.insert(pair<int, int>(2, 2));
	p1.insert(pair<int, int>(4, 5));
	p1.insert(pair<int, int>(3, 6));
	p1.insert(pair<int, int>(5, 7));
	map<int, int>::iterator r = p1.find(3);
	if (r != p1.end())
		cout << "�鵽" << r->first << " " << r->second << endl;
	else
		cout << "no" << endl;

	//ͳ��,Ҫô��1Ҫô��0
	int m = p1.count(3);
	cout << m << endl;
}
class Compare
{
public:
	bool operator()(const int& v1, const int& v2) const
	{
		return v1 < v2;
	}
};

void test05()
{
	map<int, int, Compare> p1;
	p1.insert(pair<int, int>(2, 2));
	p1.insert(pair<int, int>(4, 5));
	p1.insert(pair<int, int>(3, 6));
	p1.insert(pair<int, int>(5, 7));
	for (map<int, int, Compare>::iterator r = p1.begin(); r != p1.end(); r++)
	{
		cout << r->first << " " << r->second << endl;
	}
}
int main()
{
	test05();
}