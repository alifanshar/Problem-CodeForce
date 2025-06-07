#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m=0, p; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(m<a[i]){
            m=a[i];
            p=i;
        }
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(i==p) continue;
        else {
            x=max(x, a[i]);
            a[i]-=m;
        }
    }
    a[p]-=x;
    for(auto i:a) cout << i << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}