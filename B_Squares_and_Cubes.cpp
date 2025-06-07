#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    set<int> a;
    for(int i=1;i*i<=n;i++) a.insert(i*i);
    for(int i=1;i*i*i<=n;i++) a.insert(i*i*i);
    cout << a.size();
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}