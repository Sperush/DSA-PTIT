#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<string> word;
unordered_set<string> a;
void Try(int i, int b[]){
	for(int j=b[i-1]+1; j<=n ;j++){
		b[i] = j;
		if(i == k){
			for(int m=1; m<=n; m++){
				cout << word[b[m]-1] << " ";
			}
			cout << endl;
		} else {
			Try(i+1, b);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		unordered_set<string> a;
		for(int i=1; i<=n; i++){
			string x;
			cin >> x;
			a.insert(x);
		}
		word.assign(a.begin(), a.end());
		n = word.size();
		int b[n]={};
		Try(1, b);
	}
	return 0;
}
