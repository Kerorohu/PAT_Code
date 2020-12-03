#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
bool isFind(vector<int> v, int a);

int main() {
	int N, M, t1, t2;
	cin >> N >> M;
	map<int, vector<int>> m;
	for (size_t i = 0; i < N; i++)
	{
		cin >> t1 >> t2;
		m[t1].push_back(t2);
		m[t2].push_back(t1);
	}

	int o, hw, st1, st2;
	vector<int> v;
	vector<int>::iterator it, itt;
	st1 = 1;
	for (size_t i = 0; i < M; i++)
	{
		cin >> o;
		for (size_t j = 0; j < o; j++)
		{
			cin >> hw;
			v.push_back(hw);
		}
		for (it = v.begin(); it != v.end(); it++) {
			for (itt = it + 1; itt != v.end(); itt++) {
				if (isFind(m[*it], *itt)) {
					cout << "No" << endl;
					st1 = 0;
					break;
				}
			}
			if (st1 == 0) {
				break;
			}
		}
		if (st1 == 1) {
			cout << "Yes" << endl;
		}
		st1 = 1;
		v.clear();
	}
}

bool isFind(vector<int> v, int a) {
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		if (*it == a)
			return true;
	}
	return false;
}