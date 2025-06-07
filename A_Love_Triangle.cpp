#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i=1;i<=n;i++){
        int x; cin >> x;
        mp[i]=x;
    }

    bool cek=false;
    for(auto i:mp) if(mp[mp[mp[i.second]]]==i.second) cek=true;

    cout << (cek?"YES":"NO");

    return 0;
}