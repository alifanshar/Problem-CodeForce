#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b; cin >> a >> b;
    long long l=-1, r=b;

    auto good = [&](long long x){
        // x--;
        x=x*(x+1)/2;
        return x<=b-a;
    };

    while(l+1<r){
        long long m=(l+r)/2;
        if(good(m)) l=m;
        else r=m;
    }
    cout << l+1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}