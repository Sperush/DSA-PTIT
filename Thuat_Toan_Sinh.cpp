#include <iostream>
using namespace std;
bool isThuanNghich(int a[], int n){
	for(int i = 0; i < n/2;i++){
		if(a[i] != a[n-i-1]) return false;
	}
	return true;
}
bool gen_bitstring(int a[], int n){
	int k = -1;
	for(int i = n-1; i >= 0; i--){
		if(a[i] == 0 && k == -1){
			a[i] = 1;
			k = i;
		} else if(k < i) a[i] = 1- a[i];
	}
	return k == -1;
}
int main(){
	int n;
	cin >> n;
	int a[n] = {};
	bool last = false;
	while(!last){
		if(isThuanNghich(a, n)){
			for(int i = 0; i < n; i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
		last = gen_bitstring(a, n);
	}
	return 0;
} 
