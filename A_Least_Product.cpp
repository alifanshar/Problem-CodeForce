#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    long long p=1;
    for(auto i:a){
        if(i<0) p*=-1;
        if(i==0) p*=0;
    }

    if(p>0) cout << "1\n1 0";
    else cout << '0';
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}