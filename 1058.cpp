#include <iostream>
#include <map>
#include <string>
#include <vector>


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
		temp.rstr.erase(0, 1);
		m.insert(pair<int, Pro>(i, temp));
	}
	int c, j, b;
	string stp;
	int* sc = new int[M];
	int* stu = new int[N];
	for (size_t i = 0; i < M; i++)
	{
		sc[i] = 0;
	}

	for (size_t i = 0; i < N; i++)
	{
		stu[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		getline(cin, stemp);
		c = 0; j = 0; b = 0; stp = "";
		while (c < M)
		{
			if (stemp[j] == ')') {
				b = 0;
				c++;
				if (stp != m[c - 1].rstr)
					sc[c - 1]++;
				else
				{
					stu[i] = stu[i] + m[c - 1].score;
				}
				stp = "";
			}

			if (b == 1) {
				stp += stemp[j];
			}

			if (stemp[j] == '(') {
				j = j + 2;
				b = 1;
			}
			j++;
		}
	}

	int max = 0;
	vector<int> v;
	for (size_t i = 0; i < M; i++)
	{
		if (sc[i] > max)
			max = sc[i];
	}

	for (size_t i = 0; i < M; i++)
	{
		if (sc[i] == max)
			v.push_back(i);
	}

	for (size_t i = 0; i < N; i++)
	{
		cout << stu[i] << endl;
	}

	if (max != 0) {
		cout << max << " ";

		vector<int>::iterator it;
		for (it = v.begin(); it != v.end(); it++)
		{
			cout << *it + 1;
			if (it != v.end() - 1)
				cout << " ";
		}
	}
	else
	{
		cout << "Too simple";
	}
}