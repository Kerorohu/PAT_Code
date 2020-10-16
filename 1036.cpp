#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float n;
	char c;
	cin >> n >> c;
	int half = round(n / 2);

	for (int i = 0; i < n; i++) {
		cout << c;
	}
	cout << endl;

	for (int i = 0; i < half - 2; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || j == n - 1)
				cout << c;
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << c;
	}
}