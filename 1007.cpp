#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> ss;
	int bol = 1;

	for (int j = 1; j < n; j++) {
		for (int i = 2; i <= sqrt(j); i++) {
			if (j % i == 0)
				bol = 0;
		}
		if (bol == 1)
			ss.push_back(j);
		bol = 1;
	}

	vector<int>::iterator it;
	int num = 0;
	for (it = ss.begin(); it != ss.end(); it++) {
		//cout << *it << endl;
		if (it != ss.end() - 1 && *(it + 1) - *it == 2)
			num++;
	}

	cout << num;
}