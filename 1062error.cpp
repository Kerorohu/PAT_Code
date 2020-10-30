#include <iostream>
#include <string>

void zj(int& a, int& b);

using namespace std;

int main() {
	string str1, str2, temp;
	int K, n1, n2, m1, m2, nn1, nn2, nm1;

	cin >> str1 >> str2 >> K;
	n1 = stoi(str1.substr(0, str1.find('/')));
	m1 = stoi(str1.substr(str1.find('/') + 1, str1.size() - str1.find('/') - 1));
	n2 = stoi(str2.substr(0, str2.find('/')));
	m2 = stoi(str2.substr(str2.find('/') + 1, str2.size() - str2.find('/') - 1));
	//cout << n1 << " " << m1;
	nn1 = n1 * m2 * K;
	nn2 = n2 * m1 * K;
	nm1 = m1 * m2 * K;
	int max, min;
	if (nn1 > nn2) {
		max = nn1;
		min = nn2;
	}
	else
	{
		max = nn2;
		min = nn1;
	}
	int num = max - min;
	int t1, t2;
	int** a = new int* [num];
	for (int i = 0; i < num; i++) {
		a[i] = new int[2];
	}
	for (int i = min + 1; i < max; i++) {
		t1 = i;
		t2 = nm1;
		zj(t1, t2);
		a[i - min - 1][0] = t1;
		a[i - min - 1][1] = t2;
	}
	int last;
	for (last = num - 1; last >= 0 && a[last][1] != K; last--);
	for (int i = 0; i < num; i++) {
		if (a[i][1] == K) {
			cout << a[i][0] << "/" << a[i][1];
			if (i != last)
				cout << " ";
		}

	}
}

void zj(int& a, int& b) {
	for (int i = b; i > 0; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			a = a / i;
			b = b / i;
			break;
		}
	}
}