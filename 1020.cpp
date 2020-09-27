#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

bool cmp(pair<float, float> a, pair<float, float> b);

int main() {
	int zhonglei, zuidaxuqiu;
	cin >> zhonglei >> zuidaxuqiu;
	float* kucun = new float[zhonglei];
	float* zongshoujia = new float[zhonglei];
	float* danjia = new float[zhonglei];
	vector<pair<float, float>> kczsj;
	float zuidashouyi, yuebingshuliang;
	yuebingshuliang = 0;


	for (int i = 0; i < zhonglei; i++) {
		cin >> kucun[i];
	}
	for (int i = 0; i < zhonglei; i++) {
		cin >> zongshoujia[i];
		danjia[i] = (zongshoujia[i] * 10000) / kucun[i];
		kczsj.push_back(pair<float, float>(kucun[i], danjia[i]));
	}

	sort(kczsj.begin(), kczsj.end(), cmp);
	float n = 0;
	zuidashouyi = 0;
	vector<pair<float, float>>::iterator it;
	it = kczsj.begin();

	while (yuebingshuliang < zuidaxuqiu && it != kczsj.end()) {

		//cout << "it.second= " << (*it).second;
		n = (*it).first;

		if (n > (zuidaxuqiu - yuebingshuliang))
		{
			n = zuidaxuqiu - yuebingshuliang;
		}

		zuidashouyi += n * (*it).second * 10000;
		yuebingshuliang += n;
		it++;
	}
	//setiosflags(ios::fixed);
	cout << fixed << setprecision(2) << zuidashouyi / 1e+08;
}

bool cmp(pair<float, float> a, pair<float, float> b) {
	return a.second >= b.second;
}