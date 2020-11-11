#include<iostream>
#include<string>

using namespace std;

int main() {
	string temp, t, res;
	cin >> t;
	getchar();

	getline(cin, temp);

	if (t == "C") {
		int counts = 1;
		char tempc;
		string tempstr;
		tempc = temp[0];
		for (size_t i = 1; i < temp.size() + 1; i++)
		{
			if (temp[i] == tempc) {
				counts++;
			}
			else
			{
				if (counts != 1)
					tempstr.append(to_string(counts));
				tempstr.push_back(tempc);
				res.append(tempstr);

				tempc = temp[i];
				counts = 1;
				tempstr.clear();
			}
		}

		cout << res;
	}
	else if (t == "D")
	{
		char tempc;
		int tempi;
		string tempnum;
		for (size_t i = 0; i < temp.size(); i++)
		{
			if (temp[i] <= '9' && temp[i] >= '0') {
				if (temp[i + 1] <= '9' && temp[i + 1] >= '0') {
					tempnum.push_back(temp[i]);
				}
				else if (temp[i + 1] != string::npos)
				{
					tempnum.push_back(temp[i]);
					tempi = stoi(tempnum);
					for (size_t j = 0; j < tempi; j++)
					{
						res.push_back(temp[i + 1]);
					}
					i++;
					tempnum.clear();
				}

			}
			else
			{
				res.push_back(temp[i]);
			}
		}
		cout << res;
	}
}