#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<math.h>

using namespace std;
void deleteMinMax(vector<float>& v);

int main() {
	int N, M;
	cin >> N >> M;
	float** a = new float* [N];
	vector<float> v, res;
	float temp, tec, min, max;

	for (size_t i = 0; i < N; i++)
	{
		temp = 0;
		a[i] = new float[N];
		for (size_t j = 0; j < N; j++)
		{
			cin >> a[i][j];
			if (a[i][j] >= 0 && a[i][j] <= M && j == 0) {
				tec = a[i][j];
			}
			if (a[i][j] >= 0 && a[i][j] <= M && j != 0) {
				v.push_back(a[i][j]);
			}
		}
		deleteMinMax(v);
		temp = accumulate(v.begin(), v.end(), 0);
		temp = (temp / v.size() + tec) / 2;
		temp = round(temp);
		cout << temp << endl;
		v.clear();
	}


}

void deleteMinMax(vector<float>& v) {
	auto prmin = min_element(v.begin(), v.end());
	v.erase(prmin);
	auto prmax = max_element(v.begin(), v.end());
	v.erase(prmax);
}