#include <bits/stdc++.h>
using namespace std;

int n, k, a[30]={};
void Try(int i){
	for(int j=a[i-1]+1; j<=n; j++){
		a[i] = j;
		if(i == k){
			for(int l=1; l<=k; l++){
				char s = 'A'+(a[l]-1);
				cout << s;
			}
			cout << endl;
		} else {
			Try(i+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
	}
	return 0;
}
