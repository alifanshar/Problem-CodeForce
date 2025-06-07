#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, b=0; cin >> n >> x;
    vector<int> a(n+1, 0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        b=max(b, a[i]-a[i-1]);
    }
    b=max(b, (x-a[n])*2);
    cout << b;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}