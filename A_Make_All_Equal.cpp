#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int b=0;
    for(auto i:mp)
        if(i.second>b) b=i.second;
    cout << n-b;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}