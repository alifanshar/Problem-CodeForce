#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans=0; cin >> n;
    vector<char> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    int x=a[0]-'A'+1, y=0;
    char b=a[0];
    for(int i=0;i<n;i++){
        if(a[i]==b) y++;
        else{
            if(y>=x) ans++;
            x=a[i]-'A'+1;
            y=1;
            b=a[i];
        }
    }
    if(y>=x) ans++;
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