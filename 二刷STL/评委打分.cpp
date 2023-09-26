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
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

//打分
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

		r->score = avg; // 直接给当前选手设置平均分
	}
}


void showscore(vector<Person>& p)
{
	for (vector<Person>::iterator r = p.begin(); r != p.end(); r++)
	{
		cout << r->name << " 得分 " << r->score << endl;
	}
}
int main()
{
	//1.创建5名选手
	vector<Person> v;
	createPerson(v);
	for (vector<Person>::iterator r = v.begin(); r != v.end(); r++)
	{
		cout << r->name << " 得分 " << r->score << endl;
	}
	//2.打分
	setscore(v);
	//3.显示最后得分
	showscore(v);
}