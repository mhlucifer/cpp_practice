# include<iostream>
using namespace std;
int main()
{
	const int a = 10;//���ܱ��޸�
	const int * p = &a;//ָ��ָ���ֵ���ܱ��޸�
	int const * p1 = &a;//ָ��ָ���ֵ���ܱ��޸�
	//int * const p2 = &a;//ָ�벻�ܱ��޸�
	const int * const p3 = &a;//ָ���ָ��ָ���ֵ�����ܱ��޸�
	//����const����ʾ���������޸���ĳ�Ա����
	//��������const����ʾ���������޸Ĳ�����ֵ
}