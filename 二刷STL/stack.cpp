//ֻ�ж��˵�Ԫ�زſ��Ա����ʹ��
//ջ�����ж�����Ϊ�գ�empty
//ջ���Է���Ԫ�ظ���,���������������ϻ
# include<iostream>
# include<stack>
using namespace std;
void test01()
{
	stack<int> q;
	//��ջ
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	cout << "ջ�Ĵ�С" << q.size() << endl;
	//������ֻҪջ��Ϊ�գ��Ͳ鿴ջ��������ִ�г�ջ
	while (!q.empty())
	{
		//�鿴ջ��Ԫ��Ϊ
		cout << "ջ��" << q.top() << endl;
		q.pop();
	}
	cout << "ջ�Ĵ�С"<<q.size() << endl;
}
int main()
{
	test01();
}