#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

struct SS
{
	int x, y, color;
}ss;

bool cmp(SS a, SS b);
bool equal(SS a, SS b);

int main() {
	int M, N, tol;
	cin >> M >> N >> tol;
	int** a = new int* [N];

	for (size_t i = 0; i < N; i++)
	{
		a[i] = new int[M];
	}

	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < M; j++) {
			cin >> a[i][j];
		}
	}
	int temp;
	vector<SS> v, res;
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < M; j++) {
			temp = 0;
			for (size_t k = 0; k < 3; k++)
			{
				for (size_t l = 0; l < 3; l++) {
					if (i + k - 1 >= 0 && i + k - 1 < N && j + l - 1 >= 0 && j + l - 1 < M && (k != 1 || l != 1)) {
						if (abs(a[i][j] - a[i + k - 1][j + l - 1]) <= tol)
							temp = 1;
					}
				}
			}
			if (temp == 0) {
				ss.x = i;
				ss.y = j;
				ss.color = a[i][j];
				v.push_back(ss);
			}

		}
	}
	
	temp = -1;
	sort(v.begin(), v.end(), cmp);
	vector<SS>::iterator it;
	for (it = v.begin(); it != v.end();) {
		if (temp == it->color) {
			v.erase(it - 1, it + 1);
			it = v.begin();
		}
		if (it != v.end())
			temp = it->color;
		it++;
	}

	if (v.size() == 0)
		cout << "Not Exist";
	else if (v.size() == 1) {
		cout << "(" << v[0].y + 1 << ", " << v[0].x + 1 << "): " << v[0].color;
	}
	else
	{
		cout << "Not Unique";
	}
}

bool cmp(SS a, SS b) {
	return a.color > b.color;
}

bool equal(SS a, SS b) {
	return a.color == b.color;
}