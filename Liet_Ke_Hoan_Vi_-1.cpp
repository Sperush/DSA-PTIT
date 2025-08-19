#include <bits/stdc++.h>
using namespace std;

int a[11] , b[11], dem = 1;
void HoanVi(int k, int n){
	for(int i = 1; i <= n; i++){
		if(b[i]){
			a[k] = i;
			if(k == n){
				cout << dem << ": ";
				for(int i = 1; i <= n;i++){
					cout << a[i] << " ";
				}
				dem++;
				cout << endl;
			} else {
				b[i] = 0;
				HoanVi(k+1, n);
				b[i] = 1;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) b[i] = 1;
	HoanVi(1, n);
	return 0;
}
