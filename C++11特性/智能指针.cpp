//����ָ�룬��Ϊ����:1.unique_ptr,2.shared_ptr,3.weak_ptr,�ֱ��Ƕ�ռָ�룬����ָ�룬��ָ��
# include<iostream>
# include<memory>
using namespace std;
class A
{};

void fun()
{
	unique_ptr<A> p1(new A);//unique_ptr�Ƕ�ռָ�룬���ܱ����ƣ�ֻ�ܱ��ƶ�
	//cout << p1 << endl;
	//unique_ptr<A> p2 = p1;//����ᱨ����Ϊunique_ptr���ܱ�����
	unique_ptr<A> p3 = move(p1);//������ԣ���Ϊp1���ƶ���
	unique_ptr<int> p5(new int(5)); // p5 ����ӵ��һ�� int ����
	p5.reset(); // p5 ����ӵ�ж��󣬸ö���ɾ��
	shared_ptr<int> p2(new int(10)); // p2 ����ӵ��һ�� int ����
	{
		shared_ptr<int> p3 = p2; // p2 �� p3 ���ڶ�ӵ�иö���
	} // p3 �����٣����ö�����Ȼ���ڣ���Ϊ p2 ��Ȼӵ����
	// ���ڣ�ֻ�� p2 ӵ�иö���
	p2.use_count();//����ָ����������ָ�������



}
int main()
{

}
