#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool cmp(int a, int b);

int main() {
	int n, temp;
	cin >> n;
	vector<int> v;
	for (size_t i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}


	sort(v.begin(), v.end(), cmp);
	int E;
	for (E = 0; E<n && v[E] > E + 1; E++);
	cout << E;
}

bool cmp(int a, int b) {
	return a > b;
}