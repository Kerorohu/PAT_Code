#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int num;
	char c;
	cin >> num >> c;
	int i = 1, sum = 1;
	while (num > sum) {
		i = i + 2;
		sum = sum + 2 * i;
	}
	if (sum != 1) {
		sum = sum - 2 * i;
		i = i - 2;
	}

	//int temp = i;
	for (int j = i; j > 0; ) {
		for (int k = 0; k < (i - j) / 2; k++) {
			cout << " ";
		}
		for (int k = 0; k < j; k++) {
			cout << c;
		}
		cout << endl;
		j = j - 2;
		//temp = j;
		//temp = abs(j);
	}
	if (i != 1) {
		for (int j = 3; j <= i; j = j + 2) {
			for (int k = 0; k < (i - j) / 2; k++) {
				cout << " ";
			}
			for (int k = 0; k < j; k++) {
				cout << c;
			}
			cout << endl;
		}
	}
	cout << num - sum;
}