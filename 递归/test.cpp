# include<iostream>
using namespace std;
int fun1(int n);
void fun(int n)
{
	if (n > 0)
	{
		fun(n - 1);  //д��ǰ������ȵ��ú���
		cout << n << endl;
		fun(n - 1);
		
	}
}
int main()
{
	int x = 3;
	cout<<fun1(x)<<endl;
}

int fun1(int n)
{
	static int x = 5;
	if (n > 0)
	{
		x++;
		return fun1(n - 1) + x;
	}
	return 0;  // ��ȷΪ�����������0
}

void fun(int n)
{

}