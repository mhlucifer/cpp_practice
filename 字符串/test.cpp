# include<iostream>
# include<cstring>
using namespace std;
int main()
{
	//char a[20];
	//cout << "enter you name" << endl;
	///*cin >> a;
	//cout << a << endl;*/
	//char s[50];
	//
	//cin.get(s, 50);
	//cout << s << endl;
	//cout << strlen(s) << endl;
	//cin.ignore();
	//cin.getline(s,50);
	char s[20] = "sad";
	char c[30] = "sadasd";
	cout << "enter" << endl;
	/*strcpy_s(s,c);
	strcat_s(s, c);*/
	if (strstr(c, s) != NULL)
		cout << strstr(c, s) << endl;
	else cout << "nout found" << endl;
	strchr(c, "a");
	strcmp(c,s);//比较两个字符串，根据acsii码比较大小
	//strstr(c,s);查询子字符串，如果查询到的话返回后半截字符串，
	cout << s << endl;

	return 0;

}