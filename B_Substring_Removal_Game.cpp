#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s; cin >> s;
    int n = s.size(), x=0;
    vector<int> a;
    for(int i=0;i<n;i++){
        if(s[i]=='1') x++;
        else{ 
            a.push_back(x);
            x=0;
        }
    }
    if(x) a.push_back(x);
    sort(a.begin(), a.end(), greater<>());

    int ans=0;
    for(int i=0;i<a.size();i+=2) ans+=a[i];
    cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}