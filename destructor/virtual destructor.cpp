# include<iostream>
using namespace std;
class test
{
public:
	test() { cout << "test constructor" << endl; }
	virtual ~test() = 0;//���������������أ����ǿ�������Ϊ�麯��
};
class test1 :public test
{
public:
	test1() { cout << "test1 constructor" << endl; }
	~test1() { cout << "test1 destructor" << endl; }
};
int main()
{
		test * p = new test1();
		delete p;
		//�����������óɴ��麯����ԭ���ǿ����û�������ָ��ָ����������������Ϳ���ͨ����������ָ��������������������������Ӷ�ʵ�ֶ�̬
}