#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
	double a, ai, b, bi;
	cin >> a >> ai >> b >> bi;
	double zs, xs;
	zs = a * b * ((cos(ai) * cos(bi)) - (sin(ai) * sin(bi)));
	xs = a * b * (cos(ai) * sin(bi) + sin(ai) * cos(bi));
	if (zs > -0.05 && zs < 0) {
		cout << "0.00";
	}
	else
	{
		cout << fixed << setprecision(2) << zs;
	}

	if (xs > 0) {
		cout << "+" << fixed << setprecision(2) << xs << "i" << endl;
	}
	else if (xs > -0.05 && xs < 0)
	{
		cout << "+0.00i" << endl;
	}
	else
	{
		cout << "-" << fixed << setprecision(2) << -xs << "i" << endl;
	}
}