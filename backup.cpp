// PATCode.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//


//#include <vector>
//#include <string>
//#include <sstream>
//#include <map>
//#include <iomanip>
//
//using namespace std;
//#include <iostream>
//int* geass(int*);
//using namespace std;

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//using namespace std;
//void geass(int, vector<int>&);
//
//
//
//int main()
//{
//    
//    int n;
//    cin >> n;
//    int* num = new int[n];
//    
//    for (int i = 0; i < n; i++) {
//        cin >> num[i];
//    }
//    vector<int>* g = new vector<int>[n];
//    //vector<int>* r = new vector<int>[n];
//    for (int i = 0; i < n; i++) {
//        geass(num[i],g[i]);
//    }
//
//
//    int boool = 0,bol = 0;
//    vector<int>::iterator it;
//    vector<int> res;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            for (it = g[j].begin(); it != g[j].end(); it++) {
//                if (*it == num[i])
//                    boool += 1;
//            }
//            if (boool > 0)
//                bol += 1;
//        }
//        if (bol == 0)
//            res.push_back(num[i]);
//        boool = 0;
//        bol = 0;
//    }
//
//    sort(res.rbegin(), res.rend());
//
//    vector<int>::iterator resit;
//    for (resit = res.begin(); resit != res.end(); resit++) {
//        cout << *resit;
//        if(resit != (res.end() - 1))
//            cout << " ";
//    }
//}
//
//void geass(int n, vector<int>&vec) {
//    if (n == 1) {
//       
//    }
//    else if (n % 2 == 0) {
//        n = n / 2;
//        vec.push_back(n);
//        geass(n, vec);
//    }
//    else {     
//        n = (3 * n + 1) / 2;
//        vec.push_back(n);
//        geass(n, vec);
//    }
//    
//}

//int main()
//{
//    int n[2];
//    cin >> n[0];
//    n[1] = 0;
//    int* res;
//    res = geass(n);
//    cout << *(res+1) << endl;
//}
//
//int* geass(int* n) {
//    cout << "n= " << n[0] << endl;
//    cout << "cishu= " << n[1] << endl;
//    if (n[0] == 1) {
//        return n;
//    }
//    if (n[0] % 2 == 0) {
//        n[0] = n[0] / 2;
//    }
//    else {
//        n[0] = (3 * n[0] + 1) / 2;
//    }
//    n[1]++;
//    geass(n);
//}
//int main()
//{
//    int a, b,sum,con,dot,temp;
//    sum = 0;
//    con = 1;
//    dot = 0;
//    temp = 0;
//    int aaa = 0;
//    vector<int> vec;
//    string str;
//    stringstream sst;
//    cin >> a >> b;
//    sum = a + b;
//    temp = sum;
//    if (sum < 0) {
//        sum = -sum;
//    }
//    while (sum / 10 != 0) {
//        sum = sum / 10;
//        con++;
//    }
//    if (con > 3) {
//        dot = con / 3;
//        aaa = con % 3;
//        sst << temp;
//        sst >> str;
//        /*cout << "dot= " << dot << endl;
//        cout << "temp= " << temp << endl;
//        cout << "con= " << con << endl;*/
//        if(temp >=0){
//            if(aaa != 0){
//                for (int i = 0; i < dot; i++) {
//                    str.insert(con - (i+1) * 3, ",");
//                }
//            }
//            else {
//                for (int i = 0; i < dot-1; i++) {
//                    str.insert(con - (i + 1) * 3, ",");
//                }
//            }
//        }
//        else {
//            if (aaa != 0) {
//                for (int i = 0; i < dot; i++) {
//                    str.insert(con - (i + 1) * 3 + 1, ",");
//                }
//            }
//            else {
//                for (int i = 0; i < dot - 1; i++) {
//                    str.insert(con - (i + 1) * 3 + 1, ",");
//                }
//            }
//        }
//        cout << str << endl;
//    }
//    else {
//        cout << temp;
//    } 
// }

