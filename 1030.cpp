#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	long n, p, temp, max;
	cin >> n >> p;
	vector<long> v, res;
	vector<vector<long>> vv;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	vector<long>::iterator it, iti;

	for (it = v.begin(); it != v.end(); it++) {
		max = *it * p;
		for (iti = it; iti != v.end(); iti++) {
			if (*iti <= max)
				res.push_back(*iti);
		}
		vector<long>(res).swap(res);
		vv.push_back(res);
		res.clear();
	}
	vector<vector<long>>(vv).swap(vv);
	int maxvv = 0;
	vector<vector<long>>::iterator itv;
	for (itv = vv.begin(); itv != vv.end(); itv++) {
		if (itv->size() > maxvv)
			maxvv = itv->size();
	}

	cout << maxvv;
}