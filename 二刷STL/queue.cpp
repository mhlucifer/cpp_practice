//队列容器符合先进先出，队尾只能进数据，队头只能出数据
// 只有队头队尾能被外界访问，所以不能遍历
//生活案例：排队
# include<iostream>
# include<queue>
using namespace std;
class Person
{
public:
	string name;
	int age;
	Person(string n, int x) :name(n), age(x) {};
};
void test01()
{
	//创建队列
	queue<Person> q;
	Person p1("TANG", 20);
	Person p2("ZHU", 30);
	Person p3("SUN", 40);
	Person p4("SHA", 50);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//判断只要队列不为空，查看队头队尾，出队
	while (!q.empty())
	{
		//查看队头
		cout << "队头元素--姓名 " << q.front().name << " age = " << q.front().age << endl;
		cout << "队尾元素--姓名 " << q.back().name << " age = " << q.back().age << endl;
		q.pop();
	}
	cout << "the size of " << q.size() << endl;
}
int main()
{
	test01();
}
