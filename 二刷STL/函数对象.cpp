# include<iostream>
using namespace std;
class myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

class myprint
{
public:
	myprint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		count++;
		cout << test << endl;
	}
	int count;//��¼״̬
};
void doprint(myprint & p, string i)
{

	p(i);
}

void test03()
{
	myprint myprint;
	doprint(myprint, "hello c++");
}
void test01()
{
	myadd myadd;
	cout<<myadd(10, 10)<<endl;

	myprint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");

	cout << "myprint���ô���" << myprint.count << endl;
}
int main()
{
	//����������ʹ��ʱ����������ͨ�������ÿ����в����ͷ���ֵ
	//�������󳬳���ͨ�������������Լ���״̬�����ҿ�����Ϊ��������
	test01();
	test03();
}