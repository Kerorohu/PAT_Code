#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void er(vector<int>& v, int temp);
int main() {
	int n, m;
	cin >> n;
	int** a = new int* [n];
	for (size_t i = 0; i < n; i++)
	{
		a[i] = new int[2];
		cin >> a[i][0] >> a[i][1];
	}
	cin >> m;
	vector<int> v;
	int temp;
	for (size_t i = 0; i < m; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	int t0, t1;
	vector<int>::iterator it;
	for (size_t i = 0; i < n; i++)
	{
		t0 = 0; t1 = 0;
		for (it = v.begin(); it != v.end(); it++) {
			if (a[i][0] == *it) {
				if (a[i][0] == 0) {
					t0 = -1;
				}
				t0 = *it;
			}
			if (a[i][1] == *it) {
				if (a[i][1] == 0) {
					t1 = -1;
				}
				t1 = *it;
			}
		}
		if (t0 != 0 && t1 != 0) {
			if (t0 == -1 || t1 == -1) {
				er(v, 00000);
			}
			else
			{
				er(v, t0);
				er(v, t1);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter;
		if (iter != v.end() - 1)
			cout << " ";
	}
}

void er(vector<int>& v, int temp) {
	//vector<int>::iterator it;
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); )
	{
		if (*iter == temp) {
			v.erase(iter);
			break;
		}
		else
		{
			iter++;
		}
	}
}