# include<iostream>
# include<deque>
# include<algorithm>
using namespace std;
//deque��˫�����飬���Զ�ͷ�˽��в���ɾ������,֧���������
//vectorͷ������Ч�ʱȽϵͣ�β������Ч�ʱȽϸߣ�dequeͷ����β������ɾ��Ч�ʶ��Ƚϸ�
//vector����Ԫ��ʱ����������������ʵ�������Ч�ʱȽϸߣ�deque����Ԫ��ʱ������������������ʵ�������Ч�ʱȽϵ�
//deque����ԭ��deque�и��п���������ÿ�λ��������������������ģ��п����������ģ��п����д�ŵ���ÿ�λ������ĵ�ַ��
void printdeque(deque<int>& q)
{
	for (deque<int>::const_iterator r = q.begin(); r != q.end(); r++)
	{

		cout << *r << " ";
	}
}

void test01()//deque�Ĺ���
{
	deque<int> r;//Ĭ�Ϲ���
	for(int i = 0; i < 10; i++)
	{
		r.push_back(i);
	}
	printdeque(r);
	cout << endl;
	deque<int>r1(r.begin(),r.end());
	printdeque(r1);
	cout << endl;
	deque<int>r2(10, 100);
	printdeque(r2);
	cout << endl;
	deque<int>r3(r2);
	printdeque(r3);
}

void test02()//deque�ĸ�ֵ
{
	deque<int> r;//Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		r.push_back(i);
	}
	printdeque(r);
	//=��ֵ
	deque<int> r1;
	r1 = r;
	printdeque(r1);
	//assign��ֵ
	deque<int> r2;
	r2.assign(r.begin(), r.end());
	printdeque(r2);
	deque<int> r3;
	r3.assign(10, 100);
	printdeque(r3);
}

void test03()//��С
{
	deque<int> r;//Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		r.push_back(i);
	}
	cout << r.size() << endl;
	cout << r.empty() << endl;
	//û�������ĸ���
	r.resize(15);
	printdeque(r);
	cout << endl;
}

void test04()//�����ɾ������
{
	deque<int> r1;
	for (int i = 0; i < 10; i++)
	{
		r1.push_back(i);
	}
	printdeque(r1);
	//β��
	r1.push_back(100);
	printdeque(r1);
	cout << endl;
	//ͷ��
	r1.push_front(200);
	printdeque(r1);
	cout << endl;
	//βɾ
	r1.pop_back();
	printdeque(r1);
	cout << endl;
	//ͷɾ
	r1.pop_front();
	printdeque(r1);
	cout << endl;
	//insert����
	r1.insert(r1.begin(), 1000);
	r1.insert(r1.begin(), 2,1000);
	printdeque(r1);
	cout << endl;
	//ɾ��
	r1.erase(r1.begin());
	printdeque(r1);
	cout << endl;
	//���
	r1.clear();
	printdeque(r1);
	cout << endl;
	//�����������
	deque<int > r2;
	r2.push_back(1);
	r2.push_back(2);
	r2.push_back(3);
	r1.insert(r1.begin(),r2.begin(),r2.end());//��r2���뵽r1��ͷ��
	printdeque(r1);
	}
void test05()//���ݴ�ȡ
{
	deque<int> r1;
	for (int i = 0; i < 10; i++)
	{
		r1.push_back(i);
	}
	printdeque(r1);
	cout << endl;
	cout << r1[0] << endl;
	cout << r1.at(0) << endl;
	cout << r1.front() << endl;
	cout << r1.back() << endl;
}

void test06()//�������
{
	deque<int> r1;
	for (int i = 0; i < 10; i++)
	{
		r1.push_back(i);
	}
	r1.push_front(20);
	r1.push_front(30);
	r1.push_front(40);
	cout << "����ǰ" << endl;
	printdeque(r1);
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	sort(r1.begin(), r1.end());//Ĭ�ϴ�С��������
	cout << "�����" << endl;
	printdeque(r1);
}


int main()
{
	test06();
}