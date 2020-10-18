#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int a[str.size()][2];
	int countp,countt,zcount;
	countp = 0;
	countt = 0;
	zcount = 0;
	int p = 0,t = str.size() -1;
	
	while (true)
	{
		if(str[p] != 'P')
			p++;
		else
		{
			break;
		}
		
	}

	while (true)
	{
		if(str[t] != 'T')
			t--;
		else
		{
			break;
		}
		
	}

	for(int i = p;i<str.size();i++){
		if(str[i] == 'P')
			countp++;
		a[i][0] = countp;
	}

	for(int i = str.size()-1;i>t;i--){
		if(str[i] == 'T')
			countt++;
		a[i][1] = countt;
	}

	for(int i = str.size()-1;i>t;i--){
		if(str[i] == 'A'){
			zcount += countp * countt;
			zcount = zcount % 1000000007;
		}	
	}
	

	//PATPAPTP
	
	cout << zcount;
}