#include <bits/stdc++.h>
using namespace std;

int n, x[1001], a[1001]={}, dem=1;
void Try(int j, int k){
	for(int i=1; i<=n; i++){
		if(k == 0) return;
		if(!a[i]){
			if(x[j] == i) k--;
			if(j == n){
				dem++;
				if(k == 0) cout << dem << endl;
			} else {
				a[i] = 1;
				Try(j+1, k);
				a[i] = 0;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		dem = 0;
		cin >> n;
		for(int i =1; i<=n; i++) cin >> x[i];
		int k = n;
		Try(1, k);
	}
	return 0;
}
