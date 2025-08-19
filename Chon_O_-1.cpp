#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		int m = 1 << n;
		int dp[m] = {}; 
		dp[0] = 0;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin >> a[i][j];
		for(int mask=0; mask<m; mask++){
			int row = __builtin_popcount(mask);
			if(row==n) break;
			int cur = dp[mask];
			for(int col=0; col<n; col++){
				if(!(mask & (1<<col))){
					int newmask = mask | (1<<col);
					dp[newmask] = max(dp[newmask], cur+a[row][col]);
				}
			}
		}
		cout << dp[m-1] << endl;
	}
	return 0;
}
