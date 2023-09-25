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
	//ofstream ofs("student.txt",ios::trunc);//ios::trunc表示如果文件存在就删除文件，重新创建一个文件,
	////默认是ios::app,表示在文件末尾追加,ios::in表示读取文件,ios::out表示写入文件,ofstream是写入文件，ifstream是读取文件
	//ofs << s.name << endl;
	//ofs << s.roll << endl;
	//ofs << s.branch << endl;
	//ofs << s << endl; // 重载运算符
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
	cout << hex << a << endl;//hex表示16进制
	cout << oct << a << endl;//oct表示8进制
	cout << dec << a << endl;//dec表示10进制
	cout<<fixed<<a<<endl;//fixed表示小数点后面的位数
	cout << scientific << a << endl;//scientific表示科学计数法
	cout << showbase << a << endl;//showbase表示显示进制
	cout<<set(10)<<"hello"<<endl;//set表示设置宽度;
	cout << 10 << ws << 20 << endl;//ws表示空格

}