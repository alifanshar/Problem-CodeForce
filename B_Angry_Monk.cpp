#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, m=0; cin >> n >> k;
    vector<int> a(k);
    for(int i=0;i<k;i++){
        cin >> a[i];
        m = max(m, a[i]);
    }
    int ans=0;
    sort(a.begin(), a.end(), greater<int>());
    for(int i=1;i<k;i++){
        if(1==a[i])break;
        ans+=a[i]-1;
    }
    cout << n-m+ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}