//int main(){
//	int i, j, e;
//	float num;
//	map<int, float> a,b,c;
//
//	cin >> i;
//	for (int k = 0; k < i; k++) {
//		cin >> e >> num;
//		a.insert(pair<int, float>(e, num));
//	}
//	
//	cin >> j;
//	for (int l = 0; l < j; l++) {
//		cin >> e >> num;
//		b.insert(pair<int, float>(e, num));
//	}
//	map<int, float>::iterator ita,itb;
//	for (ita = a.begin(); ita != a.end(); ita++) {
//		for (itb = b.begin(); itb != b.end(); itb++) {
//			if (ita->first == itb->first) {
//				float sum = ita->second + itb->second;
//				c[ita->first] = sum;
//				//cout << "sum " << sum << "map c " << c[ita->first] << endl;
//			}
//			else {
//				if(!c.count(ita->first)){
//					c.insert(pair<int, float>(ita->first, ita->second));
//				}
//				if (!c.count(itb->first)) {
//					c.insert(pair<int, float>(itb->first, itb->second));
//				}
//			}
//			/*cout << "map a " << ita->first << " " << ita->second << endl;
//			cout << "map b " << itb->first << " " << itb->second << endl;*/
//		}
//	}
//	map<int, float>::reverse_iterator itc;
//	int count = c.size();
//	cout << count;
//	for (itc = c.rbegin(); itc != c.rend(); itc++) {
//		//cout << " " << itc->first << " " << setprecision(2) <<itc->second;
//		cout << " " << itc->first << " " << setiosflags(ios::fixed) << setprecision(1) << itc->second;
//	}
//}
//int main() {
//	int num;
//	string str = "";
//	cin >> num;
//	string* p = new string[num];
//	for (int i = 0; i < num; i++) {
//		cin >> str;
//		p[i] = str;
//	}
//	int countap = 0,countpat = 0,countta = 0,countp=0,countt=0;
//	int seep = 0,seet = 0;
//	int t = 0;
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < p[i].size(); j++) {
//			if (p[i][j] != 'P' && p[i][j] != 'A' && p[i][j] != 'T') {
//				//cout << "NO" << endl;
//				t = 1;
//				break;
//			}
//			else
//			{	//cout << "pij= " << p[i][j] << endl;
//				if (p[i][j] == 'P') {
//					seep = 1;
//					countp++;
//				}
//				else if(p[i][j] == 'T')
//				{
//					countt++;
//					if(seep == 1)
//						seet = 1;
//				}
//				if (p[i][j] == 'A' && seep == 0) {
//					countap++;
//				}
//				if (seep == 1 && seet == 0 && p[i][j] == 'A') {
//					countpat++;
//				}
//				if (seep == 1 && seet == 1 && p[i][j] == 'A') {
//					countta++;
//				}
//			}
//		}
//		//cout << "ap " << countap << " pat " << countpat << "ta " << countta << endl;
//		//cout << "countp " << countp << " countt " << countt << endl;
//		if (countta == countap * countpat && t != 1 && countpat != 0 && countp == 1 && countt == 1) {
//			cout << "YES" << endl;
//			//cout << p[i] << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//			t = 0;
//		}
//		countap = 0;
//		countpat = 0;
//		countta = 0;
//		countp = 0;
//		countt = 0;
//		seep = 0;
//		seet = 0;
//	}
//}
//const char* ntohanzi(int);
//
//int main() {
//	string n;
//	cin >> n;
//	int num[100];
//	int cn = 0, sum = 0;
//	string numstr;
//	
//	for (int i = 0; i < n.size(); i++) {
//		num[i] = n[i] - '0';
//		//cout << "num= " << num[i] << endl;
//	}
//
//	for (int i = 0; i < n.size(); i++) {
//		sum += num[i];
//		//cout << "sum= " << sum << endl;
//	}
//	
//	numstr = to_string(sum);
//	int size = numstr.size();
//	//cout << numstr;
//	string* hanzi = new string[size];
//	for (int i = 0; i < size; i++) {
//		//cout << (int)(numstr[i] - '0');
//		hanzi[i] = ntohanzi((int)(numstr[i] - '0'));
//		cout << hanzi[i];
//		if (i < size - 1)
//			cout << " ";
//	}
//
//
//}
//
//const char* ntohanzi(int num) {
//	switch (num) {
//	case 0:
//		return "ling";
//	case 1:
//		return  "yi";
//	case 2:
//		return  "er";
//	case 3:
//		return  "san";
//	case 4:
//		return  "si";
//	case 5:
//		return  "wu";
//	case 6:
//		return  "liu";
//	case 7:
//		return "qi";
//	case 8:
//		return "ba";
//	case 9:
//		return "jiu";
//	}
//}

//int main() {
//	int n;
//	long A, B, C;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> A >> B >> C;
//		cout << "Case #" << i+1 << ": " << (A + B > C ? "true" : "false") << endl;
//	}
//}
//1023

//1024
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
	string s;
	cin >> s;
	char st1 = s[0];
	char st2 = s[s.find('E') + 1];
	string s1 = s.substr(1, s.find('E') - 1);
	string s2 = s.substr(s.find('E') + 2, s.size() - s.find('E'));
	string sub = s.substr(s.find('.') + 1, s.find('E') - s.find('.') - 1);
	float num;
	string res;
	int z;
	int lensub = sub.size();
	if (st1 == '-')
		cout << '-';
	num = stof(s1);
	z = stoi(s2);
	int c = 0, d = 0;
	for (int i = s1.size() - 1; i >= 0; i--) {
		if (s1[i] == '0') {
			c++;
		}
		else
		{
			break;
		}
	}
	/*cout << s1 << endl;
	cout << "c= " << c << endl;*/

	if (st2 == '-') {
		for (int i = 0; i < z; i++) {
			num *= 0.1;
		}

		res = to_string(num);
		if (res[res.size() - 1] = '0') {
			for (int i = res.size() - 1; i >= 0; i--) {
				if (res[i] == '0') {
					d++;
				}
				else
				{
					break;
				}
			}
			res.erase(res.size() - d);
		}



		cout << "res = " << res << endl;
		for (int i = 0; i < c; i++) {
			res.push_back('0');
		}
		cout << res;
	}
	else
	{
		for (int i = 0; i < z; i++) {
			num *= 10;
		}

		if (lensub > z) {
			cout << fixed << setprecision(lensub - z) << num;
		}
		else
		{
			cout << fixed << setprecision(0) << num;
		}
		/*for (int i = 0; i < z; i++) {
			num *= 10;
		}
		cout << fixed << num;*/
	}
}
//1031
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int z[11] = { 1,0,10,9,8,7,6,5,4,3,2 };
	int num, sum = 0, mz, temp;
	cin >> num;
	string str;
	vector<string> res;
	for (int i = 0; i < num; i++) {
		cin >> str;
		//cout << "str = " << str << endl;
		for (int j = 0; j < 17; j++) {
			sum += (str[j] - 48) * w[j];
		}
		mz = sum % 11;
		if (str[17] == 'X') {
			temp = 10;
		}
		else
		{
			temp = str[17] - 48;
		}
		if (temp != z[mz])
			res.push_back(str);
		sum = 0;
	}

	if (res.size() == 0) {
		cout << "All passed";
	}
	else
	{
		vector<string>::iterator it;
		for (it = res.begin(); it != res.end(); it++) {
			cout << *it;
			if (it != res.end() - 1)
				cout << endl;
		}
	}
}
//1033
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	string err, str, res;

	getline(cin, err);
	getline(cin, str);

	int t = 0;
	if (!err.empty()) {
		if (err.find('+') != string::npos) {
			err.erase(err.find('+'), 1);
			for (int i = 0; i < str.size(); i++) {
				if (str[i] > 90 || str[i] < 65) {
					for (int j = 0; j < err.size(); j++) {
						if (str[i] == err[j])
							t = 1;
						else if (str[i] == (err[j] + 32))
						{
							t = 1;
						}
					}
					if (t == 0)
						res.push_back(str[i]);
					t = 0;
				}
			}
		}
		else
		{
			for (int i = 0; i < str.size(); i++) {
				for (int j = 0; j < err.size(); j++) {
					if (str[i] == err[j])
						t = 1;
					else if (str[i] == (err[j] + 32))
					{
						t = 1;
					}
					else if (str[i] == (err[j] - 32))
					{
						t = 1;
					}
				}
				if (t == 0)
					res.push_back(str[i]);
				t = 0;
			}
		}
	}
	else {
		res = str;
	}
	if (res.empty()) {
		cout << endl;
	}
	else
	{
		cout << res;
	}

}
//1037
#include <iostream>
#include <string>
using namespace std;
struct Money
{
	long galleon;
	int sickle, kunt;
}pay, need;

