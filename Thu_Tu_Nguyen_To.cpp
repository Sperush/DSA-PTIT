#include <bits/stdc++.h>
using namespace std;

int n, k, a[21], dem = 1;

bool isSoNT(int a){
	if(a < 2) return false;
	for(int i = 2; i * i <= a; i++){
		if(a%i==0) return false;
	}
	return true;
}

void ToHop(int m){
	for(int i = a[m-1]+1; i <= n; i++){
		a[m] = i;
		if(m == k ){
			if(isSoNT(dem)){
				cout << dem << ": ";
				for(int j = 1; j <= k; j++) cout << a[j] << " ";
				cout << endl;
			}
			dem++;
		} else {
			ToHop(m+1);
		}
	}
}

int main(){
	cin >> n >> k;
	ToHop(1);
	return 0;
}
