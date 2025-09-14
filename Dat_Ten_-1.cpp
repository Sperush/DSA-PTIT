#include <bits/stdc++.h>
using namespace std;

int n, k, a[30]={};
void Try(vector<string> &m, int i){
	for(int j=a[i-1]+1; j<=n; j++){
		a[i] = j;
		if(i == k){
			for(int l=1; l<=k; l++) cout << m[a[l]-1] << " ";
			cout << endl;
		} else {
			Try(m, i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	set<string> str;
	for(int i =0; i<n; i++){
		string s;
		cin >> s;
		str.insert(s);
	}
	vector<string> m(str.begin(), str.end());
	n = m.size();
	a[0] = 0;
	Try(m, 1);
	return 0;
} 
