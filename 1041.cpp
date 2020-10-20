#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Data {
    string number;
    int ksn;
}data;

int main() {
    int num;
    cin >> num;
    int sjn;
    map<int, Data> m;
    for (int i = 0; i < num; i++) {
        cin >> data.number >> sjn >> data.ksn;
        m.insert(pair<int, Data>(sjn, data));
    }
    int q;
    cin >> q;
    int* a = new int[q];
    int temp;
    for (int i = 0; i < q; i++) {
        cin >> temp;
        a[i] = temp;
    }

    for (int i = 0; i < q; i++) {
        cout << m[a[i]].number << " " << m[a[i]].ksn;
        if (i < q - 1)
            cout << endl;
    }

}