#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v(N + 1);
	for (size_t i = 1; i <= N; i++)
	{
		cin >> v[i];
	}
	for (size_t i = 1; i <= N; i++)
	{
		for (size_t j = i + 1; j <= N; j++)
		{
			vector<int> lie, a(N + 1, 1);
			a[i] = a[j] = -1;
			for (size_t k = 1; k <= N; k++)
			{
				if (v[k] * a[abs(v[k])] < 0) lie.push_back(k);
			}
			if (lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0) {
				cout << i << " " << j;
				return 0;
			}
		}
	}

	cout << "No Solution";
}