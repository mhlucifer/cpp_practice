# include<iostream>
# include<functional>
//�����º���������ֱ����

//ȡ���º���
//�ӷ��º���

//negate һԪ�º���  ȡ���º���

//plus ��Ԫ�º���

using namespace std;
void  test01()
{
	negate<int>n;
	cout << n(50) << endl;
}

void test02()
{
	plus<int>p;
	cout << p(20, 20) << endl;
}
int main()
{
	test01();
	test02();
}