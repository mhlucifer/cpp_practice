//�������������Ƚ��ȳ�����βֻ�ܽ����ݣ���ͷֻ�ܳ�����
// ֻ�ж�ͷ��β�ܱ������ʣ����Բ��ܱ���
//��������Ŷ�
# include<iostream>
# include<queue>
using namespace std;
class Person
{
public:
	string name;
	int age;
	Person(string n, int x) :name(n), age(x) {};
};
void test01()
{
	//��������
	queue<Person> q;
	Person p1("TANG", 20);
	Person p2("ZHU", 30);
	Person p3("SUN", 40);
	Person p4("SHA", 50);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ��β������
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ��--���� " << q.front().name << " age = " << q.front().age << endl;
		cout << "��βԪ��--���� " << q.back().name << " age = " << q.back().age << endl;
		q.pop();
	}
	cout << "the size of " << q.size() << endl;
}
int main()
{
	test01();
}
