#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	string str;
	cin >> str;
	map<int, int> m;

	/*for (int i = 0; i < 10; i++) {
		m[i] = 0;
	}*/

	string::iterator it;
	int temp;
	for (it = str.begin(); it < str.end(); it++) {
		temp = (int)*it - 48;
		m[temp]++;
	}

	for (int i = 0; i < 10; i++) {
		if (m[i] != 0)
			cout << i << ":" << m[i] << endl;
	}
}