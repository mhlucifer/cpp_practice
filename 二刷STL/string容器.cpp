# include<iostream>
# include<string>
using namespace std;
//string ���࣬��װ��char*����������ַ�������һ��char*�͵�����
//����find��copy���滻replace��ɾ��erase������insert���ַ����Ƚ�compare
void test01()
{
	//string s1;//Ĭ�Ϲ���
	//const char* a = "hello world";
	//string s2(a);//char*����
	//string s3("hello world");//��������
	//cout << s2 << endl;
	//string s4(10,'a');//n��c����
	//cout << s4 << endl;

	//string��ֵ
	string s1;
	s1 = "hell world";
	cout<<s1<< endl;

	string s2;
	s2 = s1;
	cout << s2 << endl;

	string s3;
	s3 = 'a';
	cout << s3 << endl;

	string s4;
	s4.assign("hello world");//char*��ֵ
	cout << s4 << endl;

	string s5;
	s5.assign("hello world", 5);//ǰ5���ַ�
	cout << s5 << endl;

	string s6;
	s6.assign(s5);//string��ֵ
	cout << s6 << endl;

	string s7;
	s7.assign(10, 'a');//n��c��ֵ
	cout << s7 << endl;
}

void test02()//�ַ���ƴ��
{
	string s1 = "��";
	s1 += "������Ϸ";
	cout << s1 << endl;

	string s2 = "LOL";
	s1 += s2;//����+=
	cout << s1 << endl;

	string s3 = "I";
	s3.append(" love ");
	cout << s3 << endl;

	string s4 = "I";
	s4.append(" love ");
	s4.append(" game abcde", 4);//ƴ��ǰn���ַ�
	cout << s4 << endl;

	string s5 = "I";
	s5.append(s4);
	cout << s5 << endl;
	cout<<"*******************************"<<endl;

	string s7 = "";
	string s6 = "LOL sdsd";
	s7.append(s6, 0, 3);//�ַ���s�д�0��ʼ��5���ַ�
	cout << s7 << endl;
}

void test03()//�ַ������Һ��滻
{
	//1.����
	string str1 = "abcdefgde";
	str1.find("de");//���ص�һ�γ��ֵ�λ��
	cout << str1.find("de") << endl;
	cout << str1.rfind("de") << endl;//�����������
	if (str1.find("df") == -1)
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout<<str1.find("df")<<endl;
	}//�����ڷ���-1
	

	//2.�滻
	string str2 = "abcdefgde";
	str2.replace(1, 3, "1111");//��1��ʼ��3���ַ��滻Ϊ1111
}

void test04()//�ַ����Ƚ�
{
		string s1 = "abc";
	string s2 = "abcd";
	if (s1.compare(s2) == 0)
	{
		cout << "s1����s2" << endl;
	}
	else if (s1.compare(s2) > 0)
	{
		cout << "s1����s2" << endl;
	}
	else
	{
		cout << "s1С��s2" << endl;
	}
}

void test05() //�ַ���ȡ
{
	string str = "hello world";
	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	//2.ͨ��at���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}

	//3.�޸ĵ����ַ�
	str[0] = 'x';
	cout<<str<<endl;
	str.at(1) = 'x';
	cout << str << endl;
}

void test06()//string�����ɾ��
{
	string str = "hello";
	//����
	str.insert(1, "111");//��λ��1��ʼ����111
	cout << str << endl;
	//ɾ��
	str.erase(1, 3);//��λ��1��ʼɾ��3���ַ�
	cout << str << endl;
}

void test07()//string�Ӵ�
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);//���ĸ�λ�ÿ�ʼ����ȡ�����ַ�
	cout << subStr << endl;
}


	
int main()
{
	test07();
}