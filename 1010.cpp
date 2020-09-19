#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b);
int main() {
	int a, b;
	map<int, int> m;
	do {
		cin >> a >> b;
		m.insert(pair<int, int>(a, b));

	} while (cin.get() != '\n');

	map<int, int> newm;
	map<int, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second > 0)
			newm.insert(pair<int, int>(it->first * it->second, it->second - 1));
	}

	vector<pair<int, int>> vec;

	for (it = newm.begin(); it != newm.end(); it++) {
		vec.push_back(pair<int, int>(it->first, it->second));
	}
	sort(vec.begin(), vec.end(), cmp);

	vector<pair<int, int>>::iterator itv;
	for (itv = vec.begin(); itv != vec.end(); itv++) {
		cout << itv->first << " " << itv->second;

		if (itv != vec.end() - 1)
			cout << " ";
		if (itv == vec.end() - 1 && (vec.end() - 1)->second != 0)
			cout << " 0 0";
	}
}

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}

