# include<list>
# include<iostream>
using namespace std;
class Person
{
public:
	Person(string name, int age, int height) :name(name), age(age), height(height) {};
	int age;
	string name;
	int height;

};

//指定排序规则
bool compareperson(Person &p1,Person &p2)
{
	if (p1.age == p2.age)
	{
		return p1.height > p2.height;
	}
	//按照年龄升序
	
		return p1.age < p2.age;
}
void test01()
{
	list<Person> l;
	Person p1("liu", 20, 30);
	Person p2("li", 40, 70);
	Person p3("l", 50, 60);
	Person p4("liu1", 30, 50);
	Person p5("liu13", 20, 30);
	Person p6("liu2", 20, 80);
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "name = " << (*it).name << " height = " << (*it).height << " age = " << (*it).age << endl;
	}
	l.sort(compareperson);
	cout << "sort--------------------" << endl;
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "name = " << (*it).name << " height = " << (*it).height << " age = " << (*it).age << endl;
	}

}
int main()
{
	test01();
}