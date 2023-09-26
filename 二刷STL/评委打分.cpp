# include<iostream>
# include<vector>
# include<deque>
# include<algorithm>
# include<ctime>
using namespace std;
class Person
{
public:
	Person(string name, int score)
	{
		this->name = name;
		this->score = score;
	}
	string name;
	int score;
};

void createPerson(vector<Person> &v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

//���
void setscore(vector<Person>& v)
{
	for (vector<Person>::iterator r = v.begin(); r != v.end(); r++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		r->score = avg; // ֱ�Ӹ���ǰѡ������ƽ����
	}
}


void showscore(vector<Person>& p)
{
	for (vector<Person>::iterator r = p.begin(); r != p.end(); r++)
	{
		cout << r->name << " �÷� " << r->score << endl;
	}
}
int main()
{
	//1.����5��ѡ��
	vector<Person> v;
	createPerson(v);
	for (vector<Person>::iterator r = v.begin(); r != v.end(); r++)
	{
		cout << r->name << " �÷� " << r->score << endl;
	}
	//2.���
	setscore(v);
	//3.��ʾ���÷�
	showscore(v);
}