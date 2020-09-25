#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a, int b);
int main() {
	int zhonglei, zuidaxuqiu,zuidashouyi,yuebingshuliang;
	int* kucun = new int[zhonglei];
	int* zongshoujia = new int[zhonglei];
	int* danjia = new int[zhonglei];
	vector<pair<int, int>> kczsj;
	
	yuebingshuliang = 0;
	cin >> zhonglei >> zuidaxuqiu;

	for (int i = 0; i < zhonglei; i++) {
		cin >> kucun[i];
	}
	for (int i = 0; i < zhonglei; i++) {
		cin >> zongshoujia[i];
		danjia[i] = (zongshoujia[i] * 1000) / kucun;
		kczsj.push_back(pair<int, int>(kucun[i], danjia[i]));
	}

	sort(kczsj.begin(), kczsj.end(),cmp);
	int n = 0;
	zuidashouyi = 0;
	vector<pair<int, int>>::iterator it;
	it = kczsj.begin();

	while (yuebingshuliang < zuidaxuqiu) {
		n = (zuidaxuqiu - yuebingshuliang) / *it->second;
		
		if (n > (zuidaxuqiu - yuebingshuliang))
		{
			n = zuidaxuqiu - yuebingshuliang;
		}else if (n > (*it->first)){
			n = (*it->first);
		}
		zuidashouyi += n * (* it->second);
		yuebingshuliang += n;
		it++;
	}

	cout << yuebingshuliang;
}

bool cmp(pair<int,int> a ,pair<int,int> b) {
	return a.second > b.second;
}