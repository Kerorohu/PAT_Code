#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int num, temp;
	cin >> num;
	int* a = new int[num];
	vector<int> v;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		a[i] = temp;
	}

	for (int i = 0; i < num; i++) {
		int min = 0, max = 0;
		for (int j = 0; j < i; j++) {
			if (a[j] > a[i])
				min = 1;
		}

		for (int k = num - 1; k > i; k--) {
			if (a[k] < a[i])
				max = 1;
		}
		if (min == 0 && max == 0) {
			v.push_back(a[i]);
		}

	}
	cout << v.size() << endl;
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it;
		if (it != v.end() - 1)
			cout << " ";
	}
}