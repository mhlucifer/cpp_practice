# include<vector>
# include<list>
# include<iostream>
# include<set>
# include<map>
using namespace std;

int main()
{
	//vector<int> v = { 10,20,40,50 };
	//v.push_back(25);
	//v.push_back(70);
	//v.pop_back();
	//for (int x : v)//������
	//{
	//	cout << x << " ";
	//}
	//vector<int>::iterator it = v.begin();//������,ָ���һ��Ԫ��,����һ��ָ�������е�һ��Ԫ�صĵ�������
	//for (it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << " ";
	//}

	//list<int> v1 = { 10,20,40,50 };
	//v1.push_back(25);
	//v1.push_back(70);
	//v1.pop_back();
	//for (int x : v1)//������
	//{
	//	cout << x << " ";
	//}
	//list<int>::iterator itr = v1.begin();//������,ָ���һ��Ԫ��,����һ��ָ�������е�һ��Ԫ�صĵ�������
	//for (itr = v1.begin(); itr != v1.end(); itr++)
	//{
	//	cout << *itr << " ";
	//}

	//set<int> v1 = { 10,20,40,50 };
	//v1.insert(25);
	//v1.insert(70);
	//for (int x : v1)//������
	//{
	//	cout << x << " ";
	//}
	//set<int>::iterator itr = v1.begin();//������,ָ���һ��Ԫ��,����һ��ָ�������е�һ��Ԫ�صĵ�������
	//for (itr = v1.begin(); itr != v1.end(); itr++)
	//{
	//	cout << *itr << " ";
	//}
	map<int, string> m;
	m.insert(pair<int, string>(1, "johb"));//pair��һ��ģ���࣬���ڴ��һ����ֵ��
	m.insert(pair<int, string>(2, "js"));
	m.insert(pair<int, string>(3, "html"));
	map<int,string>::iterator itr = m.begin();
	for (itr = m.begin(); itr != m.end(); itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;//first��key��second��value
	}
	map<int, string>::iterator itr1;
	itr1 = m.find(2);
	cout << "find 2 is" << endl;
	cout << itr1->first << " " << itr1->second << endl;
}