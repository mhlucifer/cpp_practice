#include<iostream> 
struct Rectangle
{
	int length;
	int midth;
};
int area(struct Rectangle &r1)// 引用传递
{	
	r1.length++;
	return r1.length * r1.midth;
}

void changelength(struct Rectangle * p,int n)// 指针传递
{	
	p->length = n;
	p->midth = 2;

} //数组作为结构体的变量时，通过结构体传递是可以使用值传递的，所以在使用值传递的过程中，使用.运算符调用结构体时，其值不会实际参数中改变
int main()
{	
	struct Rectangle r = { 10,5 };
	int l = 11;
	changelength(&r,l);
	printf("%d", area(r));
}