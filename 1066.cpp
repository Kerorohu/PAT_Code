#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int M, N, min, max, r;
	cin >> M >> N >> min >> max >> r;
	int** a = new int* [M];
	for (size_t i = 0; i < M; i++)
	{
		a[i] = new int[N];
	}
	for (size_t i = 0; i < M; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			cin >> a[i][j];
			if (a[i][j] >= min && a[i][j] <= max)
				a[i][j] = r;
		}
	}

	for (size_t i = 0; i < M; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			cout << setw(3) << setfill('0') << a[i][j];
			if (j != N - 1)
				cout << " ";
		}
		if (i != M - 1)
			cout << endl;
	}
}