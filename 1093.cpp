#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string A, B, res;
	getline(cin, A);
	getline(cin, B);
	A.append(B);
	bool b[100] = { 0 };
	for (int j = 0; j < A.size(); j++)
	{
		if (b[A[j] - ' '] == 0)
		{
			cout << A[j];
			b[A[j] - ' '] = 1;
		}
	}
}