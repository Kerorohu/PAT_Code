#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b);
vector<pair<string, int>> change(vector<pair<string, int>> v);

int main() {
	int n, k;
	cin >> n >> k;
	map<string, int> m;
	string name;
	int high;
	vector<pair<string, int>> v, temp;
	for (int i = 0; i < n; i++) {
		cin >> name >> high;
		m.insert(pair<string, int>(name, high));
		v.push_back(pair<string, int>(name, high));
	}
	sort(v.begin(), v.end(), cmp);
	int p, pt;
	p = n / k;
	pt = p + n % k;
	temp.insert(temp.begin(), v.begin(), v.begin() + pt);
	temp = change(temp);
	vector<pair<string, int>>::iterator it;
	for (it = temp.begin(); it != temp.end(); it++) {
		cout << it->first;
		if (it != temp.end() - 1) {
			cout << " ";
		}
	}
	cout << endl;
	temp.clear();
	int begin = pt;
	for (int i = 0; i < k - 1; i++) {
		temp.insert(temp.begin(), v.begin() + begin, v.begin() + begin + p);
		temp = change(temp);
		for (it = temp.begin(); it != temp.end(); it++) {
			cout << it->first;
			if (it != temp.end() - 1) {
				cout << " ";
			}
		}
		if (i != k - 2)
			cout << endl;
		temp.clear();
		begin = begin + p;
	}
}

vector<pair<string, int>> change(vector<pair<string, int>> v) {
	vector<pair<string, int>> temp;
	vector<pair<string, int>>::iterator it;
	int lr = 1;
	temp.emplace(temp.begin(), *(v.begin()));
	for (it = v.begin() + 1; it != v.end(); it++) {
		if (lr == 1) {
			temp.emplace(temp.begin(), *it);
			lr = 0;
		}
		else {
			temp.emplace(temp.end(), *it);
			lr = 1;
		}
	}

	return temp;
}

bool cmp(pair<string, int> a, pair<string, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}