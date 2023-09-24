# include<iostream>
using namespace std;
class test
{
public:
	test() { cout << "test constructor" << endl; }
	~test() { cout << "test destructor" << endl; }
};
int main()
{
	test * p = new test();
	delete p;
}