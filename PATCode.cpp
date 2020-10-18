#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int length = str.size();
	int** a = new int* [length];
	for (int i = 0; i < length; i++) {
		a[i] = new int[2];
	}
	int countp, countt, zcount;
	countp = 0;
	countt = 0;
	zcount = 0;
	int p = 0, t = str.size() - 1;

	while (true)
	{
		if (str[p] != 'P')
			p++;
		else
		{
			break;
		}

	}

	while (true)
	{
		if (str[t] != 'T')
			t--;
		else
		{
			break;
		}

	}

	for (int i = p; i < str.size(); i++) {
		if (str[i] == 'P')
			countp++;
		a[i][0] = countp;
	}

	for (int i = t; i >= 0; i--) {
		if (str[i] == 'T')
			countt++;
		a[i][1] = countt;
	}

	for (int i = p+1; i < t; i++) {
		if (str[i] == 'A') {
			zcount += a[i][0] * a[i][1];
			zcount = zcount % 1000000007;
		}
	}


	//PATPAPTP

	cout << zcount;
}