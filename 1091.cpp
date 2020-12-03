#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int M, N, temp, t, status;
	cin >> M;
	string str, ts, stemp;
	for (size_t i = 0; i < M; i++)
	{
		status = 1;
		cin >> temp;
		for (size_t j = 1; j < 10; j++)
		{
			ts = to_string(temp);
			t = ts.size();
			N = j * temp * temp;
			str = to_string(N);
			stemp = str.substr(str.size() - t);
			if (stemp == ts) {
				cout << j << " " << N << endl;
				status = 0;
				break;
			}
		}
		if (status == 1) {
			cout << "No" << endl;
		}
	}
}