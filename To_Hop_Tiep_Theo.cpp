#include <bits/stdc++.h>
using namespace std;

int n, k, x[41], a[41], isKT = 0;
bool Try(int j){
	for(int i=x[j-1]+1; i<=n; i++){
		if(isKT > 1) return true;
		if(x[j] != i && !isKT) continue;
		x[j] = i;
		if(j == k){
			if(isKT){
				int dem = 0;
				for(int m = 1; m<=k; m++){
					for(int l = 1; l<=k; l++){
						if(x[m] == a[l]){
							dem++;
							break;
						}
					}
				}
				cout << k-dem << endl;
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
		for(int i =1; i<=k; i++){
			cin >> x[i];
			a[i] = x[i];
		}
		if(!Try(1)){
			cout << k << endl;
		}
	}
	return 0;
}
