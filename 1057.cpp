#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		if ((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A')) {
			if ((str[i] <= 'z' && str[i] >= 'a')) {
				str[i] -= 32;
			}
			sum += (int)(str[i] - 64);
		}
	}
	vector<int> v;
	int c1 = 0, c0 = 0;
	while (sum != 0)
	{
		v.push_back(sum % 2);
		if (sum % 2 == 0)
			c0++;
		if (sum % 2 == 1)
			c1++;
		sum /= 2;
	}

	cout << c0 << " " << c1;
}