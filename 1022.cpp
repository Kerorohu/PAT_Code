#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, d;
	cin >> a >> b >> d;
	int sum = a + b;
	int temp;
	vector<int> v;
	while (sum < d)
	{
		temp = sum % d;
		v.push_back(temp);
		sum = sum / d;
	}
	v.push_back(sum);

	vector<int>::reverse_iterator rit;
	for (rit = rbegin(); rit != rend(); rit++) {
		cout << *rit;
	}

	system("pause");
}