#include <iostream>
#include <string>
using namespace std;

int main() {
	string n1, n2, n1f, n1s, n2f, n2s;
	cin >> n1 >> n2;
	n1f = n1.substr(0, n1.find('/'));
	n1s = n1.substr(n1.find('/') + 1, n1.size() - n1.find('/') + 1);
	n2f = n2.substr(0, n2.find('/'));
	n2s = n2.substr(n2.find('/') + 1, n2.size() - n2.find('/') + 1);

	int z1, z2, f1, f2, s1, s2;
	z1 = stoi(n1f) / stoi(n1s);
	z2 = stoi(n2f) / stoi(n2s);
	f1 = stoi(n1f) % stoi(n1s);
	f2 = stoi(n2f) % stoi(n2s);
	s1 = stoi(n1s);
	s2 = stoi(n2s);

}