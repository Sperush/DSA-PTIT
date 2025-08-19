#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, q, l, r;
	cin >> n >> q;
	long long a[n+1], b[n+1]={};
	for(int i=1; i<=n; i++){
		cin >> a[i];
		b[i] = b[i-1]+(a[i]>0 ? a[i]:0);
	}
	while(q--){
		cin >> l >> r;
		cout << b[r] - b[l-1] << endl;
	}
	return 0;
}
