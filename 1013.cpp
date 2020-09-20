#include <iostream>
#include <vector>

using namespace std;
bool issushu(int n);
int main() {
	vector<int> v;
	v.push_back(2);
	int n = 3;
	for (int i = v.size(); i < 10000;) {
		if (issushu(n))
			v.push_back(n);
		i = v.size();
	}
	int a, b;
	cin >> a >> b;
	vector<int>::iterator it;
	for (it = v.begin() + a - 1; it != v.begin() + b; it++) {
		cout << *it;
		if (it != v.begin() + b - 1)
			cout << " ";
	}
}

bool issushu(int m) {
	int i = 1;
	for (int j = 2; j < m; j++) {
		if (m % j == 0)
			i = 0;
	}
	return i;
}

