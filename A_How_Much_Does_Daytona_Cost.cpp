#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        string s="NO\n";
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == k) s = "YES\n";
        }
        cout << s;
    }
    return 0;
}