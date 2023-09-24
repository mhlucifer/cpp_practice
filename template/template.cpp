# include<iostream>
using namespace std;
template <class T>
class stack
{
private:
		int top;
		T arr[5];
public:
	void push(T x);
	T pop();
};
template <class T>
void stack<T>::push(T x)
{
	if (top == 4)
	{
		cout<<"Stack is full"<<endl;
	}
	else
	{
		top++;
		arr[top]=x;
	}
}
int main()
{
	stack <int> s1;
	stack <float> s2;
	s1.push(5);
	s2.push(5.5);
	cout<<s1.pop()<<endl;
	cout<<s2.pop()<<endl;
	return 0;
}