int main() {
	string spay, sneed;
	cin >> sneed;
	cin >> spay;
	need.galleon = stoi(sneed.substr(0, sneed.find('.')));
	need.sickle = stoi(sneed.substr(sneed.find('.') + 1, sneed.find('.', sneed.find('.') + 1) - sneed.find('.') - 1));
	//cout << sneed.substr(sneed.rfind('.')) << endl;
	need.kunt = stoi(sneed.substr(sneed.rfind('.') + 1));

	pay.galleon = stoi(spay.substr(0, spay.find('.')));
	pay.sickle = stoi(spay.substr(spay.find('.') + 1, spay.find('.', spay.find('.') + 1) - spay.find('.') - 1));
	pay.kunt = stoi(spay.substr(spay.rfind('.') + 1));

	Money res;
	long sumn = need.galleon * 17 * 29 + need.sickle * 29 + need.kunt;
	long sump = pay.galleon * 17 * 29 + pay.sickle * 29 + pay.kunt;
	long sumr = sump - sumn;

	res.galleon = sumr / (17 * 29);
	res.sickle = (sumr % (17 * 29)) / 29;
	res.kunt = sumr % 29;

	if (sumr >= 0) {
		cout << res.galleon << "." << res.sickle << "." << res.kunt;
	}
	else
	{
		cout << "-" << -res.galleon << "." << -res.sickle << "." << -res.kunt;
	}
	//cout << "galleon = " << need.galleon << " sickle = " << need.sickle << " kunt = " << need.kunt;
}
//1050
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(int a, int b);

int main() {
	int num;
	cin >> num;
	int temp = sqrt(num);
	int m, n;
	for (int i = temp; i >= 0; i--) {
		if (num % i == 0) {
			m = num / i;
			n = i;
			break;
		}
	}
	vector<int> v;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), cmp);
	int** a = new int* [m + 1];
	for (int i = 0; i < m + 1; i++) {
		a[i] = new int[n + 1];
		for (int j = 0; j < n + 1; j++) {
			a[i][j] = 0;
		}
	}
	/*cout << "m= " << m << " n= " << n << endl;
	cout << "a42= " << a[4][2];*/
	int direct[] = { 2,-1,-2,1 }, d = 2, posD = 0;
	int x = 0, y = 0, posA = 0;
	while (true)
	{
		if (a[x][y] != 0 || (x == m || x < 0) || (y == n || y < 0)) {
			posD++;
			switch (d)
			{
			case -1:x--; y--; break;
			case 2: y--; x++; break;
			case 1: x++; y++; break;
			case -2:y++; x--; break;
			default:
				cout << "back error";
				break;
			}
			d = direct[posD % 4];
		}
		a[x][y] = v[posA]; posA++;
		if (posA == num)
			break;
		switch (d)
		{
		case -1:x++; break;
		case 2: y++; break;
		case 1: x--; break;
		case -2:y--; break;
		default:
			cout << "move error";
			break;
		}
	}

	for (int h = 0; h < m; h++)
	{
		for (int l = 0; l < n; l++)
		{
			cout << a[h][l];
			if (l != n - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}


}

bool cmp(int a, int b) {
	return a > b;
}
//1045
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int num, temp;
	cin >> num;
	long* a = new long[num];
	long* x = new long[num];
	long* n = new long[num];
	long* res = new long[num];

	for (int i = 0; i < num; i++) {
		cin >> temp;
		a[i] = temp;
	}

	long max = 0, min = 10000000000;
	for (int i = 0; i < num; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		x[i] = max;
	}

	for (int i = num - 1; i >= 0; i--) {
		if (a[i] < min) {
			min = a[i];
		}
		n[i] = min;
	}

	int cn = 0;
	for (int i = 0; i < num; i++) {
		if (n[i] == a[i] && x[i] == a[i]) {
			res[cn] = a[i];
			cn++;
		}
	}
	if (cn == 0) {
		printf("0\n\n");
	}
	else {
		printf("%d\n", cn);
		for (int i = 0; i < cn; i++) {
			printf("%ld", res[i]);
			if (i < cn - 1)
				printf(" ");
		}
	}
}

