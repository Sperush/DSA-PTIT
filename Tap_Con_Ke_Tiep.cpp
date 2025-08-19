#include <bits/stdc++.h>
using namespace std;

int n, k, x[1001], isKT = 0;
bool Try(int j){
	for(int i=x[j-1]+1; i<=n; i++){
		if(isKT > 1) return true;
		if(x[j] != i && !isKT) continue;
		x[j] = i;
		if(j == k){
			if(isKT){
				for(int i = 1; i<=k; i++){
					cout << x[i] << " ";
				}
				cout << endl;
				isKT++;
				return true;
			} else isKT = 1;
		} else {
			Try(j+1);
		}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		isKT = 0;
		cin >> n >> k;
		for(int i =1; i<=k; i++) cin >> x[i];
		if(!Try(1)){
			for(int i = 1; i<=k; i++){
				cout << i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
