#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    int ga=0, ge=0, m=*min_element(a.begin(), a.end());
    for(int i=0;i<n;i++) (a[i]&1)?ga++:ge++;
    cout << ((ga==0 || ge==0 || m%2==1)?"YES":"NO");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}