//1044
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	int a[6];
	a[0] = count(str.begin(), str.end(), 'P');
	a[1] = count(str.begin(), str.end(), 'A');
	a[2] = count(str.begin(), str.end(), 'T');
	a[3] = count(str.begin(), str.end(), 'e');
	a[4] = count(str.begin(), str.end(), 's');
	a[5] = count(str.begin(), str.end(), 't');

	while (a[0] != 0 || a[1] != 0 || a[2] != 0 || a[3] != 0 || a[4] != 0 || a[5] != 0) {
		if (a[0] != 0) {
			cout << "P";
			a[0]--;
		}
		if (a[1] != 0) {
			cout << "A";
			a[1]--;
		}
		if (a[2] != 0) {
			cout << "T";
			a[2]--;
		}
		if (a[3] != 0) {
			cout << "e";
			a[3]--;
		}
		if (a[4] != 0) {
			cout << "s";
			a[4]--;
		}
		if (a[5] != 0) {
			cout << "t";
			a[5]--;
		}
	}
}
//1039
#include <iostream>
#include <string>

using namespace std;

int main() {
	string get, want;
	cin >> get >> want;

	int temp = 1;

	for (int i = 0; i < want.size();) {
		if (get.find(want[i]) == string::npos) {
			temp = 0;
			i++;
		}
		else
		{
			get.erase(get.find(want[i]), 1);
			want.erase(i, 1);
		}
	}

	if (temp == 1) {
		cout << "Yes " << get.size();
	}
	else
	{
		cout << "No " << want.size();
	}
}

//1038#include <iostream>
#include <map>

using namespace std;

int main() {
	int num, score, q, qs;
	scanf("%d", &num);
	map<int, int> m;
	for (int i = 0; i < num; i++) {
		scanf("%d", &score);
		m[score]++;
	}
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d", &qs);
		printf("%d", m[qs]);
		if (i < q - 1) {
			cout << " ";
		}
	}
}

//1036
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float n;
	char c;
	cin >> n >> c;
	int half = round(n / 2);

	for (int i = 0; i < n; i++) {
		cout << c;
	}
	cout << endl;

	for (int i = 0; i < half - 2; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || j == n - 1)
				cout << c;
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << c;
	}
}

//1025
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

struct Node
{
	int add, data, next;
}node[100000];

int main() {
	map<int, Node> m;
	int start, num, k, str;
	cin >> start >> num >> k;
	for (int i = 0; i < num; i++) {
		cin >> str;
		cin >> m[str].data >> m[str].next;
	}

	for (int i = 0; i < num; i++) {
		node[i] = { start,m[start].data,0 };
		start = m[start].next;
		if (start == -1)     //��start����ֵΪ-1��ʱ������ͽ����ˣ�����n��ֵ�����Ե�6�в��������нڵ㶼����Ч������ڵ�
			num = i + 1;
		if ((i + 1) % k == 0) {
			reverse(node + i + 1 - k, node + i + 1);
		}

	}

	for (int i = 0; i < num; i++) {
		printf("%05d %d ", node[i].add, node[i].data);
		if (i < num - 1) {
			printf("%05d\n", node[i + 1].add);
		}
		else
		{
			printf("-1");
		}
	}
}
//1028
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person
{
	string name;
	string date, mouth, year, day;
};

int main() {
	int num;
	cin >> num;
	string name, date;
	vector<Person> v, t;
	Person person;
	for (int i = 0; i < num; i++) {
		cin >> name >> date;
		person.name = name;
		person.date = date;
		person.year = date.substr(0, 4);
		person.mouth = date.substr(5, 2);
		person.day = date.substr(9, 2);
		v.push_back(person);
	}

	int cyear, cday, cmouth, max, min;
	string qing, zhang;
	vector<Person>::iterator it;
	max = 0;
	min = 99999;
	int tday;
	for (it = v.begin(); it != v.end(); it++) {
		cyear = 2014 - stoi(it->year);
		cday = 6 - stoi(it->day);
		cmouth = 9 - stoi(it->mouth);
		if (cday < 0)
			cmouth -= 1;
		if (cmouth < 0)
			cyear--;
		tday = cyear * 365 + cmouth * 30 + cday;
		if (!(tday < 0 || tday > 73000)) {
			if (tday > max) {
				max = tday;
				zhang = it->name;
			}
			if (tday < min) {
				min = tday;
				qing = it->name;
			}
			t.push_back(*it);
		}
	}
	if (t.size() == 0)
		cout << "0";
	else {
		cout << t.size() << " " << zhang << " " << qing;
	}

}
//1027
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int num;
	char c;
	cin >> num >> c;
	int i = 1, sum = 1;
	while (num > sum) {
		i = i + 2;
		sum = sum + 2 * i;
	}
	if (sum != 1) {
		sum = sum - 2 * i;
		i = i - 2;
	}

	//int temp = i;
	for (int j = i; j > 0; ) {
		for (int k = 0; k < (i - j) / 2; k++) {
			cout << " ";
		}
		for (int k = 0; k < j; k++) {
			cout << c;
		}
		cout << endl;
		j = j - 2;
		//temp = j;
		//temp = abs(j);
	}
	if (i != 1) {
		for (int j = 3; j <= i; j = j + 2) {
			for (int k = 0; k < (i - j) / 2; k++) {
				cout << " ";
			}
			for (int k = 0; k < j; k++) {
				cout << c;
			}
			cout << endl;
		}
	}
	cout << num - sum;
}

