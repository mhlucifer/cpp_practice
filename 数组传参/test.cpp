#include<iostream> 
struct Rectangle
{
	int length;
	int midth;
};
int area(struct Rectangle &r1)// ���ô���
{	
	r1.length++;
	return r1.length * r1.midth;
}

void changelength(struct Rectangle * p,int n)// ָ�봫��
{	
	p->length = n;
	p->midth = 2;

} //������Ϊ�ṹ��ı���ʱ��ͨ���ṹ�崫���ǿ���ʹ��ֵ���ݵģ�������ʹ��ֵ���ݵĹ����У�ʹ��.��������ýṹ��ʱ����ֵ����ʵ�ʲ����иı�
int main()
{	
	struct Rectangle r = { 10,5 };
	int l = 11;
	changelength(&r,l);
	printf("%d", area(r));
}