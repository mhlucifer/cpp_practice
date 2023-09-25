# include<vector>
# include<algorithm>
# include<iostream>
//vector�������������������
using namespace std;
void test01()
{
	vector<int> v1;//����һ��vector�����������д�ŵ���int���͵�����
	//�������в�������
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//ͨ�����������������е�����
	vector<int>::iterator itBegin = v1.begin();//��ʼ��������ָ�������е�һ��Ԫ��
	vector<int>::iterator itend = v1.end();//������������ָ�����������һ��Ԫ�ص���һ��λ��
	//��һ�ֱ�����ʽ
	while (itBegin != v1.end())
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	//�����ֱ�����ʽ
	for (auto &a : v1)
	{
		cout << a << endl;
	}
	//�����ֱ�����ʽ,����STL�ṩ�ı����㷨
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << endl; });



}
//vector��������Զ�����������
class Person
{
public:
	Person(string name, int age) :m_Name(name), m_Age(age) {};
	int m_Age;
	string m_Name;
};

void test02()
{
	vector<Person> v1;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	//�������в�������
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);
	//���������ֵ�����
	for (vector<Person>::iterator r = v1.begin(); r != v1.end(); r++)
	{
		cout<<"������" << r->m_Name << "���䣺" << r->m_Age << endl;
	}
	//����Զ����������͵�ָ��
	vector<Person*> v2;
	Person* p5 = new Person("eee", 50);
	Person* p6 = new Person("fff", 60);
	Person* p7 = new Person("ggg", 70);
	Person* p8 = new Person("hhh", 80);
	v2.push_back(p5);
	v2.push_back(p6);
	v2.push_back(p7);
	v2.push_back(p8);
	for (vector<Person*>::iterator r = v2.begin(); r != v2.end(); r++)
	{
		cout << "����"<<(*r)->m_Age << "���䣺" << (*r)->m_Name << endl;
	}

	for_each(v2.begin(), v2.end(), [](Person* val)
		{
			cout << "������" << val->m_Name << " ���䣺" << val->m_Age << endl;
		});
}

void test03()
{
	//vectorǶ��vector
	vector<vector<int> > r;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	//��С�������������
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);//1 2 3 4
		v2.push_back(i + 2);//2 3 4 5
		v3.push_back(i + 3);//3 4 5 6
		v4.push_back(i + 4);//4 5 6 7
	}
	//��С�������뵽��������
	r.push_back(v1);
	r.push_back(v2);
	r.push_back(v3);
	r.push_back(v4);
	//����������
	for (vector<vector <int>>::iterator it = r.begin(); it != r.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit !=(*it).end(); vit++)
		{
			cout<<*vit<<" ";
		}
	}
}
int main()
{
	test01();
	test02();
	test03();
}