//1026
#include <iostream>
#include <math.h>
constexpr auto CLK_TCK = 100;
using namespace std;

int main() {
	long double c1, c2;
	cin >> c1 >> c2;
	int time = round((c2 - c1) / CLK_TCK);
	int hour, min, sec;
	sec = time % 60;
	min = (time / 60) % 60;
	hour = time / 3600;
	printf("%02d:", hour);
	printf("%02d:", min);
	printf("%02d", sec);
}

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	int temp;
	map<int, int> m;
	for (int i = 0; i < 10; i++) {
		cin >> temp;
		m.insert(pair<int, int>(i, temp));
	}
	map<int, int>::iterator it;
	it = m.find(1);
	for (; it != m.end(); it++) {
		if (it->second != 0) {
			cout << it->first;
			it->second -= 1;
			break;
		}
	}

	for (it = m.begin(); it != m.end(); it++) {
		while (it->second != 0)
		{
			cout << it->first;
			it->second -= 1;
		}
	}
}

//1022
int main() {
	int a, b, d;
	cin >> a >> b >> d;
	int sum = a + b;
	int temp;
	vector<int> v;
	while (sum > d)
	{
		temp = sum % d;
		v.push_back(temp);
		sum = sum / d;
	}
	v.push_back(sum);

	vector<int>::iterator it;
	for (it = v.end() - 1; it != v.begin(); --it) {
		cout << *it;
	}

	cout << *(v.begin());
	system("pause");
}

//1021
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	string str;
	cin >> str;
	map<int, int> m;

	/*for (int i = 0; i < 10; i++) {
		m[i] = 0;
	}*/

	string::iterator it;
	int temp;
	for (it = str.begin(); it < str.end(); it++) {
		temp = (int)*it - 48;
		m[temp]++;
	}

	for (int i = 0; i < 10; i++) {
		if (m[i] != 0)
			cout << i << ":" << m[i] << endl;
	}
}

//1020
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

bool cmp(pair<float, float> a, pair<float, float> b);

int main() {
	int zhonglei, zuidaxuqiu;
	cin >> zhonglei >> zuidaxuqiu;
	float* kucun = new float[zhonglei];
	float* zongshoujia = new float[zhonglei];
	float* danjia = new float[zhonglei];
	vector<pair<float, float>> kczsj;
	float zuidashouyi, yuebingshuliang;
	yuebingshuliang = 0;


	for (int i = 0; i < zhonglei; i++) {
		cin >> kucun[i];
	}
	for (int i = 0; i < zhonglei; i++) {
		cin >> zongshoujia[i];
		danjia[i] = (zongshoujia[i] * 10000) / kucun[i];
		kczsj.push_back(pair<float, float>(kucun[i], danjia[i]));
	}

	sort(kczsj.begin(), kczsj.end(), cmp);
	float n = 0;
	zuidashouyi = 0;
	vector<pair<float, float>>::iterator it;
	it = kczsj.begin();

	while (yuebingshuliang < zuidaxuqiu && it != kczsj.end()) {

		//cout << "it.second= " << (*it).second;
		n = (*it).first;

		if (n > (zuidaxuqiu - yuebingshuliang))
		{
			n = zuidaxuqiu - yuebingshuliang;
		}

		zuidashouyi += n * (*it).second * 10000;
		yuebingshuliang += n;
		it++;
	}
	//setiosflags(ios::fixed);
	cout << fixed << setprecision(2) << zuidashouyi / 1e+08;
}

bool cmp(pair<float, float> a, pair<float, float> b) {
	return a.second >= b.second;
}

//1019
#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;
bool cmps(char a, char b);
bool cmpd(char a, char b);

int main() {
	int st;
	string s, sta, stb, stp;
	cin >> st;
	s = to_string(st);
	int ssize = s.size();
	if (ssize < 4) {
		for (int i = 0; i < 4 - ssize; i++) {

			s = "0" + s;
			//cout << "stp = " << stp << endl;
		}
	}

	int a, b, temp;
	temp = 0;

	while (temp != 6174) {
		sort(s.begin(), s.end(), cmps);
		//sta = s;
		a = stoi(s);
		sort(s.begin(), s.end(), cmpd);
		//stb = s;
		b = stoi(s);
		temp = a - b;
		stp = to_string(temp);

		int stpsize = stp.size();
		if (stpsize < 4) {
			for (int i = 0; i < 4 - stpsize; i++) {

				stp = "0" + stp;
				//cout << "stp = " << stp << endl;
			}
		}

		//cout << sta << " - " << stb << " = " << stp << endl;
		cout << setw(4) << setfill('0') << a << " - " << setw(4) << setfill('0') << b << " = " << setw(4) << setfill('0') << temp << endl;
		if (temp == 0)
			break;
		s = stp;
	}
}

