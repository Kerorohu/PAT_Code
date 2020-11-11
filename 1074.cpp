#include <iostream>
#include <algorithm>
using namespace std;
int D[22] = { 0 }, a[22] = { 0 }, b[22] = { 0 };
int f1(int a[], string tmp) {
	for (int i = 0; i < tmp.size(); i++) {
		a[i] = (tmp[i] == 'd' || tmp[i] == '0') ? 10 : tmp[i] - '0';
	}
}

int f2(int a[], string tmp) {
	for (int i = 0; i < tmp.size(); i++) {
		a[i] = tmp[i] - '0';
	}
}

int main() {
	int N = 0, result[100] = { 0 };
	string tmp, tmp1, tmp2;
	cin >> tmp >> tmp1 >> tmp2;
	reverse(tmp.begin(), tmp.end()), reverse(tmp1.begin(), tmp1.end()), reverse(tmp2.begin(), tmp2.end());
	f1(D, tmp); f2(a, tmp1); f2(b, tmp2);
	N = tmp.size();
	int carry = 0, i = 0, flag = 0;
	for (i = 0; i < N; i++) {
		result[i] = (a[i] + b[i] + carry) % D[i];
		carry = (a[i] + b[i] + carry) / D[i];
	}
	result[N] = carry;
	for (int j = N; j >= 0; j--) {
		if (result[j] || flag) {
			flag = 1;
			cout << result[j];
		}
	}
	if (!flag)	cout << "0";
	return 0;
}