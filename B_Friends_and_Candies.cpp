#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    long long sum=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    
    int x=sum/n, ans=0;
    for(int i=0;i<n;i++) if(a[i]>x) ans++;

    if(sum%n==0) cout << ans;
    else cout << -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}