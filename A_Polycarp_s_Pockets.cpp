#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
    }
    int ans=0;
    for(auto i:mp) ans=max(ans, i.second);

    cout << ans;

    return 0;
}