#include <iostream>
#include <map>
#include <iomanip>

using namespace std;
int isPrime(int n);
struct Stu
{
	int num;
	int flag;
}temp;

int main() {
	int n, k;
	cin >> n;
	map<int, Stu> m;
	int ts;
	temp.flag = 0;
	for (size_t i = 0; i < n; i++)
	{
		cin >> ts;
		temp.num = i + 1;
		m.insert(pair<int, Stu>(ts, temp));
	}
	cin >> k;
	int tn;
	for (size_t i = 0; i < k; i++)
	{
		cin >> tn;
		if (m.count(tn) > 0) {
			if (m[tn].flag == 1) {
				cout << setw(4) << setfill('0') << tn << ": Checked";
			}
			else if (m[tn].num == 1) {
				cout << setw(4) << setfill('0') << tn << ": Mystery Award";
			}
			else if (isPrime(m[tn].num)) {
				cout << setw(4) << setfill('0') << tn << ": Minion";
			}
			else
			{
				cout << setw(4) << setfill('0') << tn << ": Chocolate";
			}
			m[tn].flag = 1;
		}
		else
		{
			cout << tn << setw(4) << setfill('0') << ": Are you kidding?";
		}
		if (i != k - 1)
			cout << endl;
	}
}

int isPrime(int n) {
	int temp = 1;
	for (size_t i = 2; i < n / 2; i++)
	{
		if ((n % i) == 0)
			temp = 0;
	}
	return temp;
}