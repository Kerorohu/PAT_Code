#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
void geass(int, vector<int>&);



int main()
{

    int n;
    cin >> n;
    int* num = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    vector<int>* g = new vector<int>[n];
    //vector<int>* r = new vector<int>[n];
    for (int i = 0; i < n; i++) {
        geass(num[i], g[i]);
    }


    int boool = 0, bol = 0;
    vector<int>::iterator it;
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (it = g[j].begin(); it != g[j].end(); it++) {
                if (*it == num[i])
                    boool += 1;
            }
            if (boool > 0)
                bol += 1;
        }
        if (bol == 0)
            res.push_back(num[i]);
        boool = 0;
        bol = 0;
    }

    sort(res.rbegin(), res.rend());

    vector<int>::iterator resit;
    for (resit = res.begin(); resit != res.end(); resit++) {
        cout << *resit;
        if (resit != (res.end() - 1))
            cout << " ";
    }
}

void geass(int n, vector<int>& vec) {
    if (n == 1) {

    }
    else if (n % 2 == 0) {
        n = n / 2;
        vec.push_back(n);
        geass(n, vec);
    }
    else {
        n = (3 * n + 1) / 2;
        vec.push_back(n);
        geass(n, vec);
    }

}

