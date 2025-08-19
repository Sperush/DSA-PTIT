#include <bits/stdc++.h>
using namespace std;
bool gen_bitstring(int a[], int n, bool &isHAHA){
	int k = -1, isKe = 0;
	for(int i=n-1; i>=0; i--){
		if(a[i] == 0 && k == -1){
			a[i] = 1;
			k = i;
		} else if(k<i) a[i] = 1- a[i];
		if(i < n-1 && a[i] && a[i+1]) isKe = 1;
	}
	isHAHA = a[0] && !a[n-1] && !isKe;
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
		bool isHAHA=false;
		while(!last){
			if(isHAHA){
				for(int i=0; i<n; i++) cout << (a[i] == 1?"H":"A");
				cout << endl;
			}
			last = gen_bitstring(a, n, isHAHA);
		}
	}
	return 0;
}
