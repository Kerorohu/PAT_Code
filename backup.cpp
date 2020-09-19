// PATCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	// 调用 std::vector::vector (InputIterator first, InputIterator last,const allocator_type& alloc = allocator_type())
	// 构造函数,完成字符串分割
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