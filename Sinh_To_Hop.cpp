#include <bits/stdc++.h>
using namespace std;

int n, k, a[16]={};
void Try(int j){
	for(int i=a[j-1]+1; i<=n; i++){
		a[j] = i;
		if(j==k){
			for(int m=1; m<=k; m++) cout << a[m];
			cout << " ";
		} else {
			Try(j+1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
	return 0;
}
