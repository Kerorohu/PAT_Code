##include <iostream>
#include <string>

using namespace std;

int main() {
	string get, want;
	cin >> get >> want;

	int temp = 1;

	for (int i = 0; i < want.size();) {
		if (get.find(want[i]) == string::npos) {
			temp = 0;
			i++;
		}
		else
		{
			get.erase(get.find(want[i]), 1);
			want.erase(i, 1);
		}
	}

	if (temp == 1) {
		cout << "Yes " << get.size();
	}
	else
	{
		cout << "No " << want.size();
	}
}