#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

bool cmp(int a, int b);
using namespace std;

int main() {
	int n, num;
	cin >> n;
	int c;
	vector<int>* v = new vector<int>[5];
	for (int i = 0; i < n; i++) {
		cin >> num;
		c = num % 5;

		switch (c)
		{
		case 0:
			if (num % 2 == 0)
				v[0].push_back(num);
			break;
		case 1:

			v[1].push_back(num);
			break;
		case 2:

			v[2].push_back(num);
			break;
		case 3:

			v[3].push_back(num);
			break;
		case 4:

			v[4].push_back(num);
			break;
		default:
			cout << "input error!" << endl;
		}
	}
	int a1, a2, a3, a5, a4n;
	float a4;
	a1 = 0;
	a2 = 0;

	a4n = v[3].size();
	a4 = 0;
	vector<int>::iterator it0, it1, it3;
	if (!v[0].empty()) {
		for (it0 = v[0].begin(); it0 != v[0].end(); it0++) {
			//cout << "v0 " << *it0 << endl;
			a1 += *it0;
		}
	}
	if (!v[1].empty()) {
		int q = 0;
		for (it1 = v[1].begin(); it1 != v[1].end(); it1++) {
			//cout << "v1 " << *it1 << endl;
			if (q == 0) {
				a2 += *it1;
				q = 1;
			}
			else {
				a2 -= *it1;
				q = 0;
			}

		}
	}
	if (!v[2].empty()) {
		a3 = v[2].size();
	}
	if (!v[3].empty()) {
		for (it3 = v[3].begin(); it3 != v[3].end(); it3++) {
			a4 += *it3;
		}
		a4 = a4 / a4n;
	}
	if (!v[4].empty()) {
		sort(v[4].begin(), v[4].end(), cmp);
		a5 = *v[4].begin();
	}





	if (!v[0].empty()) {
		cout << a1 << " ";
	}
	else
	{
		cout << "N ";
	}

	if (!v[1].empty()) {
		cout << a2 << " ";
	}
	else
	{
		cout << "N ";
	}

	if (!v[2].empty()) {
		cout << a3 << " ";
	}
	else
	{
		cout << "N ";
	}

	if (!v[3].empty()) {
		cout << setiosflags(ios::fixed);
		cout << setprecision(1) << a4 << " ";
	}
	else
	{
		cout << "N ";
	}

	if (!v[4].empty()) {
		cout << a5;
	}
	else
	{
		cout << "N";
	}

}

bool cmp(int a, int b) {
	return a > b;
}