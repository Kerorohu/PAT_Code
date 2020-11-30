#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b);

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	string str;
	int t, ip;
	string parm;
	unordered_map<string, int> m;
	vector<pair<string, int>> resv;
	vector<pair<string, int>>::iterator itv;
	for (size_t i = 0; i < N; i++)
	{
		cin >> str >> t;
		m.insert(pair<string, int>(str, t));
	}
	unordered_map<string, int>::iterator mit;
	for (size_t i = 0; i < M; i++)
	{
		//m.clear();
		resv.clear();
		cin >> ip >> parm;
		switch (ip)
		{
		case 1:
		{
			cout << "Case " << i + 1 << ": 1 " << parm << endl;
			//pair<string, int> res;

			for (mit = m.begin(); mit != m.end(); mit++)
			{
				if (parm[0] == (mit->first)[0])
					resv.push_back(*mit);
			}
			if (resv.size() == 0) {
				printf("NA\n");
				break;
			}
			sort(resv.begin(), resv.end(), cmp);
			for (itv = resv.begin(); itv != resv.end(); itv++)
			{
				//cout << itv->first << " " << itv->second << endl;
				printf("%s %d\n", itv->first.c_str(), itv->second);
			}
			break;
		}
		case 2:
		{
			cout << "Case " << i + 1 << ": 2 " << parm << endl;
			int s = 3 - parm.size();
			int score = 0, people = 0;
			if (s != 0) {
				parm.insert(parm.begin(), s, '0');
			}
			for (mit = m.begin(); mit != m.end(); mit++)
			{
				if (parm == (mit->first).substr(1, 3)) {
					people++;
					score += mit->second;
				}
			}
			if (people != 0)
				cout << people << " " << score << endl;
			else
			{
				printf("NA\n");
			}
			break;
		}
		case 3:
		{
			cout << "Case " << i + 1 << ": 3 " << parm << endl;
			unordered_map<string, int> resm;
			unordered_map<string, int>::iterator resmit;
			for (mit = m.begin(); mit != m.end(); mit++)
			{
				if (parm == (mit->first).substr(4, 6)) {
					resm[(mit->first).substr(1, 3)]++;
				}
			}
			if (resm.size() == 0) {
				printf("NA\n");
				break;
			}
			for (resmit = resm.begin(); resmit != resm.end(); resmit++)
			{
				resv.push_back(*resmit);
			}
			sort(resv.begin(), resv.end(), cmp);
			for (itv = resv.begin(); itv != resv.end(); itv++) {
				//cout << itv->first << " " << itv->second << endl;
				printf("%s %d\n", itv->first.c_str(), itv->second);
			}
			break;
		}
		default:
			break;
		}
	}
}

bool cmp(pair<string, int> a, pair<string, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}