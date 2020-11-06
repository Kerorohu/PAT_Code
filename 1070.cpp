#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> v;
	int temp;
	for (size_t i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	int sum = v[0];
	vector<int>::iterator it;

	for (it = v.begin() + 1; it != v.end(); it++) {
		sum = (sum + *it) / 2;
	}
	cout << sum;
}