#include <bits/stdc++.h>
using namespace std;

int n, k, b[20]={};
void Try(int i, int a[]){
	for(int j=1; j<=n; j++){
		b[i] = a[j];
		if(i == k){
			for(int m=1; m<=n; m++) cout << b[m]<< " ";
			cout << endl;
		} else {
			Try(i+1, a);
		}
	}
}
int main(){
	cin >> n >> k;
	set<int> a;
	for(int i=0; i<n; i++){
		int s;
		cin >> s;
		a.insert(s);
	}
	int leg = a.size();
	sort(a, a+leg);
	n=a[leg-1];
	Try(1, a);
	return 0;
}
