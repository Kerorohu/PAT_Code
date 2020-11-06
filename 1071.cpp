#include<iostream>

using namespace std;

struct Drug
{
	int n1, n2, b, t;
}drug;

int main() {
	int T, K, sum;
	cin >> T >> K;
	sum = T;
	for (size_t i = 0; i < K; i++)
	{
		cin >> drug.n1 >> drug.b >> drug.t >> drug.n2;
		if (drug.t > sum) {
			cout << "Not enough tokens.  Total = " << sum << "." << endl;
		}
		else
		{
			if ((drug.n1 < drug.n2) == drug.b)
			{
				sum += drug.t;
				cout << "Win " << drug.t << "!  Total = " << sum << "." << endl;
			}
			else
			{
				sum -= drug.t;
				cout << "Lose " << drug.t << ".  Total = " << sum << "." << endl;
				if (sum <= 0) {
					cout << "Game Over.";
					break;
				}
			}
		}
	}
}