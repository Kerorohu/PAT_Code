#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person
{
	string name;
	string date, mouth, year, day;
};

int main() {
	int num;
	cin >> num;
	string name, date;
	vector<Person> v, t;
	Person person;
	for (int i = 0; i < num; i++) {
		cin >> name >> date;
		person.name = name;
		person.date = date;
		person.year = date.substr(0, 4);
		person.mouth = date.substr(5, 2);
		person.day = date.substr(9, 2);
		v.push_back(person);
	}

	int cyear, cday, cmouth, max, min;
	string qing, zhang;
	vector<Person>::iterator it;
	max = 0;
	min = 99999;
	int tday;
	for (it = v.begin(); it != v.end(); it++) {
		cyear = 2014 - stoi(it->year);
		cday = 6 - stoi(it->day);
		cmouth = 9 - stoi(it->mouth);
		if (cday < 0)
			cmouth -= 1;
		if (cmouth < 0)
			cyear--;
		tday = cyear * 365 + cmouth * 30 + cday;
		if (!(tday < 0 || tday > 73000)) {
			if (tday > max) {
				max = tday;
				zhang = it->name;
			}
			if (tday < min) {
				min = tday;
				qing = it->name;
			}
			t.push_back(*it);
		}
	}
	if (t.size() == 0)
		cout << "0";
	else {
		cout << t.size() << " " << zhang << " " << qing;
	}

}