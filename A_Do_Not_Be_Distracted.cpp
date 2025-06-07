#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a, x="YES\n";cin >> a;
        set<char> b;
        b.insert(a[0]);
        for(int i=1;i<n;i++){
            if(a[i-1] == a[i]) continue;
            auto it=find(b.begin(), b.end(), a[i]);
            if(it != b.end()) x="NO\n";
            b.insert(a[i]);
        }
        cout << x;
    }
    return 0;
}