#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
#include<sstream>

using namespace std;

int main() {
	string* str = new string[4];
	for (int i = 0; i < 4; i++) {
		cin >> str[i];
	}

	int asize = min(str[0].size(), str[1].size());
	int bsize = min(str[2].size(), str[3].size());
	int first = 0;
	//int seconed = 0;
	int b = 0;
	char day;
	char hour;
	for (int i = 0; i < asize; i++) {
		if (first == 1 && str[0][i] == str[1][i] && ((str[0][i] >= '0' && str[0][i] <= '9') || (str[0][i] >= 'A' && str[0][i] <= 'N'))) {
			hour = str[0][i];
			break;
		}
		if (isupper(str[0][i]) && str[0][i] == str[1][i] && first == 0 && (str[0][i] >= 'A' && str[0][i] <= 'G')) {
			day = str[0][i];
			first = 1;
		}
	}


	for (int i = 0; i < bsize; i++) {
		if (str[2][i] == str[3][i] && ((str[2][i] >= 'A' && str[2][i] <= 'Z') || (str[2][i] >= 'a' && str[2][i] <= 'z'))) {
			b = i;
			break;
		}
	}
	string sday = "";
	switch (day)
	{
	case 'A':
		sday = "MON";
		break;
	case 'B':
		sday = "TUE";
		break;
	case 'C':
		sday = "WED";
		break;
	case 'D':
		sday = "THU";
		break;
	case 'E':
		sday = "FRI";
		break;
	case 'F':
		sday = "SAT";
		break;
	case 'G':
		sday = "SUN";
		break;
	default:
		cout << "error input" << endl;
		break;
	}
	string shour;
	string smin;
	stringstream ss;

	int houri;

	if (hour >= 'A' && hour <= 'N') {
		houri = hour - 'A' + 10;
		ss << houri;
		ss >> shour;
	}
	else if (hour >= '0' && hour <= '9')
	{
		shour = "0";
		shour.push_back(hour);
	}
	else
	{
		cout << "error hour!" << endl;
	}

	stringstream ssb;
	ssb << b;
	ssb >> smin;

	if (b < 10)
		smin = "0" + smin;
	cout << sday << " " << shour << ":" << smin;
}