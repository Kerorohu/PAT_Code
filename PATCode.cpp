﻿
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
	int num, shang, yu;
	yu = 0;
	for (int i = 0; i < s.size(); i++) {
		jisuan = to_string(yu) + s[i];
		num = stoi(jisuan);
		shang = num / a;
		yu = num - shang * a;
		tempr = to_string(shang);
		temps.append(tempr);
	}
	if (temps.size() > 1 && temps[0] == '0')
		temps.erase(temps.begin());

	return pair<string, int>(temps, yu);
}