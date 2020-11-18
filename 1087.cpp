#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main() {
	int N, temp;
	cin >> N;
	map<int, int> m;
	for (size_t i = 1; i <= N; i++)
	{
		temp = i / 2 + i / 3 + i / 5;
		m[temp]++;
	}
	cout << m.size();
}