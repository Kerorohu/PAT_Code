#include<iostream>
#include<vector>
#include<string>

using namespace std;
int select(string& out, string s, int n);
int main() {
    string hand, eye, mouth;
    getline(cin, hand);
    getline(cin, eye);
    getline(cin, mouth);
    int N, no, flag = 1;
    cin >> N;
    string out[N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> no;
            if (j == 0 || j == 4) flag = Select(out[i], hand, no);
            if (j == 1) out[i] += '(';
            if (j == 1 || j == 3) flag = Select(out[i], eye, no);
            if (j == 3) out[i] += ')';
            if (j == 2) flag = Select(out[i], mouth, no);
            if (!flag) {
                out[i] = "Are you kidding me? @\\/@";
                break;
            }
        }
        cout << out[i] << endl;
    }

    return 0;
}

int select(string& out, string s, int n) {
    int count = 0, int signal = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '[') count++;
        if (cout == n) {
            while (s[++i] != ']')
                out += s[i];
            return 1;
        }
    }
    return 0;
}