#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<char> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        bool cek=true;
        for(int i=0;i<n;i++){
            if((a[i]=='R' || b[i]=='R') && a[i] != b[i]) cek=false;
        }
        if(cek) cout << "YES\n";
        else cout << "NO\n";
    }
}