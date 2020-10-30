#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	int N;
	float temp, max;
	int n1, n2;
	cin >> N;
	max = 0;
	for (int i = 0; i < N; i++) {
		cin >> n1 >> n2;
		temp = sqrt(n1 * n1 + n2 * n2);
		if (temp > max)
			max = temp;
	}
	cout << fixed << setprecision(2) << max << endl;
}