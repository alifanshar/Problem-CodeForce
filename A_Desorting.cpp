#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    int x=abs(a[1]-a[0]);
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            cout << 0;
            return;
        }
        x=min(x, abs(a[i-1]-a[i]));
    }
    cout << x/2+1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}