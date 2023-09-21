#include<iostream>
template<class T>
class Algorithm
{
private:
	T a;
	T b;
public:
	Algorithm(T a, T b);
	T add();
	T sub();

};
template<class T>
Algorithm<T>::Algorithm(T a, T b)
{
	this->a = a;
	this->b = b;
}
template<class T>
T Algorithm<T>::add()
{
	T c;
	c = a + b;
	return c;
}
template<class T>
T Algorithm<T>::sub()
{
	T c;
	c = a - b;
	return c;
}
int main()
{
	Algorithm<int> ar(10, 5);
	std::cout << ar.add();
	Algorithm<float> ac(10.5,5.5);
	std::cout << ac.add();
}