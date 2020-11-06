#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int M, N, S;
	cin >> M >> N >> S;
	string* str = new string[M];
	for (size_t i = 0; i < M; i++)
	{
		cin >> str[i];
	}

	vector<string> v;
	for (size_t i = S - 1; i < M; )
	{
		if (count(v.begin(), v.end(), str[i]) != 0)
			i++;
		else
		{
			v.push_back(str[i]);
			i = i + N;
		}
	}

	if (v.size() == 0)
		cout << "Keep going...";
	else
	{
		vector<string>::iterator it;
		for (it = v.begin(); it != v.end(); it++) {
			cout << *it;
			if (it != v.end() - 1)
				cout << endl;
		}
	}
}
