#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;
struct Student
{
	string name;
	vector<int> il;
}student;
int main() {
	int N, M;
	cin >> N >> M;
	vector<int> v, stu, res;
	int temp, t;
	for (size_t i = 0; i < M; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	vector<Student> vs;
	string name;
	for (size_t i = 0; i < N; i++)
	{
		cin >> name >> t;
		for (size_t j = 0; j < t; j++)
		{
			cin >> temp;
			stu.push_back(temp);
		}
		for (size_t j = 0; j < stu.size(); j++)
		{
			int tp = count(v.begin(), v.end(), stu[j]);
			if (tp) {
				res.push_back(stu[j]);
			}
		}
		if (res.size() != 0) {
			cout << name << ": ";
			for (size_t j = 0; j < res.size(); j++)
			{
				cout << setw(4) << setfill('0') << res[j];
				if (j != res.size() - 1)
					cout << " ";
			}
			student.name = name;
			student.il = res;
			vs.push_back(student);
			cout << endl;
			stu.clear();
			res.clear();
		}
	}
	cout << vs.size();
	int sum = 0;
	for (size_t i = 0; i < vs.size(); i++)
	{
		sum += vs[i].il.size();
	}
	cout << " " << sum;
}