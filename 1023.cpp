#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	int temp;
	map<int, int> m;
	for (int i = 0; i < 10; i++) {
		cin >> temp;
		m.insert(pair<int, int>(i, temp));
	}
	map<int, int>::iterator it;
	it = m.find(1);
	for (; it != m.end(); it++) {
		if (it->second != 0) {
			cout << it->first;
			it->second -= 1;
			break;
		}
	}

	for (it = m.begin(); it != m.end(); it++) {
		while (it->second != 0)
		{
			cout << it->first;
			it->second -= 1;
		}
	}
}