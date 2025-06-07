#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    int i=0, j=1e9;
    vector<int> a;
    for(int k=0;k<n;k++){
        int x, y; cin >> x >> y;
        if(x==1) i=max(y, i);
        else if(x==2) j=min(y, j);
        else a.push_back(y);
    }
    int ans=j-i+1;
    for(int k=0;k<a.size();k++) if(i<=a[k] && a[k]<=j) ans--;
    cout << max(0, ans);
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}