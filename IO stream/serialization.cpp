# include<iostream>
# include<fstream>
using namespace std;
class Student
{
public:
	string name;
	int roll;
	string branch;
	friend ofstream& operator<<(ofstream& ofs, Student &s);
	friend ifstream& operator>>(ifstream& ifs, Student& s);
};
ofstream& operator<<(ofstream& ofs, Student &s)
{
	ofs << s.name << endl;
	ofs << s.roll << endl;
	ofs << s.branch << endl;
	return ofs;
}
ifstream& operator>>(ifstream& ifs, Student& s)
{
	ifs >> s.name;
	ifs >> s.roll;
	ifs >> s.branch;
	return ifs;
}
int main()
{
	Student s;
	//s.name = "John";
	//s.roll = 2;
	//s.branch = "cs";
	////store the content in the txt file
	//ofstream ofs("student.txt",ios::trunc);//ios::trunc��ʾ����ļ����ھ�ɾ���ļ������´���һ���ļ�,
	////Ĭ����ios::app,��ʾ���ļ�ĩβ׷��,ios::in��ʾ��ȡ�ļ�,ios::out��ʾд���ļ�,ofstream��д���ļ���ifstream�Ƕ�ȡ�ļ�
	//ofs << s.name << endl;
	//ofs << s.roll << endl;
	//ofs << s.branch << endl;
	//ofs << s << endl; // ���������
	//ofs.close();
	ifstream ifs("student.txt");
	if (!ifs.is_open())
	{
		cout << "error" << endl;
	}
	else
	{
		cout << "success" << endl;
	}
	string name;
	int x;
	string brach;
	ifs >> s;
	cout<<s.name<< " " << s.roll << " " << s.branch << endl;
	ifs.close();
	double a = 62.6;
	cout << hex << a << endl;//hex��ʾ16����
	cout << oct << a << endl;//oct��ʾ8����
	cout << dec << a << endl;//dec��ʾ10����
	cout<<fixed<<a<<endl;//fixed��ʾС��������λ��
	cout << scientific << a << endl;//scientific��ʾ��ѧ������
	cout << showbase << a << endl;//showbase��ʾ��ʾ����
	cout<<set(10)<<"hello"<<endl;//set��ʾ���ÿ��;
	cout << 10 << ws << 20 << endl;//ws��ʾ�ո�

}