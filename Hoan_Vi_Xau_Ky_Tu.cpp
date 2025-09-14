#include <bits/stdc++.h>
using namespace std;
int t,n,a[11],b[11]={};
string str;
void Try(int i){
	for(int j=1; j<=n; j++){
		if(!b[j]){
			a[i]=j;
			if(i==n){
				for(int m=1; m<=n; m++) cout<<str[a[m]-1];
				cout << " ";
			} else {
				b[j] = 1;
				Try(i+1);
				b[j] = 0;
			}
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> str;
		n = str.length();
		Try(1);
		cout << endl;
	}
}
