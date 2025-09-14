#include <bits/stdc++.h>
using namespace std;

int n,k,maxB;
vector<int> c; 
void Try(int i, int start, vector<int> b){
	if(c.size() == k){
		for(int j=0; j<k; j++) cout << c[j] << " ";
		cout << endl;
		return;
	}
	for(int j=start; j<b.size(); j++){
		c.push_back(b[j]);
		Try(i+1, j+1, b);
		c.pop_back();
	}
}
main(){
	cin >> n >> k;
	set<int> a;
	for(int i=0 ; i<n; i++){
		int s;
		cin >> s;
		a.insert(s);
	}
	vector<int> b(a.begin(), a.end());
	Try(0, 0, b);
}

