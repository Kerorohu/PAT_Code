#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;
int main() {
    int n;
    string mars1[13] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
    string mars2[13] = { "", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
    cin >> n;
    cin.clear();
    cin.ignore();//后面用getline，所以要清空cin流 
    string s;
    for (int i = 0; i < n; ++i) {
        getline(cin, s);
        if (s[0] >= '0' && s[0] <= '9') { //地球数字 
            stringstream ss;
            ss << s;
            int num;
            ss >> num;
            if (num < 13) {
                cout << mars1[num] << endl;
            }
            else {
                if (num % 13 == 0) {
                    cout << mars2[num / 13] << endl;
                }
                else {
                    cout << mars2[num / 13] << " " << mars1[num % 13] << endl;
                }
            }
        }
        else { //火星数字 
            if (s.size() <= 4) {
                for (int j = 0; j < 13; ++j) {
                    if (s == mars1[j]) {
                        printf("%d\n", j);
                        break;
                    }
                    else if (s == mars2[j]) {
                        printf("%d\n", j * 13);
                        break;
                    }
                }
            }
            else {
                int num = 0;
                for (int j = 0; j < 13; ++j) {
                    if (equal(s.begin(), s.begin() + 3, mars2[j].begin())) { //equal范围是左闭右开区间，所以要+3 
                        num += j * 13;
                        break;
                    }
                }
                for (int j = 0; j < 13; ++j) {
                    if (equal(s.begin() + 4, s.end(), mars1[j].begin())) {
                        num += j;
                        printf("%d\n", num);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}