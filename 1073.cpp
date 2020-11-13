#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

struct Topic
{
	int score, option, rightOption;
	vector<int> ans;
}topic;

int main() {
	int N, M;
	cin >> N >> M;
	vector<Topic> v;
	int temp, sum = 0, ti;
	string str;
	map<int, int> m[M];
	for (size_t i = 0; i < M; i++)
	{
		cin >> topic.score >> topic.option >> topic.rightOption;
		for (size_t j = 0; j < topic.rightOption; j++)
		{
			cin >> temp;
			topic.ans.push_back(temp);
		}
		v.push_back(topic);
	}
	vector<int> stuAns;
	int counts, c;
	for (size_t i = 0; i < N; i++)
	{
		getline(cin, str);
		counts = 0;
		c = 0;
		sum = 0;
		vector<int> tempi;
		for (size_t j = 0; j < str.size(); j++)
		{
			if (str[j] <= '9' && str[j] >= '0') {
				counts = str[j] - '0';
			}
			if (str[j] == '(') {
				c++;
			}
			if (str[j] <= 'z' && str[j] >= 'a') {
				stuAns.push_back(str[j]);
				counts--;
				if (counts == 0) {
					tempi = v[c - 1].ans;
					ti = 0;
					for (size_t k = 0; k < stuAns.size(); k++)
					{
						if (find(tempi.begin(), tempi.end(), stuAns[i]) != tempi.end()) {
							tempi.erase(find(tempi.begin(), tempi.end(), stuAns[i]));
						}
						else
						{

							ti = 0;
							break;
						}

					}
					if (tempi.size() == 0) {
						ti = v[c - 1].score;
					}
					else
					{
						ti = v[c - 1].score / 2;
					}
					sum += ti;
				}
			}
		}
		cout << sun << endl;
	}
}