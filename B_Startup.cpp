#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, k; cin >> n >> k;
    map<int, int> mp;
    int sum=0;
    for(int i=0;i<k;i++){
        int x, y; cin >> x >> y;
        mp[x]+=y;
        sum+=y;
    }

    vector<int> a;
    for(auto it:mp) a.push_back(it.second);
    sort(a.begin(), a.end());
    int ans=0, i=a.size()-1;
    while(n--){
        ans+=a[i];
        i--;
        if(i<0) break;
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