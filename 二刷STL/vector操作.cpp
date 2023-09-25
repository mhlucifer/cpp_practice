//��������vector��˫������deque��˫������list��set��multiset��map��multimap��stack��queue��heap
//vector�Ƕ�̬��չ,֧���������
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
void test01() //vector����
{
	vector<int>	v1;//Ĭ�Ϲ���,�޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);
	vector<int> v2(v1.begin(), v1.end());//���乹��
	printvector(v2);

	vector<int> v3(10, 100);//n��c����
	printvector(v3);

	vector<int> v4(v3);//��������
	printvector(v4);

}


void test02()//vector��ֵ
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

void test03()//vector������С������
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	if (v1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
	}//�ж������Ƿ�Ϊ��,��Ϊ��Ϊ0��Ϊ��Ϊ1
	cout << v1.capacity() << endl;//����������,��stl�������
	cout << v1.size() << endl;
	printvector(v1);
	v1.resize(15);//����ָ�������ĳ��ȣ����䳤������Ĭ��ֵ�����λ��
	printvector(v1);
}

void test04()//�����ɾ��
{
	vector<int > v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);//β��
	printvector(v1);
	v1.pop_back();//βɾ
	printvector(v1);
	v1.insert(v1.begin(),100);//����
	printvector(v1);//����2��100
	v1.insert(v1.begin(), 2, 100);
	printvector(v1);

	v1.erase(v1.begin());//ɾ��
	printvector(v1);
	v1.erase(v1.begin(), v1.end());//ɾ������
	//v1.clear();//���
	printvector(v1);

}
void test05()//vector���ݴ�ȡ
{
	//at��[]������
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//����[]��������
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
	//��ȡ��һ��Ԫ��
	cout <<"��ȡ��һ��Ԫ��"<< v1.front() << endl;

	//��ȡ���һ��Ԫ��
	cout << "��ȡ���Ԫ��" << v1.back() << endl;
}


void test06()//vector��������
{
	//1.����ʹ��
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout<<"����ǰ"<<endl;
	printvector(v1);
	cout << endl;
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printvector(v2);
	v1.swap(v2);
	cout<<"������"<<endl;
	printvector(v1);
	cout << endl;
	printvector(v2);
	//2.ʵ����;
	//����swap���������ڴ�ռ�
	vector<int> v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
	}
	cout << "v3������" << v3.capacity() << endl;
	cout << "v3�Ĵ�С" << v3.size() << endl;
	v3.resize(3);
	cout << "v3������" << v3.capacity() << endl;//����û�б仯
	cout << "v3�Ĵ�С" << v3.size() << endl;
	//����swap�����ڴ�
	vector<int>(v3).swap(v3);//�������������������������ڴ棬vector<int>(v3)����һ����������������������ִ����ϣ������ͷ�
	cout << "v3������" << v3.capacity() << endl;//�����ڴ�
	cout << "v3�Ĵ�С" << v3.size() << endl;
}

void test07()//Ԥ���ռ�
{
	vector<int> v1;
	v1.reserve(100000);//Ԥ���ռ䣬��ǰ���ٿռ䣬����Ƶ�����ٿռ�
	int num = 0;//ͳ�ƿ��ٴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])//�ж��Ƿ񿪱����¿ռ䣬����������¿ռ䣬p��ָ���ı�
		{
			p = &v1[0];//����p��ָ��ָ���һ��Ԫ��
			num++;//���ٴ�����1
		}
	}
	cout << "num=" << num << endl;
}
int main()
{
	test07();
}