#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
void swappoint(vector<pair<string, string>>& v);
int main() {
	string start;
	int num, cy;
	cin >> start >> num >> cy;
	string address, next;
	int data;
	map<string, int> addt;
	map<string, string> adne, tempm;
	for (int i = 0; i < num; i++) {
		cin >> address >> data >> next;
		addt.insert(pair<string, int>(address, data));
		adne.insert(pair<string, string>(address, next));
	}

	vector<pair<string, string>> temp, res;
	//res = pair<string, string>("", "");
	int n = 2;
	string nextstr;
	temp.push_back(pair<string, string>(start, adne[start]));
	nextstr = adne[start];
	//map<string, string>::iterator it;
	while (nextstr != "-1") {
		temp.push_back(pair<string, string>(nextstr, adne[nextstr]));

		if (n == cy) {
			start = nextstr;
		}

		if (n % cy == 0) {
			swappoint(temp);
			res.insert(res.end(), temp.begin(), temp.end());
			temp.clear();
		}
		if ((num % cy) > (num - n)) {
			res.push_back(pair<string, string>(nextstr, adne[nextstr]));
		}

		nextstr = adne[nextstr];
		n++;
		//cout << "res " << res.empty();

	}
	tempm.insert(res.begin(), res.end());
	while (start != "-1" && start != "") {
		cout << start << " " << addt[start] << " " << tempm[start] << endl;
		start = tempm[start];
	}

}

void swappoint(vector<pair<string, string>>& v) {
	string tempstr;
	vector<pair<string, string>>::iterator it;
	(v.end() - 1)->first = v.begin()->first;
	for (it = v.begin(); it != v.end() - 1; it++) {
		tempstr = it->first;
		it->first = it->second;
		it->second = tempstr;
	}
}