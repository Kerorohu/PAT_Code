#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;
bool cmps(char a, char b);
bool cmpd(char a, char b);

int main() {
	int st;
	string s,sta,stb,stp;
	cin >> st;
	s = to_string(st);
	int ssize = s.size();
	if (ssize < 4) {
		for (int i = 0; i < 4 - ssize; i++) {

			s = "0" + s;
			//cout << "stp = " << stp << endl;
		}
	}

	int a, b ,temp;
	temp = 0;

	while(temp != 6174){
		sort(s.begin(), s.end(), cmps);
		//sta = s;
		a = stoi(s);
		sort(s.begin(), s.end(), cmpd);
		//stb = s;
		b = stoi(s);
		temp = a - b;
		stp = to_string(temp);
		
		int stpsize = stp.size();
		if (stpsize < 4) {
			for (int i = 0; i < 4 - stpsize; i++) {
				
				stp = "0" + stp;
				//cout << "stp = " << stp << endl;
			}
		}

		//cout << sta << " - " << stb << " = " << stp << endl;
		cout << setw(4) << setfill('0') << a << " - " << setw(4) << setfill('0') << b << " = " << setw(4) << setfill('0') << temp << endl;
		if (temp == 0)
			break;
		s = stp;
	}
}

bool cmps(char a, char b) {
	return a > b;
}

bool cmpd(char a, char b) {
	return a < b;
}