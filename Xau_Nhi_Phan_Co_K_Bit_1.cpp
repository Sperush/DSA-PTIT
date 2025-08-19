#include <bits/stdc++.h>
using namespace std;
bool gen_bitstring(int a[], int n, int &dem){
	dem = 0;
	int k = -1;
	for(int i=n-1; i>=0; i--){
		if(a[i] == 0 && k == -1){
			a[i] = 1;
			k = i;
		} else if(k<i) a[i] = 1- a[i];
		if(a[i] == 1) dem++;
	}
	return k == -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n]={}, dem = 0;;
		bool last = false;
		while(!last){
			if(dem == k){
				for(int i=0; i<n; i++) cout << a[i];
				cout << endl;
			}
			last = gen_bitstring(a, n, dem);
		}
	}
	return 0;
}
