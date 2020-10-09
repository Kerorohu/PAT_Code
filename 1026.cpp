#include <iostream>
#include <math.h>
constexpr auto CLK_TCK = 100;
using namespace std;

int main() {
	long double c1, c2;
	cin >> c1 >> c2;
	int time = round((c2 - c1) / CLK_TCK);
	int hour, min, sec;
	sec = time % 60;
	min = (time / 60) % 60;
	hour = time / 3600;
	printf("%02d:", hour);
	printf("%02d:", min);
	printf("%02d", sec);
}