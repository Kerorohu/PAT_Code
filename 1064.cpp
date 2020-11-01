#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
bool find(vector<int> v, int sum);
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int temp = 0, sum;
	string str;
	vector<int> v;
	for (size_t i = 0; i < n; i++)
	{
		str = to_string(a[i]);
		sum = 0;
		for (size_t j = 0; j < str.size(); j++)
		{
			sum += str[j] - '0';
		}
		if (!find(v, sum)) {
			v.push_back(sum);
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << endl;
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it;
		if (it != v.end() - 1)
			cout << " ";
	}
}

bool find(vector<int> v, int sum) {
	vector<int>::iterator it;
	bool temp = false;
	for (it = v.begin(); it != v.end(); it++) {
		if (*it == sum)
			temp = true;
	}
	return temp;
}