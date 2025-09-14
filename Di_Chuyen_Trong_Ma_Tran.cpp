#include <bits/stdc++.h>
using namespace std;

long long C(int n, int k) {
    if (k > n) return 0;
    if (k > n-k) k = n-k;
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - k + i) / i;
    }
    return res;
}

main() {
	int t;
	cin>>t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int x;
	    for(int i=0;i<n;i++)
	    	for(int j=0;j<m;j++) cin >>x;
	    cout << C(n+m-2, n-1) << endl;
	}
}
