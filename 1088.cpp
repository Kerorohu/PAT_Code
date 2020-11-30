#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;
struct Pro
{
	float jia, yi, bing;
}pro;
int main() {
	int jia, x, y, wo;
	float yi, bing;
	cin >> wo >> x >> y;
	string temp;
	vector<Pro> res;
	for (size_t i = 10; i < 100; i++)
	{
		jia = i;
		yi = jia / 10 + (jia % 10) * 10;
		bing = abs(jia - yi) / x;
		if (bing == yi / y) {
			pro.jia = jia;
			pro.yi = yi;
			pro.bing = bing;
			res.push_back(pro);
		}
	}
	vector<Pro>::iterator newj;
	if (res.size() == 0) {
		cout << "No Solution";
		return 0;
	}
	else if (res.size() > 1)
	{
		newj = max_element(res.begin(), res.end(),
			[](Pro a, Pro b) {return a.jia < b.jia; });
	}
	else
	{
		newj = res.begin();
	}

	cout << newj->jia << " ";
	if (wo > newj->jia) {
		cout << "Gai" << " ";
	}
	else if (wo == newj->jia) {
		cout << "Ping" << " ";
	}
	else
	{
		cout << "Cong" << " ";
	}

	if (wo > newj->yi) {
		cout << "Gai" << " ";
	}
	else if (wo == newj->yi) {
		cout << "Ping" << " ";
	}
	else
	{
		cout << "Cong" << " ";
	}

	if (wo > newj->bing) {
		cout << "Gai";
	}
	else if (wo == newj->bing) {
		cout << "Ping";
	}
	else
	{
		cout << "Cong";
	}
}