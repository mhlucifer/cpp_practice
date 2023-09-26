//只有顶端的元素才可以被外界使用
//栈可以判断容器为空，empty
//栈可以返回元素个数,生活案例：地铁，弹匣
# include<iostream>
# include<stack>
using namespace std;
void test01()
{
	stack<int> q;
	//入栈
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	cout << "栈的大小" << q.size() << endl;
	//看数，只要栈不为空，就查看栈顶，并且执行出栈
	while (!q.empty())
	{
		//查看栈顶元素为
		cout << "栈顶" << q.top() << endl;
		q.pop();
	}
	cout << "栈的大小"<<q.size() << endl;
}
int main()
{
	test01();
}