#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    map<char, int> m;

    for (int i = 0; i < str.size(); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || str[i] <= 'Z' && str[i] >= 'A') {
            if (str[i] <= 'Z' && str[i] >= 'A')
                str[i] = str[i] + 32;
            m[str[i]]++;
        }
    }
    map<char, int>::iterator it;
    int max = 0; char maxc;

    for (it = m.begin(); it != m.end(); it++) {
        if (it->second > max) {
            max = it->second;
            maxc = it->first;
        }
    }
    cout << maxc << " " << max;
}