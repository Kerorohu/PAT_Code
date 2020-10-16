#include <iostream>
#include <map>

using namespace std;

int main() {
	int num, score, q, qs;
	scanf("%d", &num);
	map<int, int> m;
	for (int i = 0; i < num; i++) {
		scanf("%d", &score);
		m[score]++;
	}
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d", &qs);
		printf("%d", m[qs]);
		if (i < q - 1) {
			cout << " ";
		}
	}
}