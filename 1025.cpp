#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

struct Node
{
	int add, data, next;
}node[100000];

int main() {
	map<int, Node> m;
	int start, num, k, str;
	cin >> start >> num >> k;
	for (int i = 0; i < num; i++) {
		cin >> str;
		cin >> m[str].data >> m[str].next;
	}

	for (int i = 0; i < num; i++) {
		node[i] = { start,m[start].data,0 };
		start = m[start].next;
		if (start == -1)     //��start����ֵΪ-1��ʱ������ͽ����ˣ�����n��ֵ�����Ե�6�в��������нڵ㶼����Ч������ڵ�
			num = i + 1;
		if ((i + 1) % k == 0) {
			reverse(node + i + 1 - k, node + i + 1);
		}

	}

	for (int i = 0; i < num; i++) {
		printf("%05d %d ", node[i].add, node[i].data);
		if (i < num - 1) {
			printf("%05d\n", node[i + 1].add);
		}
		else
		{
			printf("-1");
		}
	}
}