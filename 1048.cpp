
#include <iostream>
using namespace std;

int main() {
    char c[13] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' };
    string s1, s2, s3;
    cin >> s1 >> s2;
    for (int i = 1; i <= s2.length() || i <= s1.length(); i++) {
        int a = 0, b = s2[s2.length() - i] - '0';
        if (i > s2.length()) b = 0;//s2��ǰ��������λ��0
        if (i > s1.length()) a = b;//s1��ǰ������ֱ�����s2
        else if (i % 2) a = (b + s1[s1.length() - i] - '0') % 13;//����λ����
        else a = b - s1[s1.length() - i] + '0';//ż��λ����
        s3.insert(0, 1, c[a < 0 ? a + 10 : a]);//����������λ
    }
    cout << s3 << endl;
    return 0;
}
