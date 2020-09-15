//#include <iostream>
//#include <sstream>
//#include <string>
//
//using namespace std;
//string ntohanzi(int);
//
//int main() {
//	int n;
//	cin >> n;
//	int num[100];
//	int cn = 0,sum = 0;
//	string numstr;
//	if (n < 0)
//		cout << "error";
//	while (n > 0) {
//		num[cn] = n % 10;
//		n = n / 10;
//		cn++;
//	}
//
//	for (int i = 0; i < 100; i++) {
//		sum += num[i];
//	}
//
//	numstr = to_string(sum);
//	/*string* hanzi = new string[numstr.size()];*/
//	for (int i = 0; i < numstr.size(); i++) {
//		//hanzi[i] = ntohanzi(numstr[i]);
//		cout << ntohanzi(numstr[i]);
//		if (i < numstr.size() - 1)
//			cout << " ";
//	}
//
//	
//}
//
//string ntohanzi(int num) {
//	switch (num) {
//		case 0:
//			return "ling";
//		case 1:
//			return  "yi";
//		case 2:
//			return  "er";
//		case 3:
//			return  "san";
//		case 4:
//			return  "si";
//		case 5:
//			return  "wu";
//		case 6:
//			return  "liu";
//		case 7:
//			return "qi";
//		case 8:
//			return "ba";
//		case 9:
//			return "jiu";
//	}
//}