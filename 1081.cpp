#include<iostream>
#include<string>

using namespace std;

int main() {
	int N;
	cin >> N;
	string in;
	int ts, tzm, ti;
	getchar();
	for (size_t i = 0; i < N; i++)
	{
		getline(cin, in);
		ts = 0, tzm = 0, ti = 0;
		if (in.size() < 6) {
			cout << "Your password is tai duan le." << endl;
		}
		else
		{
			for (size_t i = 0; i < in.size(); i++)
			{
				if ((in[i] <= '9' && in[i] >= '0') || (in[i] >= 'a' && in[i] <= 'z') || (in[i] >= 'A' & in[i] <= 'Z') || in[i] == '.') {
					if (in[i] <= '9' && in[i] >= '0') {
						ts = 1;
					}
					else if ((in[i] >= 'a' && in[i] <= 'z') || (in[i] >= 'A' & in[i] <= 'Z'))
					{
						tzm = 1;
					}

				}
				else
				{
					ti = 1;
					break;
				}
			}
			if (ti == 1) {
				cout << "Your password is tai luan le." << endl;
			}
			else if (ts == 1 && tzm == 1) {
				cout << "Your password is wan mei." << endl;
			}
			else if (ts == 0 && tzm == 1)
			{
				cout << "Your password needs shu zi." << endl;
			}
			else if (tzm == 0 && ts == 1) {
				cout << "Your password needs zi mu." << endl;
			}
		}
	}

}