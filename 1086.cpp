#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int sum;
	sum = A * B;
	string str = to_string(sum);
	reverse(str.begin(), str.end());
	cout << stoi(str);
}
