# include<iostream>
using namespace std;
float fun()
{
	return 1.3f;
}
int main()
{
	auto a = 1.3;
	cout << a << endl;
	cout << fun() << endl;
	auto b = 7 * 7.4 + 'h';
	cout << b;
	decltype(b) c = 1.3; 
	//����������B��ͬ�����ǲ��ḳֵ��ֻ�������������ʼ�������Բ�����������ǻᱨ����Ϊcû�г�ʼ��
}