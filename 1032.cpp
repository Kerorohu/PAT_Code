#include <iostream>
#include <map>

using namespace std;

int main() {
	int num, number, score;
	cin >> num;
	map<int, int> m;
	for (int i = 0; i < num; i++) {
		cin >> number >> score;
		m[number] += score;
	}
	pair<int, int> max;
	max = pair<int, int>(0, 0);
	for (int i = 0; i < m.size(); i++) {
		if (m[i] > max.second) {
			max.second = m[i];
			max.first = i;
		}
	}

	cout << max.first << " " << max.second;
}