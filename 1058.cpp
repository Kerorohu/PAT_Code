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
	for (int i = 0; i < M; i++) {
		cin >> temp.score >> temp.num >> temp.rnum;
		getline(cin, temp.rstr);
		m.insert(pair<int, Pro>(i, temp));
	}
}