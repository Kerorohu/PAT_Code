#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	string err, str, res;

	getline(cin, err);
	getline(cin, str);

	int t = 0;
	if (!err.empty()) {
		if (err.find('+') != string::npos) {
			err.erase(err.find('+'), 1);
			for (int i = 0; i < str.size(); i++) {
				if (str[i] > 90 || str[i] < 65) {
					for (int j = 0; j < err.size(); j++) {
						if (str[i] == err[j])
							t = 1;
						else if (str[i] == (err[j] + 32))
						{
							t = 1;
						}
					}
					if (t == 0)
						res.push_back(str[i]);
					t = 0;
				}
			}
		}
		else
		{
			for (int i = 0; i < str.size(); i++) {
				for (int j = 0; j < err.size(); j++) {
					if (str[i] == err[j])
						t = 1;
					else if (str[i] == (err[j] + 32))
					{
						t = 1;
					}
					else if (str[i] == (err[j] - 32))
					{
						t = 1;
					}
				}
				if (t == 0)
					res.push_back(str[i]);
				t = 0;
			}
		}
	}
	else {
		res = str;
	}
	if (res.empty()) {
		cout << endl;
	}
	else
	{
		cout << res;
	}

}