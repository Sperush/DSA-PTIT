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
		int cnt[10000] = {};
		for(int i=0; i<n; i++)
		{
			int x;
			cin >> x;
			cnt[x]++;
		}
		for(int i= 1000; i<=9999; i++){
			while(cnt[i]--){
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
