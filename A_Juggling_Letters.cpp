#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<string> a(n);
    map<char, int> mp;
    for(auto &i:a) cin >> i;
    for(int i=0;i<n;i++)
        for(auto j:a[i])
            mp[j]++;

    bool cek=true;
    for(auto i:mp) if(i.second%n!=0) cek=false;

    cout << (cek?"YES":"NO");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}