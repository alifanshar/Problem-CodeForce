#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    map<int, int> mp;
    bool cek = true;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
    }

    for(auto i:mp)
        if(i.second>2) mp[i.first+1]+=i.second-2, mp[i.first]=2;
    
    for(auto i:mp) if(i.second!=2) cek = false;

    if(cek) cout << "Yes";
    else cout << "No";
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}