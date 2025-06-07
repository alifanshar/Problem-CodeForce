#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b; cin >> n;
    for(int i=1;i<=n;i++){
        int x; cin >> x;
        if(x==1) a=i;
        if(x==n) b=i;
    }
    cout << min({max(a, b), n-min(a, b)+1, min(a, b)+n-max(a, b)+1});
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}