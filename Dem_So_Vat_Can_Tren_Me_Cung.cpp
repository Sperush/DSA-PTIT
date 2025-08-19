#include <bits/stdc++.h>
using namespace std;

bool nhap(char a[1001][1001], int n, int m, int &dem){
	for(int i = 0; i < n; i++) {
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			if(a[i][j] != '.' && a[i][j] != '#') return false;
			if(a[i][j] == '#'){
				if(a[i][j-1] != '#') dem++;
				if(i > 0 && a[i-1][j] == '#' ) dem--;
			}
		}
	}
	return true;
}

int main(){
	int n, m, dem = 0;
	cin >> n >> m;
	char a[1001][1001] = {};
	if(nhap(a, n , m, dem)) cout << dem;
	return 0;
} 
