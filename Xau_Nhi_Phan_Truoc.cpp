#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		int k = -1;
		for(int i=a.length()-1; i>=0; i--){
			if(a[i] == '1' && k == -1){
				a[i] = '0';
				k = i;
			} else if(k<i) a[i] = a[i] == '1'?'0':'1';
		}
		cout << a << endl;
	}
	return 0;
}
