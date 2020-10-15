#include <iostream>
#include <string>


using namespace std;

bool isSame(char c, char s);
char toBig(char c);

int main() {
	string strf, strc, v, res;
	cin >> strf >> strc;
	int b = 0, n = 0;
	for (int i = 0; i < strf.size(); i++) {
		for (int j = 0; j < strc.size(); j++) {
			//if(strf[i] != '_' && strc[j] != '_'){
			if (isSame(strf[i], strc[j])) {
				b = 1;
			}
			//}
		}
		if (b == 0)
			v.push_back(strf[i]);
		b = 0;
	}

	for (int i = 0; i < v.size(); i++) {
		v[i] = toBig(v[i]);
	}

	for (size_t i = 0; i < v.size(); i++) {
		if (res.find(v[i]) == res.npos) {
			res += v[i];
		}
	}
	cout << res;

}

bool isSame(char c, char s) {
	if (c == s)
		return true;
	else if (c == s + 32)
	{
		return true;
	}
	else if (c == s - 32) {
		return true;
	}
	else
	{
		return false;
	}
}

char toBig(char c) {
	if (c > 97 && c < 122) {
		return c - 32;
	}
	else
	{
		return c;
	}
}