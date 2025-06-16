#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int a, b; cin >> a >> b;
    string s; cin >> s;
    map<char, int> mp={{'R', 0}, {'L', 0}, {'U', 0}, {'D', 0}};
    for(auto i:s) mp[i]++;

    cout << ((a>0 && mp['R']<a) || (a<0 && mp['L']<abs(a)) || (b>0 && mp['U']<b) || (b<0 && mp['D']<abs(b))?"NO":"YES");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}