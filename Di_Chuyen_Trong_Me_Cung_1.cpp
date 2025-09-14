#include <bits/stdc++.h>
using namespace std;
int t,n,a[10][10];
string str="";
vector<string> path; 
void Try(int i, int j){
	if(i == n -1 && j == n -1){
		path.push_back(str);
		return;
	}
	if(i+1 < n && a[i+1][j]){
		str.push_back('D');
		Try(i+1, j);
		str.pop_back();
	}
	if(j+1 < n && a[i][j+1]){
		str.push_back('R');
		Try(i, j+1);
		str.pop_back();
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n*n; i++) cin >> a[i/n][i%n];
		str.clear();
		path.clear(); 
		if(a[0][0]) Try(0,0);
		if(!path.size()) cout << -1;
		else {
			sort(path.begin(), path.end());
			for (string &p: path) cout << p << " ";
		}
		cout << endl;
	}
}
