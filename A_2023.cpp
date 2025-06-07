#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    long long x=1;
    for(int i=0;i<n;i++) x*=a[i];

    if(2023%x!=0) cout << "NO";
    else{
        cout << "YES\n";
        k--;
        cout << 2023/x;
        while(k--) cout << " 1";
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