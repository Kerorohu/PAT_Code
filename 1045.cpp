#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int num, temp;
	cin >> num;
	long* a = new long[num];
	long* x = new long[num];
	long* n = new long[num];
	long* res = new long[num];

	for (int i = 0; i < num; i++) {
		cin >> temp;
		a[i] = temp;
	}

	long max = 0, min = 10000000000;
	for (int i = 0; i < num; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		x[i] = max;
	}

	for (int i = num - 1; i >= 0; i--) {
		if (a[i] < min) {
			min = a[i];
		}
		n[i] = min;
	}

	int cn = 0;
	for (int i = 0; i < num; i++) {
		if (n[i] == a[i] && x[i] == a[i]) {
			res[cn] = a[i];
			cn++;
		}
	}
	if (cn == 0) {
		printf("0\n\n");
	}
	else {
		printf("%d\n", cn);
		for (int i = 0; i < cn; i++) {
			printf("%ld", res[i]);
			if (i < cn - 1)
				printf(" ");
		}
	}
}