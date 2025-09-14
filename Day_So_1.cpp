#include <bits/stdc++.h>
using namespace std;

int n, t;
int a[10];
void Try(int i){
	if(n == 1) return;
	if(i==n-1){
		cout << "[";
		for(int j=0; j<n-1; j++) cout<<a[j]<<(j == n-2 ? "]":" ");
		cout << endl;
		n--;
		return;
	}
	int x = a[i]+a[i+1];
	a[i]=x;
	Try(i+1);
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++) cin >>a[i];
		cout << "[";
		for(int j=0; j<n; j++) cout<<a[j]<<(j == n-1 ? "]":" ");
		cout << endl;
		while(n > 1){
			Try(0);
		}
	} 
}

