#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct Stu
{
	int paim, stunums;
	string name;
	double score;
}stu;

bool cmp(Stu a, Stu b);
void toSmall(string& str);

int main() {
	int N;
	double temp;
	string name, num;
	cin >> N;
	vector<Stu> v;
	map<string, double> m;
	map<string, int> stunum;

	for (size_t i = 0; i < N; i++)
	{
		cin >> num >> temp >> name;
		toSmall(name);
		if (num[0] == 'B') {
			temp = temp / 1.5;
		}
		else if (num[0] == 'T')
		{
			temp = temp * 1.5;
		}
		m[name] += temp;
		stunum[name]++;
	}

	map<string, double>::iterator itm;
	for (itm = m.begin(); itm != m.end(); itm++) {
		stu.name = itm->first;
		stu.score = (int)itm->second;
		stu.stunums = stunum[itm->first];
		v.push_back(stu);
	}

	sort(v.begin(), v.end(), cmp);
	vector<Stu>::iterator it;
	double tempscore = v[0].score;
	int jisu = 1, paiming = 1;
	cout << v.size() << endl;
	for (it = v.begin(); it != v.end(); it++)
	{
		if (it->score == tempscore)
			it->paim = paiming;
		else
		{
			it->paim = jisu;
			paiming = jisu;
		}
		tempscore = it->score;
		jisu++;
		cout << it->paim << " " << it->name << " " << (int)(it->score) << " " << it->stunums << endl;
	}
}

bool cmp(Stu a, Stu b) {
	if (a.score == b.score) {
		if (a.stunums == b.stunums) {
			return a.name < b.name;
		}
		return a.stunums < b.stunums;
	}
	return a.score > b.score;
}

void toSmall(string& str) {
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
	}
}
