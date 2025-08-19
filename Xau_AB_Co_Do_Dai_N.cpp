#include <bits/stdc++.h>
using namespace std;
bool gen_bitstring(int a[], int n){
	int k = -1;
	for(int i=n-1; i>=0; i--){
		if(a[i] == 0 && k == -1){
			a[i] = 1;
			k = i;
		} else if(k<i) a[i] = 1- a[i];
	}
	return k == -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n]={};
		bool last = false;
		while(!last){
			for(int i=0; i<n; i++) cout << (a[i] == 1?"B":"A");
			cout << " ";
			last = gen_bitstring(a, n);
		}
		cout << endl;
	}
	return 0;
}
