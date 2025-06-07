#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    int x=0, b=0;
    for(int i=0;i<n;i++){
        if(a[i]==1 || a[i]==3) x++;
        if(a[i]==2) b++;
    }
    cout << x;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}