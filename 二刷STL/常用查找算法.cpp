# include<iostream>
//algorithm������stl�е�ͷ�ļ����ģ��漰��Χ��㣬�Ƚϣ����������ң��������������ƣ��޸ĵ�
//numberic�����С��ֻ����������������м���ѧ����
# include<vector>
# include<algorithm>
using namespace std;
//��������
void test01()
{
	//����
	//find find_if adjacent_find binary_serarch count count_if
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//����Ԫ�����Ƿ���5���Ԫ��
	auto a= find(v.begin(), v.end(), 5);
	if (a == v.end())
	{
		cout << "not found" << endl;
	}
	else
		cout << "find " << *a << endl;
}
//�����Զ���
class Person
{
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	//����==���õײ�find֪����ζԱ�����
	bool operator==(const Person& p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		else return false;
	}
	string name;
	int age;
};

void test02()
{
	vector<Person> v;
	Person p1("a", 1);
	Person p2("b", 2);
	Person p3("c", 3);
	Person p4("d", 4);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	auto r = find(v.begin(), v.end(), p2);
	if (r == v.end())
	{
		cout << "not found" << endl;
	}
	else
		cout << "find " << r->name <<" "<<r->age<< endl;
}

//find_if
//����������������
void test03()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	auto r = find_if(v.begin(), v.end(), [](int val) {return val > 5; });
	if (r == v.end())
	{
		cout << "not found" << endl;
	}
	else cout << "�ҵ�����5����: "<< * r << endl;
}

//�����Զ�����������
void test04()
{
	vector<Person> v;
	Person p1("a", 10);
	Person p2("b", 22);
	Person p3("c", 34);
	Person p4("d", 45);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	auto r = find_if(v.begin(), v.end(), [](Person p) {return p.age>20; });
	for (; r != v.end(); r++)
	{
		cout << r->age << endl;
	}
	if (r == v.end())
	{
		cout << "not found" << endl;
	}
	else cout << "�ҵ�����5����: " << r->age << endl;
}

void test05()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(0);
	v.push_back(0);
	auto r= adjacent_find(v.begin(), v.end());
	if (r == v.end())
	{
		cout << "not found" << endl;
	}
	else cout << "�ҵ� " << *r << endl;
}

void test06()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//���ֲ��ң������������в�����,���������δ֪
	auto r = binary_search(v.begin(), v.end(), 5);
	auto r1 = count(v.begin(), v.end(), 5);//count_if
	cout << r1 << endl;
	if (r)
	{
		cout << "�ҵ���" << endl;
	}
	else cout << "û�ҵ� " << endl;
}

void test07()
{

}

int main()
{
	//test01();
	//test02();
	/*test03();
	test04();*/
	test06();
}