bool cmps(char a, char b) {
	return a > b;
}

bool cmpd(char a, char b) {
	return a < b;
}

//1018
#include <iostream>
#include <string>
//#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b);
bool cmpt(pair<char, int> a, pair<char, int> b);

int main() {
	int n;
	cin >> n;
	pair<char, char> p;
	char a, b;
	int ac[6];
	string stra, strb;
	int bc[6];
	for (int i = 0; i < 6; i++) {
		ac[i] = 0;
		bc[i] = 0;
	}

	//a[0] win --a[1] pin --a[2] lose --a[3]Ccount --a[4] Jcount --a[5] Bcount
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == 'C' && b == 'J') {
			ac[0]++;
			bc[2]++;
			ac[3]++;
		}
		else if (a == 'C' && b == 'B')
		{
			ac[2]++;
			bc[0]++;
			bc[5]++;
		}
		else if (a == 'J' && b == 'C') {
			ac[2]++;
			bc[0]++;
			bc[3]++;
		}
		else if (a == 'J' && b == 'B') {
			ac[0]++;
			bc[2]++;
			ac[4]++;
		}
		else if (a == 'B' && b == 'C') {
			ac[0]++;
			bc[2]++;
			ac[5]++;
		}
		else if (a == 'B' && b == 'J') {
			ac[2]++;
			bc[0]++;
			bc[4]++;
		}
		else if (a == b) {
			ac[1]++;
			bc[1]++;
		}
	}
	cout << ac[0] << " " << ac[1] << " " << ac[2] << endl;
	cout << bc[0] << " " << bc[1] << " " << bc[2] << endl;

	/*map<char, int> ma,mb;
	ma.insert(pair<char, int>('C', a[3]));
	ma.insert(pair<char, int>('J', a[4]));
	ma.insert(pair<char, int>('B', a[5]));
	mb.insert(pair<char, int>('C', b[3]));
	mb.insert(pair<char, int>('J', b[4]));
	mb.insert(pair<char, int>('B', b[5]));*/
	vector<pair<char, int>> vpa, vpb, at, bt;
	vpa.push_back(pair<char, int>('C', ac[3]));
	vpa.push_back(pair<char, int>('J', ac[4]));
	vpa.push_back(pair<char, int>('B', ac[5]));
	vpb.push_back(pair<char, int>('C', bc[3]));
	vpb.push_back(pair<char, int>('J', bc[4]));
	vpb.push_back(pair<char, int>('B', bc[5]));

	sort(vpa.begin(), vpa.end(), cmp);
	sort(vpb.begin(), vpb.end(), cmp);

	vector<pair<char, int>>::iterator ita, itb;
	pair<char, int> temp;
	temp = pair<char, int>(vpa.begin()->first, vpa.begin()->second);
	at.push_back(temp);
	if (vpa.begin() + 1 != vpa.end()) {
		for (ita = vpa.begin() + 1; ita != vpa.end(); ita++) {
			if (ita->second == temp.second)
				at.push_back(*ita);

		}
	}

	temp = pair<char, int>(vpb.begin()->first, vpb.begin()->second);
	bt.push_back(temp);
	if (vpb.begin() + 1 != vpb.end()) {
		for (itb = vpb.begin() + 1; itb != vpb.end(); itb++) {
			if (itb->second == temp.second)
				bt.push_back(*itb);
		}
	}

	sort(at.begin(), at.end(), cmpt);
	sort(bt.begin(), bt.end(), cmpt);

	cout << at.begin()->first << " " << bt.begin()->first;
}

bool cmpt(pair<char, int> a, pair<char, int> b) {
	return a.first < b.first;
}

bool cmp(pair<char, int> a, pair<char, int> b) {
	return a.second > b.second;
}


#include <iostream>
#include <string>
using namespace std;
pair<string, int> chufa(string, int);

int main() {
	string str;
	int num;
	cin >> str >> num;
	pair<string, int> p;
	p = chufa(str, num);
	cout << p.first << " " << p.second;
}

pair<string, int> chufa(string s, int a) {
	string temp = "";
	string jisuan, temps, tempr;
	int num, shang, yu;
	yu = 0;
	for (int i = 0; i < s.size(); i++) {
		jisuan = to_string(yu) + s[i];
		num = stoi(jisuan);
		shang = num / a;
		yu = num - shang * a;
		tempr = to_string(shang);
		temps.append(tempr);
	}
	if (temps.size() > 1 && temps[0] == '0')
		temps.erase(temps.begin());

	return pair<string, int>(temps, yu);
}
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
int main() {
	string a, b, sa, sb;
	char da, db;
	int ca, cb;
	stringstream ssa, ssb;
	sa = "";
	sb = "";
	cin >> a >> da >> b >> db;
	string::iterator it, itb;
	for (it = a.begin(); it != a.end(); it++) {
		if (*it == da)
			sa += da;
	}

	for (itb = b.begin(); itb != b.end(); itb++) {
		if (*itb == db)
			sb += db;
	}
	if (sa.empty())
		sa = "0";
	if (sb.empty())
		sb = "0";
	ssa << sa;
	ssa >> ca;

	ssb << sb;
	ssb >> cb;

	cout << ca + cb;
}

