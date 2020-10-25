#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num, n, yd;
	float c, temp;
	cin >> num >> c >> yd;
	int resk, reskz, day;
	resk = 0; reskz = 0;
	for (int i = 0; i < num; i++) {
		cin >> n;
		day = 0;
		for (int j = 0; j < n; j++) {
			cin >> temp;
			if (c > temp)
				day++;
		}

		if (day > n / 2)
			n > yd ? reskz++ : resk++;
	}
	printf("%.1f%%", ((float)(resk * 100) / num));
	printf(" %.1f%%", ((float)(reskz * 100) / num));
}