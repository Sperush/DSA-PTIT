#include <bits/stdc++.h>
using namespace std;

int t,n,k,a[11],b[11]={};
bool gen_bitstring(){
	int l=-1;
	for(int i=n-1;i>=0;i--){
		if(!b[i] && l == -1){
			b[i] = 1;
			l = i;
		} else if(l<i) b[i]=1-b[i];
	}
	return l == -1;
}
main(){
	cin>>t;
	while(t--){
		b[11]={};
		set<vector<int>> c;
		cin>>n>>k;
		for(int i=0; i<n; i++) cin>>a[i];
		while(!gen_bitstring()){
			int sum = 0;
			vector<int> m;
			for(int i=0; i<n; i++){
				if(b[i]){
					sum+=a[i];
					m.push_back(a[i]);
				}
			}
			if(sum == k){
				sort(m.begin(), m.end());
				c.insert(m);
			}
		}
		if(c.empty()){
			cout << -1 << endl;
		} else {
			for(auto &d: c){
	            cout << "[";
	            for(int i=0; i<d.size(); i++){
	                cout << d[i]<<(i < d.size()-1 ? " ":"");
	            }
	            cout << "] ";
	        }
	        cout <<endl;
	    }
	}
}
