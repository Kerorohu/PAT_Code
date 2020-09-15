// PatCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int* geass(int*);
using namespace std;

int main()
{
    int n[2];
    cin >> n[0];
    n[1] = 0;
    int *res;
    res = geass(n);
    cout << "cishu= " << res[1] << endl;
}

int* geass(int* n) {
    if (n[0] == 1) {
        return n;
    }
    if (n[0] % 2 == 0) {
        n[0] = n[0] / 2;
    }
    else {
        n[0] = (3 * n[0] + 1) / 2;
    }
    n[1]++;
    int* geass(int* n);
}
