# include<iostream>
# include<string>
using namespace std;
//string 是类，封装了char*，管理这个字符串，是一个char*型的容器
//查找find，copy，替换replace，删除erase，插入insert，字符串比较compare
void test01()
{
	//string s1;//默认构造
	//const char* a = "hello world";
	//string s2(a);//char*构造
	//string s3("hello world");//拷贝构造
	//cout << s2 << endl;
	//string s4(10,'a');//n个c构造
	//cout << s4 << endl;

	//string赋值
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
	s4.assign("hello world");//char*赋值
	cout << s4 << endl;

	string s5;
	s5.assign("hello world", 5);//前5个字符
	cout << s5 << endl;

	string s6;
	s6.assign(s5);//string赋值
	cout << s6 << endl;

	string s7;
	s7.assign(10, 'a');//n个c赋值
	cout << s7 << endl;
}

void test02()//字符串拼接
{
	string s1 = "我";
	s1 += "爱玩游戏";
	cout << s1 << endl;

	string s2 = "LOL";
	s1 += s2;//重载+=
	cout << s1 << endl;

	string s3 = "I";
	s3.append(" love ");
	cout << s3 << endl;

	string s4 = "I";
	s4.append(" love ");
	s4.append(" game abcde", 4);//拼接前n个字符
	cout << s4 << endl;

	string s5 = "I";
	s5.append(s4);
	cout << s5 << endl;
	cout<<"*******************************"<<endl;

	string s7 = "";
	string s6 = "LOL sdsd";
	s7.append(s6, 0, 3);//字符串s中从0开始的5个字符
	cout << s7 << endl;
}

void test03()//字符串查找和替换
{
	//1.查找
	string str1 = "abcdefgde";
	str1.find("de");//返回第一次出现的位置
	cout << str1.find("de") << endl;
	cout << str1.rfind("de") << endl;//从右往左查找
	if (str1.find("df") == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout<<str1.find("df")<<endl;
	}//不存在返回-1
	

	//2.替换
	string str2 = "abcdefgde";
	str2.replace(1, 3, "1111");//从1开始的3个字符替换为1111
}

void test04()//字符串比较
{
		string s1 = "abc";
	string s2 = "abcd";
	if (s1.compare(s2) == 0)
	{
		cout << "s1等于s2" << endl;
	}
	else if (s1.compare(s2) > 0)
	{
		cout << "s1大于s2" << endl;
	}
	else
	{
		cout << "s1小于s2" << endl;
	}
}

void test05() //字符存取
{
	string str = "hello world";
	//1.通过[]访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	//2.通过at访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}

	//3.修改单个字符
	str[0] = 'x';
	cout<<str<<endl;
	str.at(1) = 'x';
	cout << str << endl;
}

void test06()//string插入和删除
{
	string str = "hello";
	//插入
	str.insert(1, "111");//从位置1开始插入111
	cout << str << endl;
	//删除
	str.erase(1, 3);//从位置1开始删除3个字符
	cout << str << endl;
}

void test07()//string子串
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);//从哪个位置开始，截取几个字符
	cout << subStr << endl;
}


	
int main()
{
	test07();
}