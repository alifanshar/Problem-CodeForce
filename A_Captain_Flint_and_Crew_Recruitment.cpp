#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    
    vector<int> a={6, 10, 14, 0};
    int x=0;
    bool cek=false, cek1=false;
    if(n-30>0) cek=true, a[3]=n-30;
    if(a[0]==a[3] || a[1]==a[3] || a[2]==a[3]) a[3]--, a[2]++; 
    
    if(cek){ 
        cout << "YES\n";
        for(auto i:a) cout << i << ' ';
    }else cout << "NO";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}