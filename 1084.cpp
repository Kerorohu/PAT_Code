#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	int N, temp, t1 = 0;
	string d, res;
	cin >> d >> N;

	for (size_t i = 0; i < N - 1; i++)
	{
		//d[0] = d[0] + 10;
		res.clear();
		for (size_t j = 0; j < d.size(); j++)
		{
			temp = 1;
			while (j + 1 < d.size() && d[j] == d[j + 1])
			{
				temp++;
				j++;
			}
			res.push_back(d[j]);
			res.append(to_string(temp));
		}
		if (res != "") {
			d = res;

		}
		//d[0] = d[0] - 10;

	}

	cout << d;
}