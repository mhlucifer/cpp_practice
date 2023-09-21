#include<iostream>
struct Rectangle
{
	int length;
	int width;
};
void changelength(struct Rectangle& r1)
{
	r1.length = 10;
	r1.width = 20;
}
int area(struct Rectangle r2)
{
	return r2.length* r2.width;
}
void changewidth(struct Rectangle* r3)
{
	r3->width = 20;
}
int main()
{
	int* p = new int;
	struct Rectangle r = { 10,5 };
	changelength(r);
	printf("%d", area(r));
	changewidth(&r);
	printf("length = %d,width = %d", r.length, r.width);
	printf("length = %d,width = %d",r.length,r.width);
}