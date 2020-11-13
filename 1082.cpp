#include<iostream>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	pair<string, int> m;
	int sum, a, b;
	string name;
	vector<pair<string, int>> v;
	for (size_t i = 0; i < N; i++)
	{
		cin >> name >> a >> b;
		sum = a * a + b * b;
		m.first = name;
		m.second = sum;
		v.push_back(m);
	}
	auto cmpMin = [](pair<string, int> a, pair<string, int> b) {return a.second < b.second; };
	auto cmpMax = [](pair<string, int> a, pair<string, int> b) {return a.second > b.second; };
	auto mins = min_element(v.begin(), v.end(), cmpMin);
	auto maxs = min_element(v.begin(), v.end(), cmpMax);

	cout << mins->first << " " << maxs->first;
}