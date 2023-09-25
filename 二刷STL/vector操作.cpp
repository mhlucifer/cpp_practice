//单端数组vector，双端数组deque，双向链表list，set，multiset，map，multimap，stack，queue，heap
//vector是动态扩展,支持随机访问
# include<iostream>
# include<vector>
using namespace std;
void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() //vector构造
{
	vector<int>	v1;//默认构造,无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);
	vector<int> v2(v1.begin(), v1.end());//区间构造
	printvector(v2);

	vector<int> v3(10, 100);//n个c构造
	printvector(v3);

	vector<int> v4(v3);//拷贝构造
	printvector(v4);

}


void test02()//vector赋值
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);
	vector<int> v2;
	v2 = v1;
	printvector(v2);
	//assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printvector(v3);

	vector<int> v4;
	v4.assign(10, 100);
	printvector(v4);

}

void test03()//vector容器大小和容量
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	if (v1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
	}//判断容器是否为空,不为空为0，为空为1
	cout << v1.capacity() << endl;//容器的容量,由stl随机分配
	cout << v1.size() << endl;
	printvector(v1);
	v1.resize(15);//重新指定容器的长度，若变长，则以默认值填充新位置
	printvector(v1);
}

void test04()//插入和删除
{
	vector<int > v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);//尾插
	printvector(v1);
	v1.pop_back();//尾删
	printvector(v1);
	v1.insert(v1.begin(),100);//插入
	printvector(v1);//插入2个100
	v1.insert(v1.begin(), 2, 100);
	printvector(v1);

	v1.erase(v1.begin());//删除
	printvector(v1);
	v1.erase(v1.begin(), v1.end());//删除区间
	//v1.clear();//清空
	printvector(v1);

}
void test05()//vector数据存取
{
	//at和[]的区别
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//利用[]访问数据
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	//获取第一个元素
	cout <<"获取第一个元素"<< v1.front() << endl;

	//获取最后一个元素
	cout << "获取最后元素" << v1.back() << endl;
}


void test06()//vector互换容器
{
	//1.基本使用
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout<<"交换前"<<endl;
	printvector(v1);
	cout << endl;
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printvector(v2);
	v1.swap(v2);
	cout<<"交换后"<<endl;
	printvector(v1);
	cout << endl;
	printvector(v2);
	//2.实际用途
	//巧用swap可以收缩内存空间
	vector<int> v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
	}
	cout << "v3的容量" << v3.capacity() << endl;
	cout << "v3的大小" << v3.size() << endl;
	v3.resize(3);
	cout << "v3的容量" << v3.capacity() << endl;//容量没有变化
	cout << "v3的大小" << v3.size() << endl;
	//巧用swap收缩内存
	vector<int>(v3).swap(v3);//匿名对象，用匿名对象来收缩内存，vector<int>(v3)拷贝一个对象，匿名对象，匿名对象执行完毕，立即释放
	cout << "v3的容量" << v3.capacity() << endl;//收缩内存
	cout << "v3的大小" << v3.size() << endl;
}

void test07()//预留空间
{
	vector<int> v1;
	v1.reserve(100000);//预留空间，提前开辟空间，避免频繁开辟空间
	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])//判断是否开辟了新空间，如果开辟了新空间，p的指向会改变
		{
			p = &v1[0];//更新p的指向，指向第一个元素
			num++;//开辟次数加1
		}
	}
	cout << "num=" << num << endl;
}
int main()
{
	test07();
}