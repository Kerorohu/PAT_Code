#include <string>
#include <iostream>
#include <sstream>

using namespace std;
int main() {
	string a, b, sa, sb;
	char da, db;
	int ca, cb;
	stringstream ssa, ssb;
	sa = "";
	sb = "";
	cin >> a >> da >> b >> db;
	string::iterator it, itb;
	for (it = a.begin(); it != a.end(); it++) {
		if (*it == da)
			sa += da;
	}

	for (itb = b.begin(); itb != b.end(); itb++) {
		if (*itb == db)
			sb += db;
	}
	if (sa.empty())
		sa = "0";
	if (sb.empty())
		sb = "0";
	ssa << sa;
	ssa >> ca;

	ssb << sb;
	ssb >> cb;

	cout << ca + cb;
}