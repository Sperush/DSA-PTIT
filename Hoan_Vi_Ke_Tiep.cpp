#include <bits/stdc++.h>
using namespace std;

int n, x[1001], a[1001]={}, isKT = 0;
bool Try(int j){
	for(int i=1; i<=n; i++){
		if(isKT > 1) return true;
		if(x[j] != i && !isKT) continue;
		if(!a[i]){
			x[j] = i;
			if(j == n){
				if(isKT){
					for(int i=1; i<=n; i++) cout << x[i] << " ";
					cout << endl;
					isKT++;
					return true;
				} else isKT = 1;
			} else {
				a[i] = 1;
				Try(j+1);
				a[i] = 0;
			}
		}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		isKT = 0;
		cin >> n;
		for(int i =1; i<=n; i++) cin >> x[i];
		if(!Try(1)){
			for(int i=1; i<=n; i++) cout << i << " ";
			cout << endl;
		}
	}
	return 0;
}
