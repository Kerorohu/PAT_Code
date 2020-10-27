#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	char* a = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	string temp;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] != a[j]) {
				temp.push_back(a[i]);
				temp.push_back(a[j]);
				v.push_back(temp);
				temp.clear();
			}
		}
	}
	int sum = 0;
	vector<string>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		sum += stoi(*it);
	}
	cout << sum;
}