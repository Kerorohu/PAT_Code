#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//有一个测试点浮点错误
int main() {
	int num;

	cin >> num;

	int* a = new int[num];
	int* b = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < num; i++) {
		cin >> b[i];
	}

	int i, j;
	for (i = 0; i<num - 1 && b[i + 1]>b[i]; i++);//a,b第一个相同元素的位置
	for (j = i + 1; j < num && a[j] == b[j]; j++);//a,b最后一个相同元素的位置
	if (j == num) {
		cout << "Insertion Sort" << endl;
		sort(a, a + i + 2);
	}
	else
	{
		cout << "Merge Sort" << endl;
		int k = 1;
		int flag = 1;

		while (flag) {
			flag = 0;
			for (i = 0; i < num; i++) {
				if (a[i] != b[i])
					flag = 1;
			}

			k = k * 2;
			for (i = 0; i < num / k; i++) {
				sort(a + i * k, a + (i + 1) * k);
			}
			sort(a + num / k * k, a + num);
		}

	}
	for (i = 0; i < num; i++) {
		cout << a[i];
		if (i < num - 1)
			cout << " ";
	}

}