#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    for(int i=3;i>0;i--){
        int a=max(1, n-26*(i-1));
        char x='a'+a-1;
        cout << x;
        n-=a;
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