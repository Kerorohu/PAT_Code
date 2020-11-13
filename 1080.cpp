#include<iostream>  
#include<map>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>

using namespace std;


struct Res
{
	string name;
	int p, m, n, sum;
}res;

bool cmp(Res a, Res b);

int main() {
	int P, M, N, ti;
	cin >> P >> M >> N;
	string ts;
	map<string, int> p, m, n;
	vector<string> names;
	for (size_t i = 0; i < P; i++)
	{
		cin >> ts >> ti;
		names.push_back(ts);
		p.insert(pair<string, int>(ts, ti));
	}



	for (size_t i = 0; i < M; i++)
	{
		cin >> ts >> ti;
		names.push_back(ts);
		m.insert(pair<string, int>(ts, ti));
	}
	for (size_t i = 0; i < N; i++)
	{
		cin >> ts >> ti;
		names.push_back(ts);
		n.insert(pair<string, int>(ts, ti));
	}
	vector<string>::iterator it;

	sort(names.begin(), names.end());
	it = unique(names.begin(), names.end());
	names.erase(it, names.end());
	vector<Res> vres;

	float sum = 0;
	for (it = names.begin(); it != names.end(); it++)
	{
		if (p[*it] >= 200) {
			if (m.find(*it) != m.end()) {
				if (m[*it] > n[*it]) {
					sum = round((float)m[*it] * 0.4 + (float)n[*it] * 0.6);
				}
				else
				{
					sum = n[*it];
				}
			}
			else
			{
				sum = n[*it];
			}
			if (sum >= 60) {
				res.name = *it;
				res.p = p[*it];
				if (m.find(*it) != m.end())
					res.m = m[*it];
				else
				{
					res.m = -1;
				}
				res.n = n[*it];
				res.sum = sum;
				vres.push_back(res);

			}
		}

	}
	sort(vres.begin(), vres.end(), cmp);
	vector<Res>::iterator itr;
	for (itr = vres.begin(); itr != vres.end(); itr++) {
		cout << itr->name << " ";
		cout << itr->p << " ";
		cout << itr->m << " ";
		cout << itr->n << " " << itr->sum;
		if (itr != vres.end() - 1)
			cout << endl;
	}

}

bool cmp(Res a, Res b) {
	if (a.sum == b.sum)
		return a.name < b.name;
	else
	{
		return a.sum > b.sum;
	}
}