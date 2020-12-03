#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
void mmax(int* a, int& b, vector<int>& c, int size);
int main() {
	int N, M, t;
	cin >> N >> M;
	int* a = new int[N];
	fill(a, a + N, 0);
	for (size_t i = 0; i < M; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			cin >> t;
			a[j] += t;
		}
	}
	int max;
	vector<int> res;
	mmax(a, max, res, N);
	cout << max << endl;
	vector<int>::iterator it;
	for (it = res.begin(); it != res.end(); it++)
	{
		cout << *it;
		if (it != res.end() - 1)
			cout << " ";
	}
}

void mmax(int* a, int& b, vector<int>& c, int size) {
	int max = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
	}

	for (size_t i = 0; i < size; i++)
	{
		if (a[i] == max)
			c.push_back(i + 1);
	}

	b = max;
}
