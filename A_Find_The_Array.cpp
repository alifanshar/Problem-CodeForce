#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    int ans=1, x=1;
    while(n>1){
        ans++;
        if(n-(x+2)<0)x+=1;
        else x+=2;
        n-=x;
    }
    cout << ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}