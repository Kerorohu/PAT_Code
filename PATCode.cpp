#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Pro
{
	int score, num, rnum;
	string rstr;
}temp;

int main() {
	int N, M;
	cin >> N >> M;
	map<int, Pro> m;
	string stemp;
	for (int i = 0; i < M; i++) {
		cin >> temp.score >> temp.num >> temp.rnum;
		getline(cin, temp.rstr);
		m.insert(pair<int, Pro>(i, temp));
	}
	int c,j,b;
	string stp;
	for (int i = 0; i < N; i++) {
		cin >> stemp;
		c = 0; j = 0; b = 0; stp = "";
		while (c < M)
		{
			if (stemp[j] == '(') {
				c++;
				j = j + 2;
				b = 1;
			}
			if (stemp[j] == ')') {
				b = 0;

			}
			if (b == 1) {
				stp += stemp[j];
			}

			
			j++;
		}
	}
}