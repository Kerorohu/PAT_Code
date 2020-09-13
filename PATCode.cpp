// PATCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>

using namespace std;

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
int main() {
	int num;
	string str = "";
	cin >> num;
	string* p = new string[num];
	for (int i = 0; i < num; i++) {
		cin >> str;
		p[i] = str;
	}
	int countap = 0,countpat = 0,countta = 0,countp=0,countt=0;
	int seep = 0,seet = 0;
	int t = 0;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < p[i].size(); j++) {
			if (p[i][j] != 'P' && p[i][j] != 'A' && p[i][j] != 'T') {
				//cout << "NO" << endl;
				t = 1;
				break;
			}
			else
			{	//cout << "pij= " << p[i][j] << endl;
				if (p[i][j] == 'P') {
					seep = 1;
					countp++;
				}
				else if(p[i][j] == 'T')
				{
					countt++;
					if(seep == 1)
						seet = 1;
				}
				if (p[i][j] == 'A' && seep == 0) {
					countap++;
				}
				if (seep == 1 && seet == 0 && p[i][j] == 'A') {
					countpat++;
				}
				if (seep == 1 && seet == 1 && p[i][j] == 'A') {
					countta++;
				}
			}
		}
		//cout << "ap " << countap << " pat " << countpat << "ta " << countta << endl;
		//cout << "countp " << countp << " countt " << countt << endl;
		if (countta == countap * countpat && t != 1 && countpat != 0 && countp == 1 && countt == 1) {
			cout << "YES" << endl;
			//cout << p[i] << endl;
		}
		else
		{
			cout << "NO" << endl;
			t = 0;
		}
		countap = 0;
		countpat = 0;
		countta = 0;
		countp = 0;
		countt = 0;
		seep = 0;
		seet = 0;
	}
}