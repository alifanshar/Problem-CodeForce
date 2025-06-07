#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n%7==0) cout << n;
    else{
        int x;
        n-=n%10;
        for(int i=0;i<10;i++) if((n+i)%7==0) x=n+i;
        cout << x;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}