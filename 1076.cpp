#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	string str;
	string res;
	int ad;
	getchar();
	for (size_t i = 0; i < N; i++)
	{

		getline(cin, str);
		ad = str.find('T');
		ad = ad - 2;
		if (str[ad] == 'A')
			res.push_back('1');
		else if (str[ad] == 'B')
		{
			res.push_back('2');
		}
		else if (str[ad] == 'C')
		{
			res.push_back('3');
		}
		else if (str[ad] == 'D')
		{
			res.push_back('4');
		}
	}
	cout << res;
}