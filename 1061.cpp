#include<iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int* score = new int[M];
	int* r = new int[M];
	for (size_t i = 0; i < M; i++)
	{
		cin >> score[i];
	}

	for (size_t i = 0; i < M; i++)
	{
		cin >> r[i];
	}

	int sum;
	int ans;
	for (size_t i = 0; i < N; i++)
	{
		sum = 0;
		for (size_t i = 0; i < M; i++)
		{
			cin >> ans;
			if (ans == r[i]) {
				sum += score[i];
			}
		}
		cout << sum;
		if (i < N - 1) {
			cout << endl;
		}
	}
}