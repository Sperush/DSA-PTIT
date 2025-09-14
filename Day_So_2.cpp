#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<vector<int>> b;
        b.push_back(a);
        while (b.back().size() > 1) {
            vector<int> p = b.back(), next;
            for (int i=0; i+1<p.size(); i++) next.push_back(p[i] + p[i+1]);
            b.push_back(next);	
        }
        for (int i=b.size()-1; i>=0; i--) {
            cout << "[";
            for (int j=0; j<b[i].size(); j++) cout << b[i][j] << (j+1 == b[i].size() ? "":" ");
            cout << "] ";
        }
        cout << endl;
    }
    return 0;
}

