#include <iostream>
#include <string>
using namespace std;
pair<string, int> chufa(string, int);

int main() {
	string str;
	int num;
	cin >> str >> num;
	pair<string, int> p;
	p = chufa(str, num);
	cout << p.first << " " << p.second;
}

pair<string, int> chufa(string s, int a) {
	string temp = "";
	string jisuan, temps, tempr;
	int num, shang ,yu;
	for (int i = 0; i < s.size(); i++) {
		jisuan = yu + s[i];
		num = stoi(jisuan);
		shang = num / a;
		yu = num - shang * a;
		temps.push_back(to_string(shang));
	}

	return pair<string, int>(temps, yu);
}