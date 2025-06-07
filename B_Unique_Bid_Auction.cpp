#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    map<int, int> mp, mp1;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        mp1[a[i]]=i+1;
    }
    int ans=-1;
    for(auto i:mp)
        if(i.second==1){ ans=mp1[i.first];break;}
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