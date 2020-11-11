#include<iostream>
#include<algorithm>

using namespace std;

bool isPalindromicNumber(string a);
string add(string a, string b);

int main() {
	string num;
	cin >> num;
	if (isPalindromicNumber(num)) {
		cout << num << " is a palindromic number.";
		return 0;
	}
	string font, temp, tran;
	int couts = 0;
	while (couts < 10)
	{
		font = num;
		temp = font;
		reverse(temp.begin(), temp.end());
		tran = temp;
		num = add(tran, font);
		couts++;
		cout << font << " + " << tran << " = " << num << endl;
		if (isPalindromicNumber(num)) {
			cout << num << " is a palindromic number.";
			break;
		}
	}
	if (couts >= 10)
		cout << "Not found in 10 iterations.";
}

string add(string a, string b) {
	string sum;
	int t1, t2, s, c = 0, next;
	for (size_t i = 0; i < a.size(); i++)
	{

		t1 = a[i] - '0';
		t2 = b[i] - '0';
		s = t1 + t2 + c;
		next = s / 10;
		s = s % 10;
		c = next;
		sum.push_back((char)(s + '0'));
	}
	if (c != 0)
		sum.push_back((char)(c + '0'));

	reverse(sum.begin(), sum.end());

	return sum;
}

bool isPalindromicNumber(string a) {
	if (a.size() == 1 && a == "0")
		return true;
	else
	{
		int temp = 1;
		int k = a.size();
		for (size_t i = 0; i < k / 2; i++)
		{
			if (a[i] != a[k - i - 1]) {
				temp = 0;
				break;
			}
		}
		if (temp == 0)
			return false;
		else
		{
			return true;
		}
	}
}