#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool isSS(int num);
int main() {
	int  N, K, num;
	string L, subl;
	cin >> N >> K;
	if (N < K) {
		cout << "404";
		return 0;
	}
	cin >> L;
	for (size_t i = 0; i < L.size() - K + 1; i++)
	{
		subl = L.substr(i, K);
		num = stoi(subl);
		if (isSS(num)) {
			cout << subl;
			return 0;
		}
	}
	cout << "404";
}

bool isSS(int num) {
	for (size_t i = 2; i * i < num; i++)
	{
		if ((num % i) == 0) {
			return false;
		}
	}
	return true;
}
