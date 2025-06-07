#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    long long x=0, y=0;
    for(int i=0;i<n;i++){
        long long p; cin >> p;
        if(p<0) x+=p;
        else y+=p;
    }
    cout << abs(abs(x)-y);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}