//1015
#include<iostream>
#include<string>
#include <map>
#include <vector>
#include <algorithm>
#include <thread>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b);
//vector<pair<string, int>> vsort(map<string, int> m);

map<string, int> dscore;

int main() {
	int n, l, h;
	cin >> n >> l >> h;

	map<string, int> cscore;
	string enums;
	int ds, cs, tp, sum;
	dscore.clear();
	sum = 0;
	vector<pair<string, int>> vall, vdsc, vcdjw, vs;
	for (int i = 0; i < n; i++) {
		cin >> enums >> ds >> cs;
		dscore.insert(pair<string, int>(enums, ds));
		cscore.insert(pair<string, int>(enums, cs));
		tp = ds + cs;
		if (ds >= h && cs >= h) {
			vall.push_back(pair<string, int>(enums, tp));
			sum++;
		}
		else if (ds >= h && cs >= l) {
			vdsc.push_back(pair<string, int>(enums, tp));
			sum++;
		}
		else if (ds >= cs && ds >= l && cs >= l) {
			vcdjw.push_back(pair<string, int>(enums, tp));
			sum++;
		}
		else if (ds >= l && cs >= l) {
			vs.push_back(pair<string, int>(enums, tp));
			sum++;
		}
	}

	//vector<pair<string, int>> *v = new vector<pair<string, int>>[4];

	sort(vall.begin(), vall.end(), cmp);
	sort(vdsc.begin(), vdsc.end(), cmp);
	sort(vcdjw.begin(), vcdjw.end(), cmp);
	sort(vs.begin(), vs.end(), cmp);

	vall.insert(vall.end(), vdsc.begin(), vdsc.end());
	vall.insert(vall.end(), vcdjw.begin(), vcdjw.end());
	vall.insert(vall.end(), vs.begin(), vs.end());

	vector<pair<string, int>>::iterator itv;

	cout << sum << endl;

	for (itv = vall.begin(); itv != vall.end(); itv++) {
		cout << itv->first << " " << dscore[itv->first] << " " << cscore[itv->first] << endl;
	}
}

bool cmp(pair<string, int> a, pair<string, int> b) {
	if (a.second == b.second) {
		if (dscore[a.first] == dscore[b.first])
			return a.first < b.first;
		return dscore[a.first] > dscore[b.first];
	}
	else
		return a.second > b.second;
}

#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
#include<sstream>

using namespace std;

int main() {
	string* str = new string[4];
	for (int i = 0; i < 4; i++) {
		cin >> str[i];
	}

	int asize = min(str[0].size(), str[1].size());
	int bsize = min(str[2].size(), str[3].size());
	int first = 0;
	//int seconed = 0;
	int b = 0;
	char day;
	char hour;
	for (int i = 0; i < asize; i++) {
		if (first == 1 && str[0][i] == str[1][i] && ((str[0][i] >= '0' && str[0][i] <= '9') || (str[0][i] >= 'A' && str[0][i] <= 'N'))) {
			hour = str[0][i];
			break;
		}
		if (isupper(str[0][i]) && str[0][i] == str[1][i] && first == 0 && (str[0][i] >= 'A' && str[0][i] <= 'G')) {
			day = str[0][i];
			first = 1;
		}
	}


	for (int i = 0; i < bsize; i++) {
		if (str[2][i] == str[3][i] && ((str[2][i] >= 'A' && str[2][i] <= 'Z') || (str[2][i] >= 'a' && str[2][i] <= 'z'))) {
			b = i;
			break;
		}
	}
	string sday = "";
	switch (day)
	{
	case 'A':
		sday = "MON";
		break;
	case 'B':
		sday = "TUE";
		break;
	case 'C':
		sday = "WED";
		break;
	case 'D':
		sday = "THU";
		break;
	case 'E':
		sday = "FRI";
		break;
	case 'F':
		sday = "SAT";
		break;
	case 'G':
		sday = "SUN";
		break;
	default:
		cout << "error input" << endl;
		break;
	}
	string shour;
	string smin;
	stringstream ss;

	int houri;

	if (hour >= 'A' && hour <= 'N') {
		houri = hour - 'A' + 10;
		ss << houri;
		ss >> shour;
	}
	else if (hour >= '0' && hour <= '9')
	{
		shour = "0";
		shour.push_back(hour);
	}
	else
	{
		cout << "error hour!" << endl;
	}

	stringstream ssb;
	ssb << b;
	ssb >> smin;

	if (b < 10)
		smin = "0" + smin;
	cout << sday << " " << shour << ":" << smin;
}

using namespace std;
bool issushu(int n);
int main() {
	vector<int> v;
	v.push_back(2);
	int n = 3;
	for (int i = v.size(); i < 1000;) {
		if (issushu(n))
			v.push_back(n);
		i = v.size();
		n += 2;
	}
	int a, b;
	cin >> a >> b;
	vector<int>::iterator it;
	int js = 0;
	for (it = v.begin() + a - 1; it != v.begin() + b; it++) {
		cout << *it;
		js++;
		if (js % 10 == 0)
			cout << endl;
		else if (it != v.begin() + b - 1)
		{
			cout << " ";
		}
	}
}

