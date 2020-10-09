#include<iostream>
#include<string>
#include<vector>
#include<regex>
#include<sstream>
#include<iomanip>

using namespace std;

vector<string> split(string str, string del);

int main() {
	string str;
	cin >> str;
	vector<string> v;
	float num, z;
	stringstream ss1, ss2;
	v = split(str, "[\\sE]+");
	if (v[0][0] == '-') {
		ss1 << v[0];
		ss1 >> num;
	}
	else if (v[0][0] == '+') {
		v[0].erase(0, 1);
		ss1 << v[0];
		ss1 >> num;
	}
	else
	{
		cout << "v[0]error" << endl;
	}
	float res = 1;
	if (v[1][0] == '-') {
		v[1].erase(0, 1);
		ss2 << v[1];
		ss2 >> z;
		for (int i = 0; i < z; i++) {
			res *= 0.1;
		}
		//cout.setf(ios::fixed, ios::floatfield);
		//cout << num * res;
		string s = to_string(num * res);
		if (s.size() != (v[0].size() + z)) {
			for (int i = 0; i < ((v[0].size() + z + 1) - s.size()); i++) {
				s.push_back('0');
			}
		}
		cout << s;
	}
	else if (v[1][0] == '+') {
		v[1].erase(0, 1);
		ss2 << v[1];
		ss2 >> z;
		for (int i = 0; i < z; i++) {
			res *= 10;
		}
		cout << fixed << setprecision(0) << num * res;
	}
	else
	{
		cout << "v[1]error" << endl;
	}
}

vector<string> split(string str, string del) {
	regex re{ del };
	return vector<string>{
		sregex_token_iterator(str.begin(), str.end(), re, -1),
			sregex_token_iterator()
	};
}