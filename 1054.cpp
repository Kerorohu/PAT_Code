#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int num, cn = 0;
	cin >> num;
	string temp, sub;
	float number, sum = 0.0;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		try
		{
			number = stof(temp);
			if (number > 1000 || number < -1000) {
				cout << "ERROR: " << temp << " is not a legal number" << endl;
			}
			else if (temp.find('.') == string::npos) {
				sum += number;
				cn++;
			}
			else
			{
				sub = temp.substr(temp.find('.') + 1);
				if (sub.size() <= 2) {
					sum += number;
					cn++;
				}
				else
				{
					cout << "ERROR: " << temp << " is not a legal number" << endl;
				}
			}

		}
		catch (const std::exception&)
		{
			cout << "ERROR: " << temp << " is not a legal number" << endl;
		}
	}
	if (cn == 0) {
		cout << "The average of 0 numbers is Undefined";
	}
	else if (cn == 1) {
		cout << "The average of 1 number is " << fixed << setprecision(2) << sum;
	}
	else
	{
		cout << "The average of " << cn << " numbers is " << fixed << setprecision(2) << sum / cn;
	}
}