bool issushu(int m) {
	int i = 1;
	for (int j = 2; j < m; j++) {
		if (m % j == 0)
			i = 0;
	}
	return i;
}



#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

bool cmp(int a, int b);
using namespace std;

int main() {
	int n, num;
	cin >> n;
	int c;
	vector<int>* v = new vector<int>[5];
	for (int i = 0; i < n; i++) {
		cin >> num;
		c = num % 5;

		switch (c)
		{
		case 0:
			if (num % 2 == 0)
				v[0].push_back(num);
			break;
		case 1:

			v[1].push_back(num);
			break;
		case 2:

			v[2].push_back(num);
			break;
		case 3:

			v[3].push_back(num);
			break;
		case 4:

			v[4].push_back(num);
			break;
		default:
			cout << "input error!" << endl;
		}
	}
	int a1, a2, a3, a5, a4n;
	float a4;
	a1 = 0;
	a2 = 0;

	a4n = v[3].size();
	a4 = 0;
	vector<int>::iterator it0, it1, it3;
	if (!v[0].empty()) {
		for (it0 = v[0].begin(); it0 != v[0].end(); it0++) {
			//cout << "v0 " << *it0 << endl;
			a1 += *it0;
		}
	}
	if (!v[1].empty()) {
		int q = 0;
		for (it1 = v[1].begin(); it1 != v[1].end(); it1++) {
			//cout << "v1 " << *it1 << endl;
			if (q == 0) {
				a2 += *it1;
				q = 1;
			}
			else {
				a2 -= *it1;
				q = 0;
			}

		}
	}
	if (!v[2].empty()) {
		a3 = v[2].size();
	}
	if (!v[3].empty()) {
		for (it3 = v[3].begin(); it3 != v[3].end(); it3++) {
			a4 += *it3;
		}
		a4 = a4 / a4n;
	}
	if (!v[4].empty()) {
		sort(v[4].begin(), v[4].end(), cmp);
		a5 = *v[4].begin();
	}





	if (!v[0].empty()) {
		cout << a1 << " ";
	}
	else
	{
		cout << "N ";
	}

	if (!v[1].empty()) {
		cout << a2 << " ";
	}
	else
	{
		cout << "N ";
	}

	if (!v[2].empty()) {
		cout << a3 << " ";
	}
	else
	{
		cout << "N ";
	}

	if (!v[3].empty()) {
		cout << setiosflags(ios::fixed);
		cout << setprecision(1) << a4 << " ";
	}
	else
	{
		cout << "N ";
	}

	if (!v[4].empty()) {
		cout << a5;
	}
	else
	{
		cout << "N";
	}

}

bool cmp(int a, int b) {
	return a > b;
}

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b);
int main() {
	int a, b;
	map<int, int> m;
	do {
		cin >> a >> b;
		m.insert(pair<int, int>(a, b));

	} while (cin.get() != '\n');

	map<int, int> newm;
	map<int, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second > 0)
			newm.insert(pair<int, int>(it->first * it->second, it->second - 1));
	}

	vector<pair<int, int>> vec;

	for (it = newm.begin(); it != newm.end(); it++) {
		vec.push_back(pair<int, int>(it->first, it->second));
	}
	sort(vec.begin(), vec.end(), cmp);

	vector<pair<int, int>>::iterator itv;
	for (itv = vec.begin(); itv != vec.end(); itv++) {
		cout << itv->first << " " << itv->second;

		if (itv != vec.end() - 1)
			cout << " ";
		if (itv == vec.end() - 1 && (vec.end() - 1)->second != 0)
			cout << " 0 0";
	}
}

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}



#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <regex>

using namespace std;

std::vector<std::string> s_split(const std::string& in, const std::string& delim);
int main() {
	string str;
	getline(cin, str);
	//vector<string> v;
	auto s_result = s_split(str, "[\\s]+");
	vector<string>::reverse_iterator rit;
	for (rit = s_result.rbegin(); rit != s_result.rend(); rit++) {
		cout << *rit;
		if (rit != s_result.rend() - 1)
			cout << " ";
	}

}

std::vector<std::string> s_split(const std::string& in, const std::string& delim) {
	std::regex re{ delim };
	// ���� std::vector::vector (InputIterator first, InputIterator last,const allocator_type& alloc = allocator_type())
	// ���캯��,����ַ����ָ�
	return std::vector<std::string> {
		std::sregex_token_iterator(in.begin(), in.end(), re, -1),
			std::sregex_token_iterator()
	};
}

#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;

	int* num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[(i + m) % n];
	}

	for (int i = 0; i < n; i++) {
		cout << num[i];
		if (i != n - 1)
			cout << " ";
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> ss;
	int bol = 1;

	for (int j = 1; j < n; j++) {
		for (int i = 2; i <= sqrt(j); i++) {
			if (j % i == 0)
				bol = 0;
		}
		if (bol == 1)
			ss.push_back(j);
		bol = 1;
	}

	vector<int>::iterator it;
	int num = 0;
	for (it = ss.begin(); it != ss.end(); it++) {
		//cout << *it << endl;
		if (it != ss.end() - 1 && *(it + 1) - *it == 2)
			num++;
	}

	cout << num;
}