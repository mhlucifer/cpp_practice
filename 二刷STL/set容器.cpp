# include<set>
//����Ԫ�ض����ڲ���ʱ�Զ�������
//�����ǹ���ʽ�������ײ�ṹ���ö�����ʵ��
//set��multiset���� set���������������ظ���multset����Ψһ����
//
# include<iostream>
using namespace std;
void printset(set<int>&s)
{
	for (set<int>::const_iterator r = s.begin(); r != s.end(); r++)
	{
		cout << *r << " ";
	}
	cout << endl;

}
void printmultset(multiset<int>& s)
{
	for (multiset<int>::const_iterator r = s.begin(); r != s.end(); r++)
	{
		cout << *r << " ";
	}
	cout << endl;

}
void test01()
{
	set<int> s1;
	//��������ֻ��insert�ķ�ʽ
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);

	//set�����ص㣺1.����Ԫ�ز��뱻����2.����������ظ�ֵ
	s1.insert(10);
	s1.insert(20);
	printset(s1);

	//��������
	set<int>s2(s1);
	printset(s2);

	//��ֵ����
	set<int>s3;
	s3 = s2;
	printset(s3);
}


void test02()
{
	//��С�ͽ���
	set<int> s1;
	//��������ֻ��insert�ķ�ʽ
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);

	//��С
	if(s1.empty())
	{
		cout << "Ϊ��" << endl;
	}
	else cout << "��Ϊ��" << endl;

	cout<<s1.size()<<endl;

	//����
	set<int> s2;
	//��������ֻ��insert�ķ�ʽ
	s2.insert(30);
	s2.insert(50);
	s2.insert(60);
	s2.insert(70);
	printset(s2);
	cout << "����ǰ" << endl;
	printset(s1);
	printset(s2);
	cout << "������" << endl;
	s1.swap(s2);
	printset(s1);
	printset(s2);


}

void test03()
{
	//���뻹��insert
	set<int> s1;
	//��������ֻ��insert�ķ�ʽ
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);
	//earse()�������汾������ɾ��
	s1.erase(s1.begin());//ɾ��10
	printset(s1);
	s1.erase(20);
	printset(s1);//ֱ��ɾ������

	//���
	s1.erase(s1.begin(), s1.end());
	s1.clear();
}

void test04()
{
	//���Һ�ͳ��
	set<int> s1;
	//��������ֻ��insert�ķ�ʽ
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);

	//����key���ڣ����ڷ��ص������������ڷ���end()ֵ,s1.find(10)���صı����Ͼ���set<int>::iterator pos��pos
	if (s1.find(10) != s1.end())
	{
		cout << "�ҵ�Ԫ��" << *(s1.find(10)) << endl;
	}
	else
	{
		cout << "û�ҵ�Ԫ��" << endl;
	}

	//ͳ��,����set�Ľ����count���Ҫô��0��Ҫô��1
	int num = s1.count(10);
	cout << "10������" << num << endl;

}

void test05()
{
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}
	ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}
	multiset<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printmultset(s1);//����multiset������boolֵ�ж��Ƿ����ɹ�

}

class mycompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test06()
{
	//�º��������Ըı��������
	set<int> s1;
	//��������ֻ��insert�ķ�ʽ
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printset(s1);

	//ָ������Ϊ�Ӵ�С���º���
	set<int, mycompare> s2;
	//��������ֻ��insert�ķ�ʽ
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);
	for (set<int, mycompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << endl;
	}
}

class Person
{
	
public:
	string name;
	int age;
	Person(string name, int age) :name(name), age(age) {};
};

class compare
{
	bool operator ()(const Person& p1, const Person& p2)
	{
		return p1.age > p2.age;
	}
};
void test07()
{
	set<Person,compare> s;
	Person p1("232",232);
	Person p2("2322", 232);
	Person p3("23252", 232);
	Person p4("23342", 232);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);


}
int main()
{
	test05();
}