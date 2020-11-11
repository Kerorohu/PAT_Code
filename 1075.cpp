#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

struct Point
{
	int address, data, next;
}point;
int main() {
	int adrs, N, K;
	cin >> adrs >> N >> K;
	map<int, int> mnxt;
	map<int, int> md;
	for (size_t i = 0; i < N; i++)
	{
		cin >> point.address >> point.data >> point.next;
		v.push_back(point);
		mnxt.insert(pair<int, int>(point.address, point.next));
		md.insert(pair<int, int>(point.address, point.data));
	}




}