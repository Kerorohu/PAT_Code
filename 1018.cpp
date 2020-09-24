#include <iostream>
#include <string>
//#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b);
bool cmpt(pair<char, int> a, pair<char, int> b);

int main() {
	int n;
	cin >> n;
	pair<char, char> p;
	char a, b;
	int ac[6];
	string stra, strb;
	int bc[6];
	for (int i = 0; i < 6; i++) {
		ac[i] = 0;
		bc[i] = 0;
	}

	//a[0] win --a[1] pin --a[2] lose --a[3]Ccount --a[4] Jcount --a[5] Bcount
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == 'C' && b == 'J') {
			ac[0]++;
			bc[2]++;
			ac[3]++;
		}
		else if (a == 'C' && b == 'B')
		{
			ac[2]++;
			bc[0]++;
			bc[5]++;
		}
		else if (a == 'J' && b == 'C') {
			ac[2]++;
			bc[0]++;
			bc[3]++;
		}
		else if (a == 'J' && b == 'B') {
			ac[0]++;
			bc[2]++;
			ac[4]++;
		}
		else if (a == 'B' && b == 'C') {
			ac[0]++;
			bc[2]++;
			ac[5]++;
		}
		else if (a == 'B' && b == 'J') {
			ac[2]++;
			bc[0]++;
			bc[4]++;
		}
		else if (a == b) {
			ac[1]++;
			bc[1]++;
		}
	}
	cout << ac[0] << " " << ac[1] << " " << ac[2] << endl;
	cout << bc[0] << " " << bc[1] << " " << bc[2] << endl;

	/*map<char, int> ma,mb;
	ma.insert(pair<char, int>('C', a[3]));
	ma.insert(pair<char, int>('J', a[4]));
	ma.insert(pair<char, int>('B', a[5]));
	mb.insert(pair<char, int>('C', b[3]));
	mb.insert(pair<char, int>('J', b[4]));
	mb.insert(pair<char, int>('B', b[5]));*/
	vector<pair<char, int>> vpa, vpb, at, bt;
	vpa.push_back(pair<char, int>('C', ac[3]));
	vpa.push_back(pair<char, int>('J', ac[4]));
	vpa.push_back(pair<char, int>('B', ac[5]));
	vpb.push_back(pair<char, int>('C', bc[3]));
	vpb.push_back(pair<char, int>('J', bc[4]));
	vpb.push_back(pair<char, int>('B', bc[5]));

	sort(vpa.begin(), vpa.end(), cmp);
	sort(vpb.begin(), vpb.end(), cmp);

	vector<pair<char, int>>::iterator ita, itb;
	pair<char, int> temp;
	temp = pair<char, int>(vpa.begin()->first, vpa.begin()->second);
	at.push_back(temp);
	if (vpa.begin() + 1 != vpa.end()) {
		for (ita = vpa.begin() + 1; ita != vpa.end(); ita++) {
			if (ita->second == temp.second)
				at.push_back(*ita);

		}
	}

	temp = pair<char, int>(vpb.begin()->first, vpb.begin()->second);
	bt.push_back(temp);
	if (vpb.begin() + 1 != vpb.end()) {
		for (itb = vpb.begin() + 1; itb != vpb.end(); itb++) {
			if (itb->second == temp.second)
				bt.push_back(*itb);
		}
	}

	sort(at.begin(), at.end(), cmpt);
	sort(bt.begin(), bt.end(), cmpt);

	cout << at.begin()->first << " " << bt.begin()->first;
}

bool cmpt(pair<char, int> a, pair<char, int> b) {
	return a.first < b.first;
}

bool cmp(pair<char, int> a, pair<char, int> b) {
	return a.second > b.second;
}
