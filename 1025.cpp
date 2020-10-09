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
		if (start == -1)     //当start被赋值为-1的时候，链表就结束了，更新n的值，测试点6中并不是所有节点都是有效的链表节点
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