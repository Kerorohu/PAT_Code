#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int z[11] = { 1,0,10,9,8,7,6,5,4,3,2 };
	int num, sum = 0, mz, temp;
	cin >> num;
	string str;
	vector<string> res;
	for (int i = 0; i < num; i++) {
		cin >> str;
		//cout << "str = " << str << endl;
		for (int j = 0; j < 17; j++) {
			sum += (str[j] - 48) * w[j];
		}
		mz = sum % 11;
		if (str[17] == 'X') {
			temp = 10;
		}
		else
		{
			temp = str[17] - 48;
		}
		if (temp != z[mz])
			res.push_back(str);
		sum = 0;
	}

	if (res.size() == 0) {
		cout << "All passed";
	}
	else
	{
		vector<string>::iterator it;
		for (it = res.begin(); it != res.end(); it++) {
			cout << *it;
			if (it != res.end() - 1)
				cout << endl;
		}
	}
}