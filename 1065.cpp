#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
bool find(string* a, string n, int m);
int main() {
	int n, m;
	string t1, t2;
	cin >> n;
	map<string, string> map;
	for (size_t i = 0; i < n; i++)
	{
		cin >> t1 >> t2;
		map.insert(pair<string, string>(t1, t2));
		map.insert(pair<string, string>(t2, t1));
	}

	cin >> m;
	string* a = new string[m];
	for (size_t i = 0; i < m; i++)
	{
		cin >> a[i];
	}

	vector<string> v;
	for (size_t i = 0; i < m; i++)
	{
		if (map.end() == map.find(a[i]))
			v.push_back(a[i]);
		else if (!find(a, map[a[i]], m)) {
			v.push_back(a[i]);
		}
	}

	vector<string>::iterator it;
	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it;
		if (it != v.end() - 1)
			cout << " ";
	}
}

bool find(string* a, string n, int m) {
	for (size_t i = 0; i < m; i++)
	{
		if (a[i] == n)
			return true;
	}
	return false;
}