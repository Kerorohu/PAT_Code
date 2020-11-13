#include<iostream>
#include<map>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b);
int main() {
	int N, t;
	cin >> N;
	pair<int, int> p;
	vector<pair<int, int>> v;
	map<int, int> m;
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		m[abs(t - (i + 1))]++;
	}

	map<int, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second != 1)
			v.push_back(*it);
	}

	sort(v.begin(), v.end(), cmp);

	vector<pair<int, int>>::iterator itv;
	for (itv = v.begin(); itv != v.end(); itv++)
	{
		cout << itv->first << " " << itv->second << endl;
	}

}

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first > b.first;
}