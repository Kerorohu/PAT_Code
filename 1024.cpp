#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int status1 = (s[0] == '+' ? 0 : 1);
    int status2 = (s[s.find("E") + 1] == '+' ? 0 : 1);
    string index_s = s.substr(s.find("E") + 2, s.size() - s.find("E") - 2);
    stringstream sstream;
    sstream << index_s;
    int index = 0;
    sstream >> index;
    string num_s = s.substr(1, s.find("E") - 1);

    if (status1 != 0) {
        printf("%c", '-');
    }
    if (status2 == 1) {
        for (int i = 0; i < index; ++i) {
            printf("%c", '0');
            if (i == 0) {
                printf("%c", '.');
            }
        }
        printf("%c", num_s[0]);
        for (int j = 2; j < num_s.size(); ++j) {
            printf("%c", num_s[j]);
        }
        printf("%c", '\n');
    }
    else if (status2 == 0) {
        printf("%c", num_s[0]);
        int count = 0;
        for (int k = 2; k < num_s.size(); ++k) {
            if (count == index) {
                printf("%c", '.');
            }
            printf("%c", num_s[k]);
            ++count;
        }
        for (int l = 0; l < index - count; ++l) {
            printf("%c", '0');
        }
        printf("%c", '\n');
    }
    return 0;
}