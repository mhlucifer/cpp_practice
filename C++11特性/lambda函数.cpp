//[caputer_list][parament_list]->return type{function body},lambda�����Ķ���
//[]��lambda������ǰ׺�����ڲ����б�����ָ��lambda��������ʹ�õ��ⲿ����
//()��lambda������ǰ׺�����ڲ����б�����ָ��lambda�����Ĳ���
//->return type��lambda������ǰ׺������ָ��lambda�����ķ���ֵ����
//{}��lambda������ǰ׺�����ں����壬����ָ��lambda�����ĺ�����
//lambda�����Ķ������ʡ������һ��ǰ׺�����Ǳ��뱣�������б�ͺ�����
# include<iostream>
using namespace std;
int main()
{
	[](int x, int y) {cout << "sum" << x + y; }(10, 5);//����һ��lambda�����Ķ��壬����û�в����б�ͷ���ֵ����
	[](int x, int y) -> int {return x + y; }(10, 5);//����һ��lambda�����Ķ��壬����û�в����б�
	//[](int x, int y) {return x + y; }(10, 5);//����һ��lambda�����Ķ��壬����û�з���ֵ����
	[](int x, int y) {cout << "sum" << x + y; };//����һ��lambda�����Ķ��壬����û�в����б�ͷ���ֵ����
	auto x = [](auto x, auto y) {return x + y; } (10, 5);
	auto f = [] { return 1; }; // f ��һ�� lambda ���ʽ��û�в���������ֵ�� int ����
	std::cout << f() << std::endl; // ��� 1
	auto s = [](int x, int y) -> int { return x + y; }(10, 5); // s ����ֵΪ 15����Ϊ lambda ����������������
	std::cout << s << std::endl; // ��� 15
	return 0;
	int a = 10;
	int b = 20;
	[&a,&b]() {cout << a++ << ++b << endl; }();//����һ��lambda�����Ķ��壬����û�з���ֵ����
}