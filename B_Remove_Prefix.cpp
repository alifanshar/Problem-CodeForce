#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, x=0; cin >> n;
    vector<int> a(n);
    map<int, int> b;
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[a[i]]++;
        if(b[a[i]]>1) x++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(x==0) break;
        if(b[a[i]]>1) x--;
        ans++, b[a[i]]--;
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