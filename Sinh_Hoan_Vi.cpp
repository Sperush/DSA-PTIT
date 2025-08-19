#include <bits/stdc++.h>
using namespace std;

int n, a[11], b[11]={};
void Try(int k){
	for(int i=1; i<=n; i++){
		if(!b[i]){
			a[k] = i;
			if(k==n){
				for(int m=1; m<=n; m++) cout << a[m];
				cout << " ";
			} else {
				b[i] = 1;
				Try(k+1);
				b[i] = 0;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		b[11] = {};
		Try(1);
		cout << endl;
	}
	return 0;
}
