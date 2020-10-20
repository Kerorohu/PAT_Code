#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Data
{
	int jhan, jhua, yhan, yhua;
} mdata;

int main() {
	int num;
	cin >> num;
	vector<Data> v;
	int j=0, y=0;
	for (int i = 0; i < num; i++) {
		cin >> mdata.jhan >> mdata.jhua >> mdata.yhan >> mdata.yhua;
		v.push_back(mdata);
		if (mdata.jhua != mdata.yhua) {
			if (mdata.jhua == (mdata.jhan + mdata.yhan)) {
				y++;
			}
			if (mdata.yhua == (mdata.yhan + mdata.jhan)) {
				j++;
			}
		}
	}
	cout << j << " " << y;
}