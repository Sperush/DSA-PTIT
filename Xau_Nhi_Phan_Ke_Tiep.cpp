#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string x;
		cin >> x;
		int k = -1;
		for(int i=x.length()-1; i>=0;i--){
			if(x[i] == '0' && k == -1){
				x[i] = '1';
				k=i;
			} else if(k < i) x[i] = x[i]=='1'?'0':'1';
		}
		cout << x << endl;
	}
	return 0;
}
