#include <iostream>
#include <string>
using namespace std;

int main() {
	string N, n1, n2, res;
	int temp;
	cin >> N;
	cin >> n1;
	cin >> n2;

	int tp = stoi(n1);
	n1 = to_string(tp);

	int s = n1.size() - n2.size();
	int ns = n1.size() - N.size();
	int jin = 0, n;
	for (int i = n1.size() - 1; i >= 0; i--)
	{
		if ((i - s) >= 0)
			temp = (int)(n1[i] - '0') + (n2[i - s] - '0');
		else
		{
			temp = (int)(n1[i] - '0');
		}
		if (jin == 1) {
			temp++;
			jin = 0;
		}

		if (N[i - ns] == '0' || N[i - ns] == 'd') {
			if (temp >= 10) {
				temp = temp - 10;
				jin = 1;
				res.push_back((char)(temp + '0'));
			}
			else
			{
				res.push_back((char)(temp + '0'));
			}
		}
		else
		{
			n = (int)(N[i - ns] - '0');
			if (temp >= n) {
				temp = temp - n;
				jin = 1;
				res.push_back((char)(temp + '0'));
			}
			else
			{
				res.push_back((char)(temp + '0'));
			}
		}
	}
	if (jin == 1)
		res.push_back('1');
	for (int i = res.size() - 1; i >= 0; i--)
	{
		cout << res[i];
	}
}