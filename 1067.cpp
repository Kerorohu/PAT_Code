#include<iostream>
#include<string>
using namespace std;

int main() {
	string pwd, in;
	int lim, c = 0;
	cin >> pwd >> lim;
	in = "";
	getchar();
	while (in != "#")
	{
		getline(cin, in);
		c++;
		if (in == "#")
			break;
		if (pwd == in) {
			cout << "Welcome in";
			break;
		}
		else
		{
			cout << "Wrong password: " << in << endl;
		}

		if (c == lim) {
			cout << "Account locked";
			break;
		}

	}
}