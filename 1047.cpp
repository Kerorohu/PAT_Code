#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

struct Bisai
{
	int score;
	string tname, dname;
}bisai;

int main() {
	int num;
	cin >> num;
	string str;
	vector<Bisai> v;
	for (int i = 0; i < num; i++) {
		cin >> str >> bisai.score;
		bisai.tname = str.substr(0, str.find('-'));
		bisai.dname = str.substr(str.find('-') + 1, str.size() - str.find('-') - 1);
		v.push_back(bisai);
	}

	vector<Bisai>::iterator it;
	map<string, int> m;
	for (it = v.begin(); it != v.end(); it++) {
		m[it->tname] += it->score;
	}
	map<string, int>::iterator itm;
	int max = 0;
	string maxteam;
	for (itm = m.begin(); itm != m.end(); itm++) {
		if (itm->second > max) {
			max = itm->second;
			maxteam = itm->first;
		}
	}

	cout << maxteam << " " << max;
}