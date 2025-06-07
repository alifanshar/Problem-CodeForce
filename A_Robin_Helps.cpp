#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, x=0, y=0; cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>=k) x+=a[i];
        if(a[i]==0 && x>0){
            x--;
            y++;
        }
    }
    cout << y;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}