//智能指针，分为三种:1.unique_ptr,2.shared_ptr,3.weak_ptr,分别是独占指针，共享指针，弱指针
# include<iostream>
# include<memory>
using namespace std;
class A
{};

void fun()
{
	unique_ptr<A> p1(new A);//unique_ptr是独占指针，不能被复制，只能被移动
	//cout << p1 << endl;
	//unique_ptr<A> p2 = p1;//这里会报错，因为unique_ptr不能被复制
	unique_ptr<A> p3 = move(p1);//这里可以，因为p1被移动了
	unique_ptr<int> p5(new int(5)); // p5 现在拥有一个 int 对象
	p5.reset(); // p5 不再拥有对象，该对象被删除
	shared_ptr<int> p2(new int(10)); // p2 现在拥有一个 int 对象
	{
		shared_ptr<int> p3 = p2; // p2 和 p3 现在都拥有该对象
	} // p3 被销毁，但该对象仍然存在，因为 p2 仍然拥有它
	// 现在，只有 p2 拥有该对象
	p2.use_count();//返回指向对象的智能指针的数量



}
int main()
{

}
