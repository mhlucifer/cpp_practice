//���������ݽ�����ʽ�洢
//������������ָ���������֣���������ƿ��Զ������λ�ý��п��ٲ����ɾ��Ԫ��
//ȱ�㣺�����ı����ٶ�û������죬ռ�ÿռ�������
//˫��ѭ������ ����¼����һ��Ҳ��¼��һ����ѭ����ָ����ͷ��β�ֱ���ŶԷ���ָ��
//push_front  
//����ĵ�����ֻ֧��ǰ�ƺͺ��ƣ�˫�������
// �ŵ�
//���ö�̬�洢���䣬��������ڴ��˷Ѻ����
//�����ִ�в����ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��
//ȱ��
//���������ǿռ䣨ָ���򣩺�ʱ�䣨����������ķѽϴ�
//list��vector���������ʹ�õ�������������ȱ��
# include<iostream>
# include<list>
using namespace std;
//list���캯��������list����
void printlist(const list<int>& l)
{
	for (list<int>::const_iterator ir = l.begin(); ir != l.end(); ir++)
	{
		cout << *ir << " ";
	}
	cout << endl;
}
void test01()
{
	list<int> l1;
	//�������
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//��������
	printlist(l1);

	//���䷽ʽ����
	list<int>l2(l1.begin(), l1.end());
	printlist(l2);
	//��������
	list<int>l3(l2);
	printlist(l3);
	//n��elem
	list<int>l4(10, 100);
	printlist(l4);
}


void test02()//list��ֵ�ͽ���
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printlist(l1);
	//��ֵ����
	list<int> l2;
	l2 = l1;
	printlist(l2);
	
	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printlist(l3);

	list<int> l4;
	l4.assign(10, 100);
	printlist(l4);
	//����
	cout << " ����ǰ" << endl;
	printlist(l1);
	printlist(l4);
	l1.swap(l4);
	cout << " ������" << endl;
	printlist(l1);
	printlist(l4);
}

void test03()//�������Ĵ�С���в���
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//�ж��Ƿ�Ϊ��
	if (l1.empty())
	{
		cout << "Ϊ��";
	}
	else
	{
		cout << "��Ϊ��" << endl;
	}
	cout << l1.size() << endl;
	//����ָ����С
	l1.resize(10,10);
	printlist(l1);
	
}


void test04()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	//β��
	l1.push_back(40);
	//ͷ��
	l1.push_front(40);
	//βɾ
	l1.pop_back();
	//ͷɾ
	l1.pop_front();
	//insert
	l1.insert(l1.begin(), 1000);
	printlist(l1);
	list<int>::iterator r = l1.begin();
	l1.insert(++r, 1000);
	printlist(l1);
	//ɾ��
	r = l1.begin();
	l1.erase(r);
	printlist(l1);
	l1.erase(++r);
	printlist(l1);

	//����ֵ��ɾ��
	l1.push_back(1000);
	l1.remove(1000);//ɾ������ֵΪ10000��
	printlist(l1);

	l1.clear();

}

void test05()
{
	//list���ݴ�ȡ
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//�������������ʽ����l1[]�е�Ԫ��
	//l1.at(0)Ҳ������,ԭ����list�����������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧���������

	cout << "��һ��Ԫ�� " << l1.front() << endl;
	cout << "���һ��Ԫ�� " << l1.back() << endl;


	//��֤��������֧���������
	list<int>::iterator it = l1.begin();
	it++;
	//it = it + 1; ���ﲻ�У�Ҳ����˵����֧��������ʣ�ֻ��++����--��ԭ����һ���ڵ�ֻ��������һ��λ�û�����һ��λ�õĵ�ַ


}
bool compare(int v1,int v2)
{
	//���� ���õ�һ�������ڵڶ�����
	return v1 > v2;
}
void test06()
{
	//list�еķ�ת������
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	cout << "��תǰ:" << endl;
	printlist(l1);

	cout << "��ת��:" << endl;
	l1.reverse();
	printlist(l1);

	//����
	list<int> l2;
	l2.push_back(20);
	l2.push_back(10);
	l2.push_back(50);
	l2.push_back(40);
	cout << "����ǰ" << endl;
	printlist(l2);
	//���в�֧��������ʵ��������������������ñ�׼�㷨 sort(l2.begin(),l2.end())�޷�ʹ��
	//��֧��������ʵ��������������ڲ����ṩ��Ӧ��һЩ�㷨
	l2.sort();//Ĭ�ϴ�С����
	cout << "�����" << endl;
	printlist(l2);
	l2.sort(compare);//����󣬵�������
	printlist(l2);
}

int main()
{
	test06();
}