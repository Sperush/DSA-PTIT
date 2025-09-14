#include <bits/stdc++.h>
using namespace std;

int n, k, a[16]={};
bool isNext, isNext2;
bool isPhatLoc(){
	return !isNext && !isNext2;
}
bool gen_bitstring(){
	int k = -1;
	int dem=0;
	isNext = isNext2 = false;
	for(int i =n-2; i>0; i--){
		if(!a[i] && k == -1){
			a[i]=1;
			k=i;
		} else if(k<i) a[i]=1-a[i];
		if(a[i] && !isNext){
			isNext=a[i+1] || a[i-1];
		} else {
			if(!a[i+1]) dem++;
			else dem =0;
			if(!isNext2) isNext2= dem > 2;
		}
	}
	return k == -1;
}

int main(){
	cin >> n;
	bool last = false;
	a[0] = 1;
	while(!last){
		last = gen_bitstring();
		if(isPhatLoc()){
			for(int i=0; i<n; i++) cout << (a[i]?"8":"6");
			cout << endl;
		}
	}
	return 0;
}
