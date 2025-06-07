#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> ans(3, 0);
    for(int i=0;i<n;i++) ans[i%3]+=a[i];
    if(ans[0]>ans[1] && ans[0]>ans[2]) cout << "chest";
    else if(ans[1]>ans[2] && ans[1]>ans[0]) cout << "biceps";
    else cout << "back";
}
    
int main(){
    // int t; cin >> t;
    // while(t--){
        solve();
    //     cout << "\n";
    // }
    return 0;
}