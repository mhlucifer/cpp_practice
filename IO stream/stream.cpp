# include<fstream> //Ğ´ÈëÎÄ¼ş
# include<iostream>
using namespace std;
int main()
{
	ofstream outfile("my.txt");
	outfile << "hello world" << endl;
	outfile << 25 << endl;
	outfile.close();
	ifstream infile("my.txt");
	if (!infile.is_open())
	{
			cout << "error" << endl;
	}
	else
	{
		cout << "success" << endl;
	}
	string a;
	int x;
	string branch;
	infile >> a;
	infile >> x;
	infile >> branch;
	cout << a << " "<<x <<branch <<endl;
	if(infile.eof())cout<< "end of file" << endl;
	infile.close();
}
