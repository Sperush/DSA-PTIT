#include <bits/stdc++.h>
using namespace std;
bool gen_bitstring(int a[], int b[], int n, int &sum){
	int k = -1;
	for(int i = n -1; i >= 0; i--){
		if(a[i] ==0 && k == -1){
			a[i] = 1;
			k = i;
		} else if(k < i) a[i] = 1 - a[i];
		if(a[i] == 1) sum += b[i];
	}
	return k == -1;
}
int main(){
	int n, k;
	cin >> n >> k;
	int a[n] = {}, b[n];
	for(int i = 0; i < n; i++) cin >> b[i];
	bool last = false;
	int sum = 0, count = 0;
	while(!last){
		if(sum == k){
			for(int i = 0; i < n; i++){
				if(a[i] == 1) cout << b[i] << " ";
			}
			cout << endl;
			count++;
		}
		sum = 0;
		last = gen_bitstring(a, b, n, sum);
	}
	cout << count;
	return 0;
}
