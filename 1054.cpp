#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int num,cn = 0;
	cin >> num;
	string temp,sub;
	float number,sum = 0.0;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		try
		{
			number = stof(temp);
			if (temp.find('.') == string::npos) {
				sum += number;
				cn++;
			}
			else
			{
				sub = temp.substr(temp.find('.') + 1, temp.end());
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
		catch (const std::exception &e)
		{
			cout << "ERROR: " << temp << " is not a legal number" << endl;
		}	
	}
	if (cn == 0) {
		cout << "The average of 0 numbers is Undefined";
	}
	else
	{
		cout << "The average of " << cn << " numbers is " << fixed << setprecision(2) << sum / cn;
	}
}