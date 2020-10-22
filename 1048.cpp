
#include <iostream>
using namespace std;

int main() {
    char c[13] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' };
    string s1, s2, s3;
    cin >> s1 >> s2;
    for (int i = 1; i <= s2.length() || i <= s1.length(); i++) {
        int a = 0, b = s2[s2.length() - i] - '0';
        if (i > s2.length()) b = 0;//s2提前结束，高位补0
        if (i > s1.length()) a = b;//s1提前结束，直接输出s2
        else if (i % 2) a = (b + s1[s1.length() - i] - '0') % 13;//奇数位处理
        else a = b - s1[s1.length() - i] + '0';//偶数位处理
        s3.insert(0, 1, c[a < 0 ? a + 10 : a]);//插入结果到高位
    }
    cout << s3 << endl;
    return 0;
}
