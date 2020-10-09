//想复杂了整数相加用了string
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <algorithm>
//
//using namespace std;
//
//int bebig(string, string);
//char* absab(string, string);
//
//int main() {
//
//}
//
//int bebig(string a, string b,string c) {
//	
//}
//
//char* absab(string a, string b) {
//	int asize = a.size()-1;
//	int bsize = b.size()-1;
//	int az = 0, bz = 0;
//	if (a[0] = '-') {
//		asize = asize - 1;
//		az = 1;
//	}
//	if (b[0] = '-') {
//		bsize = bsize - 1;
//		bz = 1;
//	}
//
//	int abmax = max(asize, bsize);
//	int j = 0, sum = 0;
//	int char[max];
//
//	if (az != bz) {
//		for (; az =< asize || bz =< bsize; az++, bz++) {
//			if (asize > 0 && bsize > 0) {
//				sum = (int)(a[az] - '0') - (int)(b[bz] - '0');
//			}
//			else if (asize <= 0) {
//				sum = (int)(b[bsize] - '0');
//			}
//			else {
//				sum = (int)(a[asize] - '0');
//			}
//			if (j > 0) {
//				sum += j;
//				j = 0;
//			}
//			if (sum >= 10)
//				j = sum / 10;
//			//最左一位开始
//			char[i] = (sum % 10) + '0';
//		}
//	}
//
//	for (; asize >= 0 || bsize >= 0; asize--, bsize--) {
//		if (asize > 0 && bsize > 0) {
//			sum = (int)(a[asize] - '0') + (int)(b[bsize] - '0');
//		}
//		else if (asize <= 0) {
//			sum = (int)(b[bsize] - '0');
//		}
//		else {
//			sum = (int)(a[asize] - '0');
//		}
//		if (j > 0) {
//			sum += j;
//			j = 0;
//		}
//		if (sum >= 10)
//			j = sum / 10;
//		//最左一位开始
//		char[i] = (sum % 10) + '0';
//	}
//
//	return char;
//}