# include<iostream>
using namespace std;
int main()
{
	//int a[] = { 2,4,5,7,9,4 };
	//int* p = a;
	//p++;
	//cout << *p << endl;

	//未初始化指针，指针只能指向已经存在的值或者地址，1 int x= 10, int * p ; p = &x   2 p = (int *)ox5638  3. p  = new int[5]
	//内存泄漏 栈堆问题    p  =nullptr ,即分配内存后要删除
	//悬空指针  void main() 

	//栈和堆分配内存的区别
	/*int a[5] = { 1,2,3,5,6 };
	int* p;
	p = new int[5];
	p[2] = 15;
	cout << a[2] << endl;
	delete[] p;*/
	/*int a[5]{ 2,4,6,8,10 };
	int* p = a;
	p++;
	cout << *p << endl;
	cout << *(p + 2) << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *(a + i) << endl;
	}*/
	int x = 10;
	int& y = x;
	cout << x << endl;
	y++;
	x++;
	cout << x << endl;
	cout << &x << " " << &y << endl;
}