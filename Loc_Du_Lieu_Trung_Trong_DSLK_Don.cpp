#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	unordered_set<int> a(n);
	for(int i =0; i < n; i++){
		int k;
		cin >> k;
		a.insert(k);
	}
	vector<int> v(a.begin(), a.end());
	reverse(v.begin(), v.end());
	for(int x : v) cout << x << " ";
	return 0;
}
