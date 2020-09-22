#include<iostream>
#include<string>
#include <map>
#include <vector>
#include <algorithm>
#include <thread>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b);
//vector<pair<string, int>> vsort(map<string, int> m);

map<string, int> dscore;

int main() {
	int n, l, h;
	cin >> n >> l >> h;

	map<string, int> cscore;
	string enums;
	int ds, cs, tp, sum;
	dscore.clear();
	sum = 0;
	vector<pair<string, int>> vall, vdsc, vcdjw, vs;
	for (int i = 0; i < n; i++) {
		cin >> enums >> ds >> cs;
		dscore.insert(pair<string, int>(enums, ds));
		cscore.insert(pair<string, int>(enums, cs));
		tp = ds + cs;
		if (ds >= h && cs >= h) {
			vall.push_back(pair<string, int>(enums, tp));
			sum++;
		}
		else if (ds >= h && cs >= l) {
			vdsc.push_back(pair<string, int>(enums, tp));
			sum++;
		}
		else if (ds >= cs && ds >= l && cs >= l) {
			vcdjw.push_back(pair<string, int>(enums, tp));
			sum++;
		}
		else if (ds >= l && cs >= l) {
			vs.push_back(pair<string, int>(enums, tp));
			sum++;
		}
	}

	//vector<pair<string, int>> *v = new vector<pair<string, int>>[4];

	sort(vall.begin(), vall.end(), cmp);
	sort(vdsc.begin(), vdsc.end(), cmp);
	sort(vcdjw.begin(), vcdjw.end(), cmp);
	sort(vs.begin(), vs.end(), cmp);

	vall.insert(vall.end(), vdsc.begin(), vdsc.end());
	vall.insert(vall.end(), vcdjw.begin(), vcdjw.end());
	vall.insert(vall.end(), vs.begin(), vs.end());

	vector<pair<string, int>>::iterator itv;

	cout << sum << endl;

	for (itv = vall.begin(); itv != vall.end(); itv++) {
		cout << itv->first << " " << dscore[itv->first] << " " << cscore[itv->first] << endl;
	}
}

bool cmp(pair<string, int> a, pair<string, int> b) {
	if (a.second == b.second) {
		if (dscore[a.first] == dscore[b.first])
			return a.first < b.first;
		return dscore[a.first] > dscore[b.first];
	}
	else
		return a.second > b.second;
}