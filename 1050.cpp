#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(int a, int b);

int main() {
	int num;
	cin >> num;
	int temp = sqrt(num);
	int m, n;
	for (int i = temp; i >= 0; i--) {
		if (num % i == 0) {
			m = num / i;
			n = i;
			break;
		}
	}
	vector<int> v;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), cmp);
	int** a = new int* [m + 1];
	for (int i = 0; i < m + 1; i++) {
		a[i] = new int[n + 1];
		for (int j = 0; j < n + 1; j++) {
			a[i][j] = 0;
		}
	}
	/*cout << "m= " << m << " n= " << n << endl;
	cout << "a42= " << a[4][2];*/
	int direct[] = { 2,-1,-2,1 }, d = 2, posD = 0;
	int x = 0, y = 0, posA = 0;
	while (true)
	{
		if (a[x][y] != 0 || (x == m || x < 0) || (y == n || y < 0)) {
			posD++;
			switch (d)
			{
			case -1:x--; y--; break;
			case 2: y--; x++; break;
			case 1: x++; y++; break;
			case -2:y++; x--; break;
			default:
				cout << "back error";
				break;
			}
			d = direct[posD % 4];
		}
		a[x][y] = v[posA]; posA++;
		if (posA == num)
			break;
		switch (d)
		{
		case -1:x++; break;
		case 2: y++; break;
		case 1: x--; break;
		case -2:y--; break;
		default:
			cout << "move error";
			break;
		}
	}

	for (int h = 0; h < m; h++)
	{
		for (int l = 0; l < n; l++)
		{
			cout << a[h][l];
			if (l != n - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}


}

bool cmp(int a, int b) {
	return a > b;
}